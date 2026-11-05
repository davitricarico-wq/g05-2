# Materiais preliminares para o protótipo físico offline — Sprint 2

Esta lista registra o planejamento inicial de CT11–CT15. O modelo 2 integrado utiliza LEDs de modo, botão e buzzer, com resistores de 1 kΩ no circuito digital. Os componentes e as conexões atuais estão na [seção 3.4.2.3](../documentacao.md#codigo-modelo-2), e os ensaios estão na [seção 3.4.2.4](../documentacao.md#testes-prototipos). A lista abaixo é preservada como histórico desse planejamento.

O protótipo físico offline do C.R.I.S.I.S será montado em bancada para validar a leitura local de cartões RFID e a sinalização por LEDs. A montagem utiliza uma placa ESP32, um leitor RC522 conectado por SPI e três cartões ou tags com perfis fictícios. Ela sucede o protótipo simulado com Arduino Uno e sensores ultrassônicos da Sprint 1 e corresponde à seção [3.4.2 da documentação principal](../documentacao.md).

No planejamento inicial, o comportamento previsto era sinalizar leitura aceita com o LED verde e erro ou rejeição com o vermelho. Os critérios estão nos casos CT11–CT15 da seção 3.4.2. A configuração deve ser conferida com o firmware antes da montagem, pois os LEDs da simulação descrita nos casos CT16–CT23 representam os modos normal e de emergência.

A validação desta etapa abrange leitura e sinalização locais, com dados fictícios. A comunicação MQTT, o dashboard e as integrações externas fazem parte da evolução descrita nas seções 3.4.3 a 3.4.5. O uso industrial e a associação dos cartões a pessoas reais dependem de validação técnica, aprovação do parceiro e atualização dos requisitos e da documentação de privacidade.

## Materiais para uma unidade

| Componente | Quantidade | Função |
| --- | ---: | --- |
| **Placa ESP32** | 1 | Executar o firmware e controlar o RC522 e os LEDs |
| **Módulo RFID RC522** | 1 | Ler os cartões; comunicação com o ESP32 por SPI |
| **Cartões/tags MIFARE Classic 1K de 13,56 MHz** | 3 | Representar perfis fictícios nos testes |
| **Protoboard** | 1 | Montagem do circuito em bancada |
| **Jumpers macho–macho e macho–fêmea** | 1 kit | Conectar os componentes |
| **LED verde** | 1 | Sinalizar leitura aceita no comportamento planejado |
| **LED vermelho** | 1 | Sinalizar erro ou rejeição no comportamento planejado |
| **Resistores de 330 Ω** | 2 | Limitar a corrente dos LEDs |
| **Cabo USB de dados compatível com a placa** | 1 | Programar e alimentar o ESP32 |
| **Fonte USB ou power bank** | 1 | Alimentar o protótipo fora do computador |

Antes da aquisição, conferir os itens já disponíveis, incluindo o modelo da placa ESP32, o conector USB e os terminais dos módulos. O kit de jumpers deve atender às conexões do RC522, dos LEDs e da alimentação.

## Apoio à montagem e aos testes

A equipe precisa de um computador com ambiente de programação compatível com o ESP32, um multímetro para verificar as ligações e a alimentação, etiquetas para distinguir os cartões fictícios e uma câmera para registrar os ensaios.

## Preparação da montagem

Conferir a pinagem e a tensão de operação do modelo de RC522 utilizado antes de energizar o circuito, respeitando os pinos destinados a 3,3 V. Ligar um resistor de 330 Ω em série com cada LED e verificar as polaridades e o terra comum.

Confirmar a compatibilidade dos três cartões de 13,56 MHz com o leitor e verificar se o cabo USB permite gravar o firmware. Identificar os cartões pelos perfis fictícios usados nos testes e manter esses perfis coerentes com os registros e as evidências.

## Critério de prontidão

A montagem poderá começar após a conferência dos materiais e das conexões. Para iniciar os ensaios, o firmware deverá definir os estados dos LEDs e a política de leitura repetida, além de permitir distinguir uma leitura aceita de uma rejeição ou falha.

Os CT11–CT15 registram o planejamento anterior de verificação de inicialização, leitura válida, repetição, tag não cadastrada e falha de comunicação com o RC522. Registrar os resultados e as evidências da montagem física nessa seção.
