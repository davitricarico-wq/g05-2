#include <SPI.h>
#include <MFRC522.h>
#include <Preferences.h>
#include <string.h>

namespace Configuracao
{
  constexpr byte pinoRfidSs = 5;
  constexpr byte pinoRfidReset = 17;
  constexpr byte pinoSpiSck = 18;
  constexpr byte pinoSpiMiso = 19;
  constexpr byte pinoSpiMosi = 23;
  constexpr byte pinoBuzzer = 25;
  constexpr byte pinoLedVerde = 26;
  constexpr byte pinoLedVermelho = 33;
  constexpr byte pinoBotao = 27;

  constexpr unsigned long debounceMs = 25;
  constexpr unsigned int frequenciaBipeHz = 2000;
  constexpr unsigned long duracaoBipeMs = 50;
  constexpr unsigned long velocidadeSerial = 115200;
  constexpr byte maximoCartoes = 20;
}

enum class EstadoEmergencia
{
  Normal,
  Emergencia
};

class BotaoEmergencia
{
public:
  explicit BotaoEmergencia(byte pino) : pino_(pino) {}

  void iniciar() { pinMode(pino_, INPUT_PULLUP); }

  bool foiPressionado(unsigned long agora)
  {
    const bool leitura = digitalRead(pino_);

    if (leitura != ultimaLeitura_)
    {
      ultimaMudanca_ = agora;
    }

    if (agora - ultimaMudanca_ > Configuracao::debounceMs && leitura != estadoEstavel_)
    {
      estadoEstavel_ = leitura;
      if (estadoEstavel_ == LOW)
      {
        ultimaLeitura_ = leitura;
        return true;
      }
    }

    ultimaLeitura_ = leitura;
    return false;
  }

private:
  const byte pino_;
  bool ultimaLeitura_ = HIGH;
  bool estadoEstavel_ = HIGH;
  unsigned long ultimaMudanca_ = 0;
};

class IndicadorEstado
{
public:
  IndicadorEstado(byte pinoVerde, byte pinoVermelho)
      : pinoVerde_(pinoVerde), pinoVermelho_(pinoVermelho) {}

  void iniciar()
  {
    pinMode(pinoVerde_, OUTPUT);
    pinMode(pinoVermelho_, OUTPUT);
  }

  void mostrar(EstadoEmergencia estado)
  {
    const bool emergencia = estado == EstadoEmergencia::Emergencia;
    digitalWrite(pinoVerde_, emergencia ? LOW : HIGH);
    digitalWrite(pinoVermelho_, emergencia ? HIGH : LOW);
  }

private:
  const byte pinoVerde_;
  const byte pinoVermelho_;
};

class SinalizadorSonoro
{
public:
  explicit SinalizadorSonoro(byte pino) : pino_(pino) {}

  void iniciar() { pinMode(pino_, OUTPUT); }

  void confirmarLeitura()
  {
    tone(pino_, Configuracao::frequenciaBipeHz, Configuracao::duracaoBipeMs);
  }

private:
  const byte pino_;
};

class LeitorCracha
{
public:
  LeitorCracha(byte pinoSs, byte pinoReset) : leitor_(pinoSs, pinoReset), pinoSs_(pinoSs) {}

  void iniciar()
  {
    SPI.begin(Configuracao::pinoSpiSck, Configuracao::pinoSpiMiso,
              Configuracao::pinoSpiMosi, pinoSs_);
    leitor_.PCD_Init();
  }

  bool lerUid(MFRC522::Uid &uid)
  {
    if (!leitor_.PICC_IsNewCardPresent() || !leitor_.PICC_ReadCardSerial())
    {
      return false;
    }

    uid = leitor_.uid;
    leitor_.PICC_HaltA();
    leitor_.PCD_StopCrypto1();
    return true;
  }

private:
  MFRC522 leitor_;
  const byte pinoSs_;
};

class ControlePresenca
{
public:
  bool iniciar()
  {
    if (!preferencias_.begin("controle-rfid", false))
    {
      return false;
    }

    const size_t tamanhoSalvo = preferencias_.getBytesLength("cartoes");
    if (tamanhoSalvo == sizeof(cartoes_))
    {
      if (preferencias_.getBytes("cartoes", cartoes_, sizeof(cartoes_)) != sizeof(cartoes_))
      {
        return false;
      }
    }
    else if (tamanhoSalvo != 0)
    {
      Serial.println("Aviso: dados antigos invalidos; iniciando lista vazia.");
    }
    return true;
  }

