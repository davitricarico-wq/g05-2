#include <Wire.h>

const int red = 12;
const int green = 13;
const int pontenciometro = A0;
const int buzzer = 5;
const int trig = 3;
const int echo = 2;
const int sda = A4;
const int scl = A5;

const int botao = 11;
int emergencia = 1;
bool estadoBotaoAnterior = HIGH;

class ContadorPessoas {
private:
  int total;
  bool objetoDetectado;

public:
  ContadorPessoas() : total(0), objetoDetectado(false) {}

  void verificarDistancia(long duracao, float distancia, int limite) {
    if (duracao > 0 && distancia > 0 && distancia < limite) {
      if (!objetoDetectado) {
        total++;
        objetoDetectado = true;
      }
    } else {
      objetoDetectado = false;
    }
  }

  int obterTotal() const {
    return total;
  }
};

ContadorPessoas contador;
const int distanciaLimite = 200;

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

void setup() {
  Serial.begin(9600);
  Wire.begin();

  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  pinMode(botao, INPUT_PULLUP);

  iniciarLCD();
  posicao(0, 0);
  texto("CONTADOR PESSOAS");
  atualizarContador();
}

void loop() {
  bool estadoBotaoAtual = digitalRead(botao);

  if (estadoBotaoAnterior == HIGH && estadoBotaoAtual == LOW) {
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

  int valorPot = analogRead(pontenciometro);

  switch(emergencia) {
    case 0: {
      digitalWrite(green, LOW);
      digitalWrite(red, HIGH);

      digitalWrite(trig, LOW);
      delayMicroseconds(2);
      digitalWrite(trig, HIGH);
      delayMicroseconds(10);
      digitalWrite(trig, LOW);

      long duracao = pulseIn(echo, HIGH, 30000);
      float distancia = duracao * 0.0343 / 2;
      Serial.print("Distancia em cm: ");
      Serial.println(distancia);

      int totalAnterior = contador.obterTotal();
      contador.verificarDistancia(duracao, distancia, distanciaLimite);

      if (contador.obterTotal() > totalAnterior) {
        atualizarContador();

        int frequencia = map(valorPot, 0, 1023, 200, 2000);
        tone(buzzer, frequencia, 100);
      }
      break;
    }
    case 1:
      noTone(buzzer);
      digitalWrite(red, LOW);
      digitalWrite(green, HIGH);
      break;
  }
}
