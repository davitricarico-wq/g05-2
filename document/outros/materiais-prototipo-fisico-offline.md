# Materiais para o primeiro protótipo físico (offline)

## Contexto da entrega

Este documento prepara a montagem do **primeiro protótipo físico do C.R.I.S.I.S**, prevista para a **Sprint 2**. Na sequência geral de prototipação adotada pelo projeto, ele é o **segundo protótipo**, pois sucede o protótipo inicial simulado no Wokwi, entregue na Sprint 1.

O modelo do projeto organiza a evolução em cinco etapas:

1. protótipo inicial no simulador Wokwi — Sprint 1;
2. protótipo físico offline — Sprint 2 (objeto deste documento);
3. protótipo com MQTT e I²C — Sprint 3;
4. protótipo físico online — Sprint 4;
5. protótipo final — Sprint 5.

Assim, há três etapas que são explicitamente físicas — offline, online e final —, mas esta montagem é a primeira delas. A sequência e o escopo estão definidos nas seções **3.4.1 a 3.4.5** da [documentação principal](../documentacao.md).

## Objetivo e escopo

O protótipo físico offline deve validar, em bancada, a leitura de crachás por RFID. Um módulo RC522 será conectado a uma placa ESP32 por SPI, e três cartões ou tags representarão pessoas diferentes durante os testes. Os LEDs verde e vermelho indicarão, respectivamente, um registro aceito ou um erro.

Nesta etapa, a validação está concentrada na leitura local dos identificadores e na sinalização visual. Comunicação em rede, MQTT, dashboard e integrações externas pertencem às etapas posteriores do projeto. O protótipo continua sendo uma prova de conceito acadêmica e não é um equipamento homologado para controle de acesso ou instalação industrial.

Esta versão representa uma evolução de escopo em relação ao protótipo simulado da Sprint 1, que utiliza Arduino Uno e sensores ultrassônicos para contagem anônima. A sequência das entregas está descrita nas seções **3.4.1 a 3.4.5** da [documentação principal](../documentacao.md), enquanto a seção **3.4.2 — Protótipo Físico do Projeto (offline)** corresponde a esta montagem.

## Materiais obrigatórios para uma unidade

| Componente | Quantidade | Função |
| --- | ---: | --- |
| **Módulo RFID RC522** | 1 | Ler os crachás; comunicação com o ESP32 por SPI |
| **Cartões/tags MIFARE Classic 1K de 13,56 MHz** | 3 | Simular pessoas diferentes |
| **Protoboard** | 1 | Montagem inicial |
| **Jumpers macho–macho e macho–fêmea** | 1 kit | Conexões entre módulos e placa |
| **LED verde** | 1 | Indicar registro aceito |
| **LED vermelho** | 1 | Indicar erro |
| **Resistores de 330 Ω** | 2 | Limitar a corrente dos LEDs |
| **Cabo USB de dados** | 1 | Programação e alimentação |
| **Fonte USB ou power bank** | 1 | Alimentação quando o protótipo estiver fora do computador |

### Dependência pressuposta

A montagem descrita requer **uma placa ESP32**, pois o RC522 se comunica com ela por SPI e o cabo USB será usado para programá-la. Como a placa não aparece na lista de materiais fornecida, este documento pressupõe que a equipe já possui uma unidade compatível. Caso ela ainda não esteja disponível, deverá ser acrescentada à aquisição antes da montagem.

## Apoio necessário à montagem e aos testes

Estes itens não fazem parte da lista de aquisição do circuito, mas são necessários para montar, programar e registrar adequadamente o protótipo:

- computador com porta USB e ambiente compatível com a gravação do firmware no ESP32;
- multímetro para conferir continuidade, tensão de alimentação e polaridade antes da energização;
- etiquetas ou marcadores para distinguir os três cartões ou tags de teste;
- celular ou câmera para registrar as evidências dos testes físicos da Sprint 2.

## Pontos a conferir antes da aquisição

- Confirmar a disponibilidade e o modelo da placa ESP32 antes da aquisição dos demais itens.
- Confirmar que os cartões ou tags operam em 13,56 MHz e são compatíveis com o RC522; tags de 125 kHz não atendem a esta montagem.
- Verificar se o kit de jumpers possui conexões macho–macho e macho–fêmea suficientes para o RC522, os dois LEDs e a alimentação na protoboard.
- Utilizar resistores de 330 Ω em série com os LEDs e conferir suas polaridades antes de energizar o circuito.
- Confirmar que o cabo USB transmite dados, pois cabos exclusivos para carregamento não permitem programar o ESP32.
- Verificar a tensão de operação e a pinagem do RC522 antes da ligação. O módulo deve ser conectado conforme a especificação da placa e não deve receber 5 V em um pino destinado a 3,3 V.
- Não registrar dados pessoais reais nesta etapa. Os três cartões ou tags devem representar identidades fictícias durante os testes.
- Atualizar a documentação de privacidade e os requisitos do projeto antes de associar identificadores RFID a pessoas reais, pois a documentação da Sprint 1 delimita o protótipo anterior como anônimo e sem RFID.

## Critério de prontidão

A equipe estará pronta para iniciar a montagem quando todos os materiais obrigatórios e a placa ESP32 estiverem disponíveis, o cabo USB permitir a programação, o RC522 estiver ligado com tensão e pinagem corretas e os três cartões ou tags estiverem identificados apenas por perfis fictícios. Os testes da Sprint 2 devem verificar ao menos a leitura de cada tag, a rejeição ou sinalização de erro, leituras repetidas e a resposta dos LEDs. Seus casos de teste devem continuar a numeração a partir de CT11, conforme a seção **3.4.2 — Protótipo Físico do Projeto (offline)** da [documentação principal](../documentacao.md).