  // Consulta o estado anterior do UID e grava o estado inverso.
  bool registrarLeitura(const MFRC522::Uid &uid, bool &dentro)
  {
    if (uid.size == 0 || uid.size > sizeof(cartoes_[0].uid))
    {
      return false;
    }

    int indice = -1;
    int primeiraVaga = -1;
    for (byte i = 0; i < Configuracao::maximoCartoes; ++i)
    {
      if (cartoes_[i].tamanho == uid.size &&
          memcmp(cartoes_[i].uid, uid.uidByte, uid.size) == 0)
      {
        indice = i;
        break;
      }
      if (primeiraVaga < 0 && cartoes_[i].tamanho == 0)
      {
        primeiraVaga = i;
      }
    }

    if (indice < 0)
    {
      indice = primeiraVaga;
    }
    if (indice < 0)
    {
      Serial.println("Limite de cartoes atingido.");
      return false;
    }

    RegistroCartao anterior = cartoes_[indice];
    if (anterior.tamanho == 0)
    {
      memcpy(cartoes_[indice].uid, uid.uidByte, uid.size);
      cartoes_[indice].tamanho = uid.size;
    }
    cartoes_[indice].dentro = !anterior.dentro;

    if (preferencias_.putBytes("cartoes", cartoes_, sizeof(cartoes_)) != sizeof(cartoes_))
    {
      cartoes_[indice] = anterior;
      Serial.println("Falha ao salvar o estado do cartao.");
      return false;
    }

    dentro = cartoes_[indice].dentro;
    return true;
  }

private:
  struct RegistroCartao
  {
    byte uid[10] = {};
    byte tamanho = 0; // zero indica vaga livre
    bool dentro = false;
  };

  Preferences preferencias_;
  RegistroCartao cartoes_[Configuracao::maximoCartoes] = {};
};

class SistemaMonitoramento
{
public:
  SistemaMonitoramento()
      : botao_(Configuracao::pinoBotao),
        indicador_(Configuracao::pinoLedVerde, Configuracao::pinoLedVermelho),
        sinalizador_(Configuracao::pinoBuzzer),
        leitor_(Configuracao::pinoRfidSs, Configuracao::pinoRfidReset) {}

  void iniciar()
  {
    Serial.begin(Configuracao::velocidadeSerial);
    botao_.iniciar();
    indicador_.iniciar();
    sinalizador_.iniciar();
    indicador_.mostrar(estado_);
    armazenamentoDisponivel_ = presenca_.iniciar();
    leitor_.iniciar();

    Serial.println("Sistema inicializado!");
    Serial.println("STATUS: NORMAL");
    if (!armazenamentoDisponivel_)
    {
      Serial.println("Erro: memoria de cartoes indisponivel.");
    }
  }

  void atualizar()
  {
    if (botao_.foiPressionado(millis()))
    {
      estado_ = estado_ == EstadoEmergencia::Normal
                    ? EstadoEmergencia::Emergencia
                    : EstadoEmergencia::Normal;
      indicador_.mostrar(estado_);
      Serial.println(estado_ == EstadoEmergencia::Emergencia ? "EMERGENCIA" : "NORMAL");
    }

    MFRC522::Uid uid;
    if (leitor_.lerUid(uid))
    {
      bool dentro;
      if (armazenamentoDisponivel_ && presenca_.registrarLeitura(uid, dentro))
      {
        Serial.print("Cartao UID: ");
        for (byte i = 0; i < uid.size; ++i)
        {
          Serial.printf("%02X", uid.uidByte[i]);
          if (i + 1 < uid.size) Serial.print(":");
        }
        Serial.println(dentro ? " | DENTRO DA AREA" : " | FORA DA AREA");
        sinalizador_.confirmarLeitura();
      }
    }
  }

private:
  EstadoEmergencia estado_ = EstadoEmergencia::Normal;
  BotaoEmergencia botao_;
  IndicadorEstado indicador_;
  SinalizadorSonoro sinalizador_;
  LeitorCracha leitor_;
  ControlePresenca presenca_;
  bool armazenamentoDisponivel_ = false;
};

SistemaMonitoramento sistema;

void setup() { sistema.iniciar(); }

void loop() { sistema.atualizar(); }
