# Firmware do protótipo físico offline

Este diretório está preparado para receber o firmware refatorado do protótipo físico da Sprint 2.

## Escopo esperado

- ESP32 alimentado por USB;
- leitor RFID RC522 conectado por SPI;
- LED verde para leitura aceita;
- LED vermelho para erro ou leitura rejeitada;
- tags de teste com identificadores fictícios;
- funcionamento local, sem MQTT, dashboard ou integração com bases reais nesta etapa.

O firmware do protótipo anterior, baseado em Arduino Uno e sensores ultrassônicos, permanece em [`../prototipo`](../prototipo/) e não deve ser copiado para este diretório como se representasse a montagem física com RFID.

## Arquivos a integrar

Quando a refatoração estiver pronta, incluir no mínimo:

```text
prototipo-fisico/
├── README.md
├── sketch.ino
└── diagram.json       # se houver diagrama atualizado no Wokwi/Fritzing
```

Se o código for dividido em módulos, manter os nomes descritivos e documentar a responsabilidade de cada arquivo neste README.

## Estrutura mínima sugerida para o firmware

O código integrado deve manter `setup()` e `loop()` como orquestradores e encapsular as responsabilidades em funções com nomes descritivos, por exemplo:

```cpp
void configurarPinos();
bool inicializarLeitorRfid();
bool lerIdentificadorTag(String &identificadorMascarado);
bool tagFicticiaAutorizada(const String &identificador);
void sinalizarLeituraAceita();
void sinalizarLeituraRejeitada();
void sinalizarFalhaDoLeitor();
```

Os nomes são uma referência de organização, não uma API obrigatória. A implementação final deve refletir o hardware e as decisões adotadas pelo grupo.

## Checklist antes da integração

- [ ] confirmar o modelo da placa ESP32 e a pinagem usada;
- [ ] confirmar alimentação do RC522 em 3,3 V e GND comum;
- [ ] registrar os pinos SPI e dos LEDs com constantes descritivas;
- [ ] usar resistores em série com os LEDs;
- [ ] definir duração da sinalização verde e vermelha;
- [ ] definir a política de bloqueio ou intervalo para leituras repetidas;
- [ ] tratar falha de inicialização ou comunicação com o RC522;
- [ ] remover UIDs reais, credenciais e dados pessoais;
- [ ] compilar sem erros e registrar ambiente, placa e bibliotecas utilizadas;
- [ ] executar CT11–CT15 e salvar as evidências em `assets/casos_teste_prototipos/fisico/`;
- [ ] atualizar a seção 3.4.2 e a RTM com os resultados observados.

## Estado atual

Estrutura documental preparada; firmware físico ainda não integrado nesta branch. Não registrar CT como aprovado antes da montagem e da execução com evidências.
