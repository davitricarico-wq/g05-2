
#include <SPI.h>
#include <MFRC522.h>

// RFID
#define SS_PIN 5
#define RST_PIN 17

// Buzzer
#define BUZZER_PIN 25

// LEDs
#define LED_VERDE 26
#define LED_VERMELHO 33

// Botao
#define BOTAO_PIN 27

MFRC522 rfid(SS_PIN, RST_PIN);

// Estados do sistema
bool emergencia = false;

// Controle de debounce
bool ultimoEstadoLido = HIGH;
bool estadoEstavel = HIGH;
unsigned long ultimaMudanca = 0;
const unsigned long debounceMs = 25;

void atualizarLEDs() {
  digitalWrite(LED_VERDE,
               emergencia ? LOW : HIGH);

  digitalWrite(LED_VERMELHO,
               emergencia ? HIGH : LOW);
}

void verificarBotao() {
  bool leitura = digitalRead(BOTAO_PIN);

  if (leitura != ultimoEstadoLido) {
    ultimaMudanca = millis();
  }

  if (millis() - ultimaMudanca > debounceMs) {
    if (leitura != estadoEstavel) {
      estadoEstavel = leitura;

      if (estadoEstavel == LOW) {
        emergencia = !emergencia;

        atualizarLEDs();

       Serial.println(
          emergencia ? "EMERGENCIA" : "NORMAL"
        );
      }
    }
  }

  ultimoEstadoLido = leitura;
}

void verificarRFID() {
  if (!rfid.PICC_IsNewCardPresent()) {
    return;
  }

  if (!rfid.PICC_ReadCardSerial()) {
    return;
  }

  Serial.print("Cartao detectado! UID: ");
  // Bipe de identificacao
  tone(BUZZER_PIN, 2000, 50);

  for (byte i = 0; i < rfid.uid.size; i++) {
    Serial.printf("%02X ", rfid.uid.uidByte[i]);
  }

  Serial.println();

  rfid.PICC_HaltA();
  rfid.PCD_StopCrypto1();
}

void setup() {
  Serial.begin(115200);

  // Configuracao dos LEDs
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);

  // Botao com pull-up interno
  pinMode(BOTAO_PIN, INPUT_PULLUP);

  // Buzzer
  pinMode(BUZZER_PIN, OUTPUT);

  // Estado inicial: NORMAL
  emergencia = false;
  atualizarLEDs();

  // Inicializa SPI e RFID
  SPI.begin(18, 19, 23, SS_PIN);
  rfid.PCD_Init();

  Serial.println("Sistema inicializado!");
  Serial.println("STATUS: NORMAL");
}

void loop() {
  // Monitora o botao
  verificarBotao();

  // Le os cartoes RFID
  verificarRFID();
}
