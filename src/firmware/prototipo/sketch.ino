
#include <Wire.h>

const int red = 12;
const int green = 13;
const int buzzer = 6;

const int trigSaida = 3;
const int echoSaida = 2;

const int trigEntrada = 5;
const int echoEntrada = 4;

const int botao = 11;

int emergencia = 1;
bool estadoBotaoAnterior = HIGH;

const int distanciaLimite = 200;
const unsigned long tempoBloqueio = 1000;

// 0 = nenhum sensor ativo
// 1 = sensor de saida ativo
// 2 = sensor de entrada ativo
int sensorAtivo = 0;

bool aguardandoLiberacao = false;
unsigned long inicioBloqueio = 0;

class ContadorPessoas {
private:
  int total;

public:
  ContadorPessoas() : total(0) {}

  // Pessoa entrou: aumenta
  void entrada() {
    total++;
  }

  // Pessoa saiu: diminui
  void saida() {
    if (total > 0) {
      total--;
    }
  }

  int obterTotal() const {
    return total;
  }
};

ContadorPessoas contador;

// LCD I2C
const byte LCD_ADDR = 0x27;

const byte RS = 0x01;
const byte EN = 0x04;
const byte BL = 0x08;

void enviarNibble(byte dados, byte modo) {
  byte valor = (dados & 0xF0) | modo | BL;

  Wire.beginTransmission(LCD_ADDR);
  Wire.write(valor | EN);
  Wire.write(valor & ~EN);
  Wire.endTransmission();

  delayMicroseconds(50);
}

void enviarLCD(byte valor, byte modo) {
  enviarNibble(valor, modo);
  enviarNibble(valor << 4, modo);
}

void comando(byte valor) {
  enviarLCD(valor, 0);
  delay(2);
}

void caractere(char c) {
  enviarLCD(c, RS);
}

void texto(const char* mensagem) {
  while (*mensagem) {
    caractere(*mensagem++);
  }
}

void posicao(byte coluna, byte linha) {
  comando(0x80 | (coluna + linha * 0x40));
}

void iniciarLCD() {
  delay(50);

  enviarNibble(0x30, 0);
  delay(5);

  enviarNibble(0x30, 0);
  delayMicroseconds(150);

  enviarNibble(0x30, 0);
  enviarNibble(0x20, 0);

  comando(0x28);
  comando(0x0C);
  comando(0x06);
  comando(0x01);
}

void atualizarContador() {
  posicao(0, 1);
  texto("Total:          ");

  posicao(7, 1);

  char numero[12];
  ltoa(contador.obterTotal(), numero, 10);
  texto(numero);
}

// Mede a distancia
float medirDistancia(int trig, int echo) {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);

  digitalWrite(trig, LOW);

  long duracao = pulseIn(echo, HIGH, 30000);

  if (duracao == 0) {
    return -1;
  }

  return duracao * 0.0343 / 2;
}

// Verifica se existe uma pessoa
bool detectarPessoa(int trig, int echo) {
  float distancia = medirDistancia(trig, echo);

  return distancia > 0 &&
         distancia < distanciaLimite;
}

void setup() {
  Serial.begin(9600);
  Wire.begin();

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);

  pinMode(trigSaida, OUTPUT);
  pinMode(echoSaida, INPUT);

  pinMode(trigEntrada, OUTPUT);
  pinMode(echoEntrada, INPUT);

  pinMode(botao, INPUT_PULLUP);

  iniciarLCD();

  posicao(0, 0);
  texto("CONTADOR PESSOAS");

  atualizarContador();
}

void loop() {
  bool estadoBotaoAtual = digitalRead(botao);

  // Controle do botao
  if (estadoBotaoAnterior == HIGH &&
      estadoBotaoAtual == LOW) {

    delay(10);

    if (digitalRead(botao) == LOW) {
      emergencia++;

      if (emergencia > 1) {
        emergencia = 0;
      }

      Serial.print("Emergencia atual: ");
      Serial.println(emergencia);
    }
  }

  estadoBotaoAnterior = digitalRead(botao);

  // LEDs: normal ou emergencia
  if (emergencia == 0) {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
  }
  else {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
  }

  // Sensores funcionam nos dois modos

  if (sensorAtivo == 0) {

    // Sensor de saida: diminui
    if (detectarPessoa(trigSaida, echoSaida)) {
      sensorAtivo = 1;

      contador.saida();
      atualizarContador();

      tone(buzzer, 1000, 100);

      Serial.println("Pessoa saiu: -1");
    }

    // Sensor de entrada: aumenta
    else if (detectarPessoa(trigEntrada, echoEntrada)) {
      sensorAtivo = 2;

      contador.entrada();
      atualizarContador();

      tone(buzzer, 1000, 100);

      Serial.println("Pessoa entrou: +1");
    }
  }

  // Sensor de saida ativo
  else if (sensorAtivo == 1) {

    bool detectou =
      detectarPessoa(trigSaida, echoSaida);

    if (detectou) {
      aguardandoLiberacao = false;
    }
    else {
      if (!aguardandoLiberacao) {
        aguardandoLiberacao = true;
        inicioBloqueio = millis();
      }

      if (millis() - inicioBloqueio >= tempoBloqueio) {
        sensorAtivo = 0;
        aguardandoLiberacao = false;

        Serial.println("Sensores liberados");
      }
    }
  }

  // Sensor de entrada ativo
  else if (sensorAtivo == 2) {

    bool detectou =
      detectarPessoa(trigEntrada, echoEntrada);

    if (detectou) {
      aguardandoLiberacao = false;
    }
    else {
      if (!aguardandoLiberacao) {
        aguardandoLiberacao = true;
        inicioBloqueio = millis();
      }

      if (millis() - inicioBloqueio >= tempoBloqueio) {
        sensorAtivo = 0;
        aguardandoLiberacao = false;

        Serial.println("Sensores liberados");
      }
    }
  }

  delay(20);
}
