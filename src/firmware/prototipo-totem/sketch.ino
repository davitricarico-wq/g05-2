#include <Arduino.h>
#include <SPI.h>
#include <MFRC522.h>
#include <Preferences.h>
#include <cstring>

constexpr byte RFID_SS = 21, RFID_RST = 22;
constexpr byte RFID_SCK = 18, RFID_MISO = 19, RFID_MOSI = 23;
constexpr byte LED_AZUL = 25, LED_VERDE = 26, BUZZER = 27, BOTAO = 32;
constexpr byte CAPACIDADE = 50;
constexpr uint32_t ASSINATURA = 0x544F544D;
constexpr uint16_t FORMATO = 1;

// O tempo e relativo ao boot indicado, pois millis() reinicia no reset.
// Nao representa horario de calendario nem inclui o tempo desligado.
struct Registro {
  byte uid[10];
  byte tamanho;
  byte reservado;
  uint32_t boot;
  uint32_t tempoMs;
};

struct Estado {
  uint32_t assinatura;
  uint16_t formato;
  byte ativo;
  byte total;
  uint32_t boots;
  Registro registros[CAPACIDADE];
};

Estado estado = {};
Preferences memoria;
MFRC522 leitor(RFID_SS, RFID_RST);
bool memoriaDisponivel = false;
bool leitorDisponivel = false;
bool ultimaLeituraBotao = HIGH, estadoEstavelBotao = HIGH;
uint32_t ultimaMudancaBotao = 0;
bool sinalVerdeAtivo = false;
uint32_t inicioSinalVerde = 0;

void imprimirUID(const byte* uid, byte tamanho) {
  for (byte i = 0; i < tamanho; i++) {
    if (i) Serial.print(":");
    if (uid[i] < 0x10) Serial.print("0");
    Serial.print(uid[i], HEX);
  }
}

void imprimirTotal() {
  Serial.print("[TOTAL] ");
  Serial.print(estado.total);
  Serial.println(" cracha(s) distinto(s).");
}

void atualizarLEDAtivo() {
  digitalWrite(LED_AZUL,
    estado.ativo && memoriaDisponivel && leitorDisponivel ? HIGH : LOW);
}

// Uma unica chave guarda estado, total e lista juntos.
// A RAM so recebe a nova versao depois da gravacao bem-sucedida.
bool salvarEstado(const Estado& candidato) {
  if (memoria.putBytes("estado", &candidato, sizeof(candidato))
      != sizeof(candidato)) {
    memoriaDisponivel = false;
    digitalWrite(LED_AZUL, LOW);
    digitalWrite(LED_VERDE, LOW);
    sinalVerdeAtivo = false;
    noTone(BUZZER);
    Serial.println("[ERRO NVS] Gravacao falhou. Operacao bloqueada.");
    Serial.println("Nao houve confirmacao. Envie R para reiniciar e reler a flash.");
    return false;
  }
  estado = candidato;
  return true;
}

bool carregarMemoria() {
  if (!memoria.begin("totem-offline", false)) {
    Serial.println("[ERRO NVS] Nao foi possivel abrir a memoria.");
    return false;
  }

  if (memoria.isKey("estado")) {
    if (memoria.getBytesLength("estado") != sizeof(estado) ||
        memoria.getBytes("estado", &estado, sizeof(estado)) != sizeof(estado)) {
      Serial.println("[ERRO NVS] Tamanho/leitura invalida. Dados nao apagados.");
      return false;
    }
    if (estado.assinatura != ASSINATURA || estado.formato != FORMATO ||
        estado.total > CAPACIDADE || estado.ativo > 1 ||
        (!estado.ativo && estado.total != 0)) {
      Serial.println("[ERRO NVS] Formato invalido. Dados nao apagados.");
      return false;
    }
    for (byte i = 0; i < estado.total; i++) {
      byte n = estado.registros[i].tamanho;
      if (n != 4 && n != 7 && n != 10) {
        Serial.println("[ERRO NVS] UID armazenado invalido. Dados nao apagados.");
        return false;
      }
    }
    Serial.print("[NVS] Recuperados ");
    Serial.print(estado.total);
    Serial.println(" registro(s).");
  } else {
    estado = {};
    estado.assinatura = ASSINATURA;
    estado.formato = FORMATO;
    Serial.println("[NVS] Primeiro uso. Lista vazia.");
  }

  Estado candidato = estado;
  candidato.boots++;
  if (!salvarEstado(candidato)) return false;
  Serial.print("[BOOT] Inicializacao numero ");
  Serial.println(estado.boots);
  return true;
}

void listarRegistros() {
  if (!memoriaDisponivel) {
    Serial.println("[ERRO] Memoria indisponivel; lista nao validada.");
    return;
  }
  Serial.println("--- REGISTROS PERSISTIDOS ---");
  for (byte i = 0; i < estado.total; i++) {
    const Registro& r = estado.registros[i];
    Serial.print(i + 1);
    Serial.print(". ");
    imprimirUID(r.uid, r.tamanho);
    Serial.print(" | boot ");
    Serial.print(r.boot);
    Serial.print(" | ");
    Serial.print(r.tempoMs / 1000.0, 1);
    Serial.println(" s desde esse boot");
  }
  imprimirTotal();
}

void verificarSerial() {
  while (Serial.available()) {
    char c = Serial.read();
    if (c == 'L' || c == 'l') listarRegistros();
    if (c == 'R' || c == 'r') {
      // Nenhum salvamento aqui: o teste verifica o que JA estava na flash.
      Serial.println("[RESET] Reiniciando sem apagar registros...");
      Serial.flush();
      ESP.restart();
    }
  }
}

