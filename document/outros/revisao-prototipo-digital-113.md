# Revisão técnica do protótipo digital — #113

Revisão realizada em 5 de novembro de 2026 para a task #113, relacionada às entregas #106, #107 e #122 de Lucas Oliveira. A avaliação abrange o firmware, o circuito e a execução do [PrototipoMonitoramento no Wokwi](https://wokwi.com/projects/479252249534862337).

**Parecer — alterações necessárias antes da aprovação da integração.** O fluxo local de botão, LEDs e leitura RFID funciona nos cenários observados. A falha de comunicação do leitor permanece silenciosa, o modo de emergência é perdido no reinício e a integração MQTT está pendente. A montagem física e os parâmetros de áudio aguardam verificação.

## Integração com a documentação física

Após a revisão, os códigos e as fotos foram reunidos na branch docs/prototipo-fisico-3.4.2. O firmware avaliado corresponde ao [modelo 2 em prototipo-monitoramento](../../src/firmware/prototipo-monitoramento/sketch.ino). O [modelo 3 em prototipo-totem](../../src/firmware/prototipo-totem/sketch.ino) possui implementação própria de persistência e diagnóstico inicial. Os apontamentos deste parecer se referem ao modelo 2. A [seção consolidada de testes](../documentacao.md#testes-prototipos) vincula as versões e as evidências dos três modelos.

## Versão avaliada e método

O código e o diagrama públicos foram copiados do editor do Wokwi e comparados com os arquivos da [versão ensaiada](../../assets/casos_teste_prototipos/wokwi-monitoramento/). O conteúdo corresponde ao versionado no commit 0d2ba01837d4fcfd2384c2fb65a2b865861f4878, após normalizar quebras de linha e a terminação do arquivo. Os hashes da versão base, com texto UTF-8 e quebras LF, são os registrados no README dessa pasta.

A execução usou o ESP32 DevKitC V4 do projeto, os cartões fictícios Blue Card e Green Card e serial a 115200 baud. O firmware original foi mantido. Para o ensaio de falha, uma sessão temporária recebeu uma cópia do diagrama com a conexão MISO entre RC522 e GPIO19 removida. O [diagrama de falha](../../assets/casos_teste_prototipos/revisao-113/diagram-falha-miso.json) permite reproduzir essa condição. A sessão foi encerrada após o teste.

As [evidências desta revisão](../../assets/casos_teste_prototipos/revisao-113/) são capturas da interface e registros de acessibilidade, que podem conter apenas alterações da árvore. Os arquivos de texto não são logs instrumentados de tempo. A data comum dos ensaios é 05/11/2026, com execução por Codex sob solicitação do revisor Arthur Rodrigues.

## Firmware

O código separa configuração, botão, indicação visual, sinalização sonora, leitura RFID e coordenação em classes com nomes descritivos. Os métodos setup() e loop() delegam a execução ao sistema. A leitura de UID copia a estrutura da biblioteca e encerra a comunicação com o cartão após a leitura.

O botão usa INPUT_PULLUP, detecta a transição estável para LOW após mais de 25 ms e só produz nova transição após soltura e novo acionamento. A subtração de valores unsigned em millis() é adequada ao cálculo de intervalo. O fluxo principal não contém delay() ou espera explícita sem limite. As chamadas RFID são síncronas, e a ausência de delay() no sketch não comprova latência máxima.

A biblioteca MFRC522 possui esperas internas de inicialização e comunicação. O arquivo libraries.txt lista apenas MFRC522, sem versão, e o core Arduino-ESP32 também não está fixado na entrega. Registrar essas versões e medir a resposta do botão durante falhas e leituras consecutivas antes de estabelecer limites temporais. A referência consultada para o comportamento interno é o [código oficial da biblioteca](https://github.com/miguelbalboa/rfid/blob/master/src/MFRC522.cpp).

## Esquemático

| Função | Conexão do circuito | Conferência |
| --- | --- | --- |
| RC522 — seleção SPI | SDA/NSS → GPIO5 | Coincide com pinoRfidSs. SDA atua como chip select nessa interface. |
| RC522 — clock e dados | SCK → GPIO18, MISO → GPIO19, MOSI → GPIO23 | Coincide com SPI.begin() e as constantes do firmware. |
| RC522 — reset | RST → GPIO17 | Coincide com pinoRfidReset. Confirmar o módulo físico antes de replicar a montagem. |
| Alimentação do RC522 | 3.3V → 3V3 do ESP32, GND → barramento comum | Compatível com a alimentação prevista para o módulo simulado. |
| Botão | GPIO27 → botão → GND | Coerente com INPUT_PULLUP. |
| LED verde | GPIO26 → r2 de 1 kΩ → anodo, catodo → GND | Coerente com a indicação de modo NORMAL. |
| LED vermelho | GPIO33 → r1 de 1 kΩ → anodo, catodo → GND | Coerente com a indicação de modo EMERGÊNCIA. |
| Buzzer | GPIO25 → r3 de 1 kΩ → terminal 2, terminal 1 → GND | Polaridade coerente com o componente piezoelétrico do Wokwi. Áudio e adequação do componente físico permanecem pendentes. |

A ligação SPI e a alimentação seguem a [referência do RC522 no Wokwi](https://docs.wokwi.com/parts/board-mfrc522). A NXP especifica alimentação típica de 3,3 V para o [MFRC522](https://www.nxp.com/docs/en/data-sheet/MFRC522.pdf). O GPIO17 está disponível nos módulos WROOM/SOLO-1 e reservado em variantes WROVER, conforme o [guia da Espressif](https://docs.espressif.com/projects/esp-dev-kits/en/latest/esp32/esp32-devkitc/user_guide.html). O terminal 1 do [buzzer do Wokwi](https://docs.wokwi.com/parts/wokwi-buzzer) é negativo e o 2 é positivo.

Os resistores do circuito simulado são de 1 kΩ. A lista da montagem física usa 330 Ω, portanto os valores e o modelo de buzzer precisam ser consolidados com o esquema físico. A avaliação confirma a coerência lógica do diagrama simulado e não substitui medições elétricas na bancada.

## Execução da revisão

Os identificadores R113 abaixo representam sessões de revisão, sem alterar a numeração oficial CT01–CT23.

| Sessão | Procedimento e resultado observado | Evidência |
| --- | --- | --- |
| R113-01 | Iniciar o circuito base. Foram exibidos Sistema inicializado! e STATUS: NORMAL, com indicação visual de modo normal. | [Inicialização](../../assets/casos_teste_prototipos/revisao-113/01-inicializacao.jpg) |
| R113-02 | Manter o botão pressionado por 6 s no comando de interação, soltar e acionar novamente. Foi registrada uma mensagem EMERGENCIA e depois NORMAL. O limiar de 25 ms e a duração simulada da pressão não foram medidos. | [Estado após pressão](../../assets/casos_teste_prototipos/revisao-113/02-pressao-continua.jpg) e [retorno/primeiro cartão](../../assets/casos_teste_prototipos/revisao-113/03-rfid-normal.jpg) |
| R113-03 | Apresentar Blue Card em modo normal. O UID 01 02 03 04 foi impresso, com o modo preservado. A interação adicional com Hold produziu nova leitura do mesmo UID, sem registro de confirmação deduplicada na aplicação. | [Leitura](../../assets/casos_teste_prototipos/revisao-113/03-rfid-normal.jpg) e [estado após Hold](../../assets/casos_teste_prototipos/revisao-113/04-cartao-mantido.jpg) |
| R113-04 | Selecionar e apresentar Green Card em modo normal. O UID 11 22 33 44 foi impresso. | [Segundo cartão](../../assets/casos_teste_prototipos/revisao-113/05-segundo-cartao.jpg) |
| R113-05 | Acionar emergência e apresentar Green Card novamente. O mesmo UID foi lido com o modo EMERGÊNCIA mantido. | [Leitura em emergência](../../assets/casos_teste_prototipos/revisao-113/06-rfid-emergencia.jpg) |
| R113-06 | Reiniciar a simulação após emergência. O sistema voltou a STATUS: NORMAL, perdendo o modo anterior. | [Após reinício](../../assets/casos_teste_prototipos/revisao-113/07-reinicio-normal.jpg) |
| R113-07 | Iniciar com MISO desconectado. Mesmo com a ligação interrompida, o sistema exibiu Sistema inicializado! e STATUS: NORMAL, sem diagnóstico da falha. | [Falha de MISO](../../assets/casos_teste_prototipos/revisao-113/08-falha-miso-inicializacao.jpg) e [estado da interface](../../assets/casos_teste_prototipos/revisao-113/08-falha-miso-estado.txt) |

A tentativa de apresentar cartão no cenário de MISO interrompido encontrou falha de interação do navegador. O resultado dessa leitura e a resposta do botão sob essa condição permanecem sem verificação. A inicialização com falha e a ausência de diagnóstico foram observadas. Não houve captura de áudio ou montagem física.

## Correções solicitadas ao responsável

| Prioridade | Apontamento | Critério para nova revisão |
| --- | --- | --- |
| Alta | A inicialização anuncia sucesso com MISO desconectado. Falha de comunicação e ausência de cartão retornam ao mesmo fluxo sem diagnóstico. | Verificar a comunicação com o leitor na inicialização e durante a operação, sinalizar indisponibilidade e recuperação e repetir os ensaios com conexão interrompida. O botão deve continuar responsivo e a falha deve ser distinguível de ausência de cartão. |
| Alta para operação em emergência | Reiniciar o dispositivo apaga o estado de emergência. | Definir com a equipe a recuperação segura do modo e registrar o comportamento esperado. Se for necessária persistência ou sincronização, implementar e repetir o ensaio de reinício. |
| Pendente de integração | Ausência de Wi-Fi, MQTT, formato de evento, heartbeat e teste de reconexão na versão avaliada. | Confirmar o recorte da Sprint 2. Para a etapa conectada prevista na #113, disponibilizar implementação e cenários de telemetria normal, mensagem repetida e falha/retorno da rede. |
| Média | A leitura local de UID não implementa autorização, confirmação de presença ou deduplicação por evento. | Alinhar código e requisitos aos CTs da versão escolhida, definindo a política para permanência do cartão, nova aproximação e confirmação duplicada. |
| Média | Versões das dependências e do core não estão registradas. | Informar o ambiente reproduzível e medir resposta do botão em leituras e falhas, incluindo os limites exatos do debounce. |
| Média | Diferença entre os resistores da lista física e os do diagrama simulado, com áudio ainda não medido. | Consolidar os componentes e registrar o teste do buzzer e a conferência elétrica da montagem real. |

## Situação dos critérios da #113

- Inspeção de código concluída, com ressalva sobre dependências síncronas e ausência de medição de latência máxima.
- Esquemático simulado conferido quanto à correspondência de pinos e alimentação, com pendências da montagem física identificadas.
- Execução nominal, reinício e inicialização com falha realizados. A tentativa de leitura sob falha e os ensaios de áudio estão pendentes.
- Parecer emitido com alterações necessárias. O alinhamento e a resolução dos apontamentos com o responsável ainda precisam ser registrados antes da aprovação.

A consulta ao GitLab em 05/11/2026 não encontrou MR específico para o protótipo de monitoramento. O parecer é vinculado às issues #113 e #107. Quando o MR do firmware estiver disponível, ele deverá receber este registro e as respostas aos apontamentos.
