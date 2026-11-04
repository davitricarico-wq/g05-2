#include <SPI.h>
#include <MFRC522.h>

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
    leitor_.iniciar();

    Serial.println("Sistema inicializado!");
    Serial.println("STATUS: NORMAL");
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
      Serial.print("Cartao detectado! UID: ");
      sinalizador_.confirmarLeitura();
      for (byte i = 0; i < uid.size; ++i)
      {
        Serial.printf("%02X ", uid.uidByte[i]);
      }
      Serial.println();
    }
  }

private:
  EstadoEmergencia estado_ = EstadoEmergencia::Normal;
  BotaoEmergencia botao_;
  IndicadorEstado indicador_;
  SinalizadorSonoro sinalizador_;
  LeitorCracha leitor_;
};

SistemaMonitoramento sistema;

void setup() { sistema.iniciar(); }

void loop() { sistema.atualizar(); }