void verificarBotao() {
  bool leitura = digitalRead(BOTAO);
  uint32_t agora = millis();
  if (leitura != ultimaLeituraBotao) {
    ultimaLeituraBotao = leitura;
    ultimaMudancaBotao = agora;
  }
  if (agora - ultimaMudancaBotao < 40 || leitura == estadoEstavelBotao) return;
  estadoEstavelBotao = leitura;
  if (leitura != LOW) return;

  if (!memoriaDisponivel || !leitorDisponivel) {
    Serial.println("[ERRO] Ativacao impedida: verifique memoria e leitor.");
    return;
  }
  if (estado.ativo) {
    Serial.println("[TOTEM] Ja ativo. Registros preservados.");
    imprimirTotal();
    return;
  }
  Estado candidato = estado;
  candidato.ativo = 1;
  if (!salvarEstado(candidato)) return;
  atualizarLEDAtivo();
  Serial.println("[TOTEM] Atendimento iniciado e salvo na flash.");
  imprimirTotal();
}

void verificarCartao() {
  if (!memoriaDisponivel || !leitorDisponivel) return;
  if (!leitor.PICC_IsNewCardPresent() || !leitor.PICC_ReadCardSerial()) return;

  byte uid[10] = {};
  byte tamanho = leitor.uid.size;
  bool tamanhoValido = tamanho == 4 || tamanho == 7 || tamanho == 10;
  if (tamanhoValido) memcpy(uid, leitor.uid.uidByte, tamanho);
  leitor.PICC_HaltA();
  leitor.PCD_StopCrypto1();
  if (!tamanhoValido) {
    Serial.println("[ERRO] Tamanho de UID invalido.");
    return;
  }
  if (!estado.ativo) {
    Serial.println("[IGNORADO] Totem inativo. Pressione o botao.");
    return;
  }
  for (byte i = 0; i < estado.total; i++) {
    const Registro& r = estado.registros[i];
    if (r.tamanho == tamanho && memcmp(r.uid, uid, tamanho) == 0) {
      Serial.print("[REPETIDO] ");
      imprimirUID(uid, tamanho);
      Serial.println(" ja registrado.");
      imprimirTotal();
      return;
    }
  }
  if (estado.total >= CAPACIDADE) {
    Serial.println("[ERRO] Lista cheia. Cracha NAO registrado.");
    return;
  }

  Estado candidato = estado;
  Registro& novo = candidato.registros[candidato.total];
  novo = {};
  memcpy(novo.uid, uid, tamanho);
  novo.tamanho = tamanho;
  novo.boot = estado.boots;
  novo.tempoMs = millis();
  candidato.total++;
  if (!salvarEstado(candidato)) return;

  Serial.print("[REGISTRADO NA FLASH] UID: ");
  imprimirUID(uid, tamanho);
  Serial.println();
  imprimirTotal();
  digitalWrite(LED_VERDE, HIGH);
  sinalVerdeAtivo = true;
  inicioSinalVerde = millis();
  tone(BUZZER, 2000, 120);
}

void setup() {
  Serial.begin(115200);
  pinMode(LED_AZUL, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  pinMode(BOTAO, INPUT_PULLUP);
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(BUZZER, LOW);
  delay(200);
  Serial.println("\n=== TOTEM OFFLINE - MEMORIA PERSISTENTE ===");

  // O teste de saidas tambem acontece depois de cada reset.
  Serial.println("[TESTE] LED azul, LED verde e buzzer.");
  digitalWrite(LED_AZUL, HIGH);
  delay(500);
  digitalWrite(LED_AZUL, LOW);
  digitalWrite(LED_VERDE, HIGH);
  delay(500);
  digitalWrite(LED_VERDE, LOW);
  tone(BUZZER, 1500, 200);
  delay(250);

  memoriaDisponivel = carregarMemoria();
  SPI.begin(RFID_SCK, RFID_MISO, RFID_MOSI, RFID_SS);
  leitor.PCD_Init();
  delay(4); // Alguns leitores precisam de alguns ms apos o reset.
  byte versao = leitor.PCD_ReadRegister(MFRC522::VersionReg);
  Serial.print("[RFID] Versao: 0x");
  Serial.println(versao, HEX);
  // 0x91 e 0x92 sao as versoes conhecidas. Alguns clones respondem
  // com outro valor; nesse caso, tentamos uma leitura real de cartao.
  leitorDisponivel = versao != 0x00 && versao != 0xFF;
  if (leitorDisponivel && versao != 0x91 && versao != 0x92) {
    Serial.println("[AVISO] Versao nao padrao; valide aproximando um cartao.");
  }
  atualizarLEDAtivo();

  if (!memoriaDisponivel || !leitorDisponivel) {
    Serial.println("[ERRO] Atendimento bloqueado. Confira as mensagens acima.");
  } else {
    Serial.println(estado.ativo
      ? "[TOTEM] Atendimento retomado automaticamente."
      : "[TOTEM] Inativo. Pressione o botao.");
    listarRegistros();
  }
  Serial.println("Comandos no Serial: L = listar | R = reiniciar sem apagar.");
}

void loop() {
  verificarSerial();
  verificarBotao();
  verificarCartao();
  if (sinalVerdeAtivo && millis() - inicioSinalVerde >= 300) {
    digitalWrite(LED_VERDE, LOW);
    sinalVerdeAtivo = false;
  }
  delay(1);
}
