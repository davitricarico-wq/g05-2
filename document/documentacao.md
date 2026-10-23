# Documentação IoTDoc - Módulo 4 - Inteli

**_Os trechos em itálico servem apenas como guia para o preenchimento da seção. Por esse motivo, não devem fazer parte da documentação final_**

## Nome do Grupo

#### Nomes dos integrantes do grupo

<img src="../assets/inteli.png">

## Sumário

[1. Introdução](#c1)

[2. Metodologia](#c2)

[3. Desenvolvimento e Resultados](#c3)

[4. Conclusões e Recomendações](#c4)

[5. Referências](#c5)

<br>

# <a name="c1"></a>1. Introdução (sprint 1)

_Apresente de forma sucinta o parceiro de negócio, seu porte, local, área de atuação e posicionamento no mercado. Maiores detalhes deverão ser descritos na seção 4. Descreva resumidamente o problema a ser resolvido (sem ainda mencionar a solução)._

## 1.1 Objetivos

_Descreva os objetivos gerais e específicos do seu parceiro de negócios, sem entrar em méritos técnicos ou especificações de tecnologia. Aqui importa o objetivo em si, não os meios para se chegar até lá._

## 1.2 Proposta da solução

_Descreva resumidamente sua proposta de solução (em alto nível) e como essa solução pretende resolver o problema, atendendo os objetivos listados na seção anterior._

## 1.3 Justificativa

_Faça uma breve defesa de sua proposta de solução, escreva sobre seus potenciais, seus benefícios e como ela se diferencia._

# <a name="c2"></a>2. Metodologia (sprint 3)

_Descreva as etapas da metodologia RM-ODP que foram utilizadas para o desenvolvimento, citando o referencial teórico. Você deve apenas enunciar os métodos, sem dizer ainda como ele foi aplicado e quais resultados obtidos._

# <a name="c3"></a>3. Desenvolvimento e Resultados

## 3.1. Domínio de Fundamentos de Negócio

_Link para os templates de negócios: https://drive.google.com/drive/folders/1lTqisJ_gxxtc5J5aXM8ula2kQ4MsII_M?usp=sharing_

### 3.1.1. Contexto da Indústria (sprint 1)

_O aluno deve fornecer informações sobre a concorrência (mínimo 3 competidores - 1 parágrafo; modelo de negócio - 1 parágrafo, e tendências - 1 parágrafo). Considere o setor do parceiro. Por exemplo, se o parceiro for a Rede Gazeta, o setor de Televisão.<br>
<br>
A análise de 5 forças deve ser feita considerando também o parceiro, o aluno deve preencher o template disponibilizado. No link a seguir há indicações de como avaliar as 5 forças: https://rockcontent.com/br/blog/5-forcas-de-porter/_

### 3.1.2. Análise SWOT (sprint 1)

_A entrega deve ser realizada no formato de quadrante (template), semelhante ao template disponibilizado. Em forças e fraquezas considerar aspectos internos e em oportunidades e ameaças, aspectos externos. Essa análise deve ser feita com relação ao parceiro, por exemplo a Rede Gazeta._

### 3.1.3. Descrição da Solução a ser Desenvolvida (sprint 1)

#### 3.1.3.1 Qual é o problema a ser resolvido

#### 3.1.3.2 Qual a solução proposta (visão de negócios)

Na primeira sprint, o grupo concentrou o escopo do protótipo na **contabilização quantitativa de passagens** nos acessos aos Pontos de Encontro durante emergências ou simulados de vazamento de cloro gasoso na unidade de Cubatão (SP). No recorte do Produto Mínimo Viável (MVP), a detecção registra a travessia pelo acesso monitorado, sem identificar nominalmente a pessoa e sem realizar localização contínua em ambiente interno (em conformidade com a restrição do Termo de Abertura do Projeto — TAPI). No protótipo inicial simulado na Sprint 1 (seção 3.4.1), utiliza-se um sensor ultrassônico HC-SR04 com Arduino Uno R3 para contagem local unidirecional em fila única. Para a montagem física prevista na Lista de Materiais (seção 3.1.7), especificam-se dois sensores HC-SR04 por acesso para distinguir entrada e saída. A conexão dos dispositivos à rede e o painel centralizado estão planejados para as próximas sprints. A instalação de sensores em passagens entre áreas internas da planta depende de validação futura com a Unipar.

#### 3.1.3.3 Como a solução proposta deverá ser utilizada

O evento de emergência é iniciado por acionamento humano ou por integração com o alarme existente da planta; o sistema proposto não realiza detecção química automática de cloro. Nesse instante, o saldo operacional de entradas e saídas das Portarias P1 e P2 é congelado como população de referência **B**, sujeita a eventuais inconsistências prévias do controle de acesso. Durante a evacuação, as passagens nos Pontos de Encontro compõem o total **A**. A diferença **D = B − A** representa uma estimativa numérica: não identifica quem falta nem informa sua localização, e **D = 0** não substitui a conferência complementar e a decisão final da equipe de Saúde, Segurança e Meio Ambiente (SSMA).

#### 3.1.3.4 Quais os benefícios trazidos pela solução proposta

#### 3.1.3.5 Qual será o critério de sucesso e qual medida será utilizada para o avaliar

### 3.1.4. Value Proposition Canvas (sprint 1)

_O Canvas da proposta de valor deve ser feito considerando a solução que vocês estão desenvolvendo. Usar o template disponível no drive da turma._

### 3.1.5. Matriz de Riscos (sprint 1)

_A Matriz de Risco deve ser desenhada considerando o projeto que os alunos estão criando. Deve ser entregue no template disponível no drive da turma. Os alunos devem enumerar os riscos, distribuí-los na matriz e justificar suas decisões._

### 3.1.6. Política de Privacidade de acordo com a LGPD (sprint 1)

_A Política de privacidade para o projeto de acordo com a LGPD deve ser escrita considerando o projeto que os alunos estão criando. Os pontos a seguir precisam ser apresentados. O aluno pode utilizar o Gerador de Política de Privacidade (https://www.nuvemshop.com.br/ferramentas/gerador-politica-de-privacidade), criado pela Nuvemshop e, de acordo com a empresa, já adaptado a LGPD para ter uma prévia e ajustar de acordo com o seu projeto._

#### 3.1.6.1 Informações gerais sobre a empresa / organização

#### 3.1.6.2 Informações sobre o tratamento de dados

#### 3.1.6.3 Quais são os dados coletados

#### 3.1.6.4 Onde os dados são coletados

#### 3.1.6.5 Para quais finalidades os dados serão utilizadas

#### 3.1.6.6 Onde os dados ficam armazenados

#### 3.1.6.7 Qual o período de armazenamento dos dados (retenção)

#### 3.1.6.8 Uso de cookies e/ou tecnologias semelhantes

#### 3.1.6.9 Com quem esses dados são compartilhados (parceiros, fornecedores, subcontratados)

#### 3.1.6.10 Informações sobre medidas de segurança adotadas pela empresa

#### 3.1.6.11 Orientações sobre como a empresa/organização atende aos direitos dos usuários

#### 3.1.6.12 Informações sobre como o titular de dados pode solicitar e exercer os seus direitos

#### 3.1.6.13 Informações de contato do Data Protection Officer (DPO) ou encarregado de proteção de dados da organização

### 3.1.7. Bill of Material (BOM) (sprint 1)

A Bill of Materials (BOM) apresenta os componentes necessários para a montagem do protótipo físico do MVP. O levantamento reúne os itens de processamento, sensoriamento, interação, sinalização, visualização e interconexão utilizados no circuito, permitindo a rastreabilidade dos materiais e apoiando o planejamento de aquisição.

Esta BOM considera **uma unidade** do protótipo ilustrado, composta por Arduino Uno, dois sensores ultrassônicos, elementos de sinalização visual e sonora, display LCD, botão para alternância entre os modos normal e emergência, e materiais de montagem. Os valores foram levantados em fornecedores brasileiros para apoiar uma estimativa inicial de custo; eles não incluem frete, impostos adicionais ou materiais de reposição.

<div align="center">
<p>Quadro X — Bill of Materials do MVP</p>

| Categoria                 | Quantidade | Referência do componente no protótipo/PCI                      | Código do componente (fabricante)                                                                                                        |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                               Valor do componente (R$) |
| ------------------------- | ---------: | -------------------------------------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------: |
| Processamento             |          1 | Arduino Uno                                                    | Arduino Uno R3                                                                                                                           |          R$39,54 ([Mercado Livre](https://www.mercadolivre.com.br/cabo-usb-compativel-com-placa-de-desenvolvimento-arduino-uno-r3-atmega328p-ch340/p/MLB44072268?pdp_filters=item_id%3AMLB5229650730&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735125422&matt_product_id=MLB44072268-product&matt_product_partition_id=2495059736147&matt_target_id=pla-2495059736147&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoJRuM1jdBvwQsy-JbDuO2GqZUVevX9I5SgDqMi81aZh_Pusf2a-KQhoC7PwQAvD_BwE)) |
| Sensoriamento             |          2 | Sensores ultrassônicos de entrada e saída                      | HC-SR04                                                                                                                                  | R$15,00 (unidade); R$30,00 (2 unidades) ([Mercado Livre](https://www.mercadolivre.com.br/modulo-sensor-ultrassonico-distancia-hc-sr04-para-arduino/p/MLB64164978?pdp_filters=item_id%3AMLB5130062737&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735128761&matt_product_id=MLB64164978-product&matt_product_partition_id=2495059736347&matt_target_id=pla-2495059736347&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoIQ9ytYCHxi7QMFA-RU1aROmSXUtXE3xD1biz_vwK9s3dwk-8Ro6oxoCIOoQAvD_BwE)) |
| Interação                 |          1 | Botão de pressão                                               | Board Push Button Switch (tactile)                                                                                                       |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            R$1,21 (unidade) ([Mercado Livre](https://www.mercadolivre.com.br/conjunto-de-50-botoes-de-pressao-para-placa-de-circuito/p/MLB2052130334?matt_tool=18956390&utm_source=google_shopping&utm_medium=organic&pdp_filters=item_id%3AMLB7635767930&from=gshop)) |
| Sinalização visual        |          1 | LED verde                                                      | LED difuso 5 mm                                                                                                                          |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       R$0,15 ([Eletrogate](https://www.eletrogate.com/led-difuso-5mm-verde?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=22470016551&gbraid=0AAAAADqxjs-J182in_CBPr1nyA54F-LL9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoCaLKeb9vaLT7u49dThE1TEGwTfv0C6_EYGFI6dS3biP6Xoqy1ZgVxoCiEIQAvD_BwE)) |
| Sinalização visual        |          1 | LED vermelho                                                   | LED difuso 5 mm                                                                                                                          |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    R$0,15 ([Eletrogate](https://www.eletrogate.com/led-difuso-5mm-vermelho?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoN-apmwJkkXYYznxTECGwrAfUUdQMOGaQL_4-m8zeFGfzU6AOYhiNxoCqJgQAvD_BwE)) |
| Sinalização sonora        |          1 | Buzzer                                                         | Buzzer ativo 5V                                                                                                                          |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            R$2,90 ([Eletrogate](https://www.eletrogate.com/buzzer-ativo-5v?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoLPBf6mtcZizCQRpZRRLmGNgwewSSuaihP1VIORbIt2h8imNmBty9RoCrG8QAvD_BwE)) |
| Visualização              |          1 | Display LCD                                                    | LCD 16 × 2 com interface I²C                                                                                                             |                                    R$25,55 ([Mercado Livre](https://www.mercadolivre.com.br/display-lcd-16x2-1602-fundo-azul-com-modulo-i2c-soldado/up/MLBU4549779439?pdp_filters=item_id%3AMLB7321088826&from=gshop&matt_tool=56885173&matt_word=&matt_source=google&matt_campaign_id=22090354256&matt_ad_group_id=192555051054&matt_match_type=&matt_network=g&matt_device=c&matt_creative=799032781561&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=119897001&matt_product_id=MLBU4549779439&matt_product_partition_id=2498613880064&matt_target_id=pla-2498613880064&cq_src=google_ads&cq_cmp=22090354256&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354256&gbraid=0AAAAAD93qcAf98DVye3WhOkZqJU1o3eSE&gclid=CjwKCAjwotzWBhBFEiwA1JhPoMgiK21_IFmDbVmbNMgDC3o03ZARpy4oBINxyPna8AsDNp4ISmYalRoCR_MQAvD_BwE)) |
| Condicionamento elétrico  |          2 | Resistores                                                     | 5V ou 3.3V, 1k Ohm, (1/4W)                                                                                                               |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 R$0,12 (unidade) ([Saravati](https://www.saravati.com.br/resistor-1k-5-1-4w.html?gad_source=1&gad_campaignid=23551463662&gbraid=0AAAAAC2QUl9NJxOJbt89j1o1regZh5Nz1&gclid=CjwKCAjwotzWBhBFEiwA1JhPoG38v08Hq-K_8VKXdxS8REO0qaNgkFziIwVTl9Rc2LXpGSD3o1KboRoCCEkQAvD_BwE)) |
| Montagem                  |          1 | Protoboard                                                     | Protoboard para montagem sem solda                                                                                                       |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      R$8,90 ([Eletrogate](https://www.eletrogate.com/protoboard-400-pontos?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=4&gad_campaignid=20223015315&gbraid=0AAAAADqxjs--_IDti_OP_PomQr4wJeFmq&gclid=CjwKCAjwotzWBhBFEiwA1JhPoPlT3_2SAg4EbLjDVCFA_2Gb0qBCgwXD5npVhSjZdn-yagDte4bg4BoCZoMQAvD_BwE)) |
| Alimentação planejada     |          1 | Pilha de lítio tipo moeda, ainda não implementada no protótipo | CR2023, 3 V, não recarregável                                                                                                            |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     R$13,90 ([Mercado Livre](https://lista.mercadolivre.com.br/bateria-maxell-cr2032)) |
| Interconexão              |          4 | Jumpers macho-fêmea                                            | Alternativa A: conexão do display LCD I²C; utilizar com 16 jumpers macho-macho                                                           |                R$1,05 (unidade); R$4,20 (4 unidades) ([Mercado Livre](https://www.mercadolivre.com.br/20pcs-jumper-mxf-20cm--20pcs-jumper-fxf-20cm/up/MLBU2370810037?pdp_filters=item_id%3AMLB4078036044&from=gshop&matt_tool=19390443&matt_word=&matt_source=google&matt_campaign_id=22090354205&matt_ad_group_id=191786774561&matt_match_type=&matt_network=g&matt_device=c&matt_creative=782869962440&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=5458938305&matt_product_id=MLBU2370810037&matt_product_partition_id=2495493043879&matt_target_id=pla-2495493043879&cq_src=google_ads&cq_cmp=22090354205&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090354205&gbraid=0AAAAAD93qcBWh7S0-tQRtyURYUhdok1-w&gclid=CjwKCAjwotzWBhBFEiwA1JhPoO4nhPq-F2KwwBsDI-Hn3A0iwomUAHbI1TRcldDnimZUYjGi7kAF6xoCG5oQAvD_BwE)) |
| Interconexão              |   16 ou 20 | Jumpers macho-macho                                            | Alternativa A: 16 unidades com 4 jumpers macho-fêmea; alternativa B: 20 unidades, caso todos os módulos sejam conectados pela protoboard |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      R$0,42 (unidade); Alternativa A: R$6,72; Alternativa B: R$8,40; ambos em [Mercado Livre](https://www.mercadolivre.com.br/cabo-jumper-mxm-20cm-40-pinos-para-arduino-protoboard/up/MLBU2098535281) |
| **Total estimado do MVP** |            |                                                                |                                                                                                                                          |                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   **Alternativa A: R$133,46; Alternativa B: R$130,94** |

<p>Fonte: elaboração dos autores (2026).</p>
</div>

> Observação: Todos os links de compra dos componentes foram acessados em 20/10/2026. Os preços e a disponibilidade podem variar em função do tempo.

A coluna <i>Categoria</i> identifica a função do item no protótipo, enquanto <i>Quantidade</i> registra o número de unidades necessárias. A <i>Referência</i> descreve o componente empregado no circuito, e o <i>Código do componente</i> apresenta o modelo ou a especificação adotada. A coluna <i>Valor do componente</i> registra o valor estimado e disponibiliza o respectivo link de consulta. Nos itens vendidos por unidade, o custo total foi calculado pela multiplicação do valor unitário pela quantidade indicada.

O custo estimado da alternativa A é de R$ 133,46, considerando quatro jumpers macho-fêmea para o display LCD I²C e dezesseis jumpers macho-macho para as demais conexões. Na alternativa B, o custo estimado é de R$ 130,94, utilizando somente vinte jumpers macho-macho, caso todos os módulos possam ser conectados pela protoboard. Ambos os totais incluem uma pilha CR2023 de 3 V. A alternativa B é R$ 2,52 mais econômica e reduz a variedade de cabos necessária; contudo, a escolha deve respeitar o tipo de terminal presente nos componentes físicos.

No protótipo, o Arduino Uno realiza o processamento das entradas e controla as saídas. Dois sensores ultrassônicos HC-SR04 identificam separadamente a entrada e a saída de pessoas, e o total é apresentado no display LCD 16 × 2 conectado por I²C. O botão alterna a sinalização entre os LEDs verde e vermelho, enquanto o buzzer fornece o aviso sonoro das contagens. Os dois resistores de 1 kΩ limitam a corrente dos LEDs. A protoboard e os jumpers viabilizam a montagem e as conexões do circuito sem a necessidade de solda.

A pilha CR2023 de 3 V foi incluída na BOM como item de alimentação planejado, porém ainda não foi implementada no protótipo apresentado.

A lista apresentada é adequada ao protótipo de bancada, mas não caracteriza, por si só, uma solução pronta para uso no ambiente industrial. Para uma futura implantação, será necessário especificar itens adicionais, como gabinete de proteção, alimentação apropriada, conectores, cabeamento, fixação mecânica e componentes com grau de proteção compatível com as condições de operação da Unipar.

Assim, a BOM consolida os materiais e as duas possibilidades de interconexão identificadas para a implementação do MVP. A versão final deverá validar as especificações ainda pendentes e confirmar a alternativa de jumpers que será utilizada antes da aquisição dos componentes.

## 3.2. Domínio de Fundamentos de Experiência de Usuário

### 3.2.1. Personas (sprint 1)

_Coloque aqui suas Personas (seguindo as instruções na descrição do artefato)_

### 3.2.2. Jornada do Usuário e Storyboard (sprint 2)

_Coloque aqui seu Mapa de Jornada do Usuário (seguindo as instruções na descrição do artefato)_

_Coloque aqui seu Storyboard (seguindo as instruções na descrição do artefato)_

## 3.3. Solução Técnica

_Nesta seção, detalhe a especificação da solução, de acordo com o disposto nas subseções._

### 3.3.1. Requisitos Funcionais (sprint 1, refinar e atualizar até sprint 5)

Para leitura dos requisitos, **B** é a população de referência presente na planta quando o alarme é acionado, **A** é o total de passagens contabilizadas nas entradas dos Pontos de Encontro ativos desde esse instante e **D = B − A** é a diferença numérica estimada. **D = 0** indica apenas convergência dos totais, sujeita à conferência da equipe de Saúde, Segurança e Meio Ambiente (SSMA). Os códigos de atores **A01 a A05** estão definidos na seção 3.2.1.

De forma geral, os atores e perfis operacionais referenciados nos requisitos funcionais são:

- **A01 — Gestor de SSMA | Público principal — proto-persona Tuco Salamanca:** acompanha o balanço de evacuação, coordena a conferência complementar em campo e utiliza os dados para apoiar as decisões sobre a emergência.
- **A02 — Brigadistas / Equipe de Emergência | Público secundário — sem proto-persona elaborada:** orientam a evacuação, verificam os Pontos de Encontro e comunicam informações de campo à gestão da emergência.
- **A03 — Técnico de Operação / Colaborador | Público principal — proto-persona Gustavo Fring:** representa quem precisa receber o alerta, evacuar e ser contabilizado ao passar pelo acesso monitorado, sem identificação nominal pelo sensor.
- **A04 — Responsável por Infraestrutura e TI | Público secundário — sem proto-persona elaborada:** configura os dispositivos e locais monitorados e apoia a conectividade e a integração da solução.
- **A05 — Operador do Centro de Controle Operacional (CCO) | Público principal — proto-persona Maria Schrader:** acompanha indicadores e alarmes, recebe relatos de campo e consulta o painel para apoiar a comunicação com a SSMA e as equipes responsáveis.

**Quadro 1 — Requisitos funcionais do sistema de apoio à contagem e balanço de evacuação.**

| ID    | Nome                                                                             | Descrição verificável                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       | Tipo                     | Prioridade | Atores        | Origem                                                        | Situação                                                 |
| ----- | -------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------ | ---------- | ------------- | ------------------------------------------------------------- | -------------------------------------------------------- |
| RF001 | Contagem local de passagens no Ponto de Encontro                                 | Quando o modo de monitoramento estiver ativo, o dispositivo local (Arduino Uno R3 com sensor ultrassônico HC-SR04) deve detectar a presença de uma pessoa atravessando o acesso em distância inferior a 200 cm, incrementar em uma unidade o contador local, atualizar imediatamente o total no visor LCD 16x2 I2C (`Total: X`) e emitir um pulso sonoro de 100 ms no buzzer ativo.                                                                                                                                                                                         | Sensoriamento            | Alta       | A01, A02, A03 | Seção 1.2; Seção 3.1.3; BOM 3.1.7; Protótipo 3.4.1            | Simulado no Wokwi (Sprint 1); validação física planejada |
| RF002 | Identificação e configuração de função dos dispositivos                          | A solução integrada deve associar a cada nó de sensoriamento um identificador único (`device_id`), o local físico monitorado (Portaria P1, Portaria P2 ou Ponto de Encontro específico) e a regra direcional dos sensores (incremento de entrada ou decremento/descarte de saída a partir do par de sensores ultrassônicos).                                                                                                                                                                                                                                                | Configuração             | Alta       | A04           | Seção 3.1.3; BOM 3.1.7; RN03                                  | Planejado                                                |
| RF003 | Consolidação da população de referência nas portarias                            | A solução integrada deve contabilizar as entradas e subtrair as saídas registradas nas Portarias P1 e P2 durante a operação de rotina para manter atualizado o saldo estimado de pessoas presentes no interior da planta, sem rastrear a divisão por setores internos.                                                                                                                                                                                                                                                                                                      | Processamento            | Alta       | A01, A04, A05 | Kickoff Unipar; Seção 1.2; Seção 3.1.3.2; RN02                | Planejado                                                |
| RF004 | Abertura do evento de emergência e congelamento de B                             | Ao receber o comando de início de emergência ou simulado de vazamento de cloro, a solução deve registrar o carimbo de tempo inicial (`t = 0`), habilitar os Pontos de Encontro designados para a ocorrência, congelar o saldo corrente das Portarias P1 e P2 como a população de referência **B** e iniciar a contagem regressiva do prazo interno de 10 minutos definido pela SSMA da Unipar.                                                                                                                                                                              | Controle                 | Alta       | A01, A03, A05 | Kickoff Unipar; Seção 1.1; Seção 3.1.3.3; RN01; RN02          | Planejado                                                |
| RF005 | Totalização anônima de passagens nos Pontos de Encontro (A)                      | Enquanto houver um evento de emergência ativo, a solução deve somar na variável **A** todas as passagens válidas de entrada registradas pelos dispositivos dos Pontos de Encontro ativos a partir do instante do alarme, tratando cada leitura de forma estritamente numérica e anônima (sem associação a crachá, nome, vínculo ou setor).                                                                                                                                                                                                                                  | Processamento            | Alta       | A01, A03, A05 | TAPI Unipar; Seção 3.1.3.2; Seção 3.1.6 (LGPD); RN04; RN09    | Planejado                                                |
| RF006 | Cálculo dinâmico e classificação do balanço de evacuação                         | A solução deve calcular continuamente o saldo estimado de pendentes pela fórmula **D = B − A** e exibir conjuntamente **B**, **A**, **D** e o tempo decorrido desde o alarme, classificando explicitamente três estados operacionais: (i) pendência numérica (**D > 0**), (ii) convergência numérica sujeita à conferência da SSMA (**D = 0**, isto é, **A = B**) e (iii) inconsistência por sobrecontagem (**A > B**, isto é, **D < 0**).                                                                                                                                  | Processamento / Consulta | Alta       | A01, A02, A05 | Seção 1.1; Seção 3.1.3.2; RN05; RN07; RN08                    | Planejado                                                |
| RF007 | Painel centralizado de acompanhamento (Dashboard CCO/SSMA)                       | O painel de supervisão deve apresentar em tempo real os indicadores consolidados (**B**, **A**, **D** e cronômetro de 10 minutos), a evolução temporal das passagens contabilizadas por Ponto de Encontro, o estado de conectividade de cada dispositivo e o horário da última atualização recebida.                                                                                                                                                                                                                                                                        | Visualização             | Alta       | A01, A02, A05 | TAPI Unipar; Seção 3.1.3.2; RN05; RN09                        | Planejado                                                |
| RF008 | Emissão de alerta crítico ao atingir o prazo interno de 10 minutos               | Caso os dados do balanço estejam válidos e o saldo estimado **D** permaneça estritamente positivo (**D > 0**) ao se completarem 10 minutos desde o disparo do alarme, a solução deve emitir alerta visual e sonoro de alta prioridade no painel para a SSMA, o CCO e os brigadistas, destacando a quantidade total não contabilizada e a distribuição de chegadas por Ponto de Encontro.                                                                                                                                                                                    | Alerta                   | Alta       | A01, A02, A05 | Kickoff Unipar; Seção 1.1; Seção 3.1.3.3; RN06                | Planejado                                                |
| RF009 | Sinalização de balanço inconclusivo e falhas operacionais                        | A solução deve classificar e sinalizar imediatamente o balanço como **inconclusivo** para a SSMA e o CCO quando ocorrer qualquer uma das seguintes anomalias: (i) passagens contabilizadas superiores à referência (**A > B**), (ii) falha de leitura ou indisponibilidade de sensor em Ponto de Encontro ativo, (iii) perda de comunicação de rede de um dispositivo ou (iv) base de referência **B** das portarias marcada como inválida, impedindo que o sistema apresente a evacuação como concluída.                                                                   | Alerta / Confiabilidade  | Alta       | A01, A04, A05 | Seção 3.1.3.3; Matriz de Riscos 3.1.5; RN08                   | Planejado                                                |
| RF010 | Transmissão de telemetria IoT via MQTT com idempotência                          | Na etapa conectada do protótipo, cada dispositivo deve publicar os eventos de passagem e sinais periódicos de integridade (heartbeat) em broker MQTT por meio de mensagem estruturada contendo identificador do dispositivo (`device_id`), local, função, identificador do evento ativo, carimbo de tempo, número sequencial (`seq_id`) e valor do incremento, garantindo que mensagens retransmitidas com o mesmo `seq_id` sejam descartadas sem duplicar a contagem.                                                                                                      | Integração               | Alta       | A04           | Seção 3.1.3.5; RN03; RN11                                     | Planejado para próximas sprints                          |
| RF011 | Possível integração com o sistema existente de crachás                           | A solução deve prever a possibilidade de integração com o sistema de controle de acesso individual por crachá já utilizado nas catracas da Unipar. Se a integração for autorizada e tecnicamente viável, em uma emergência os responsáveis autorizados poderão consultar os dados pessoais já vinculados aos crachás nesse sistema. A contagem por sensores nos Pontos de Encontro permanece anônima; ela não identifica, por si só, quem chegou ou quem falta. Os dados disponíveis, as permissões de consulta e a forma de integração dependem de validação com a Unipar. | Integração / Consulta    | Média      | A01, A04, A05 | Informação da equipe; Seção 3.1.6 (LGPD)                      | Possibilidade a validar com a Unipar                     |
| RF014 | Controle local de ativação e pausa do monitoramento no dispositivo               | O dispositivo de Ponto de Encontro deve permitir ao operador/líder local alternar entre o modo de espera (pausado) e o modo de monitoramento ativo por meio de botão físico com tratamento de ruído (debounce): quando pausado, deve manter o LED verde aceso, o LED vermelho apagado e ignorar aproximações no sensor HC-SR04 preservando o total acumulado no visor LCD 16x2; quando ativo, deve manter o LED vermelho aceso e o LED verde apagado.                                                                                                                       | Controle Local           | Alta       | A01, A02      | BOM 3.1.7; Protótipo 3.4.1 (CT01, CT06, CT07); RN01           | Simulado no Wokwi (Sprint 1); validação física planejada |
| RF015 | Bloqueio de duplicidade por permanência e descarte de leitura inválida no sensor | O firmware do dispositivo local deve manter trava lógica de presença ocupada enquanto o objeto ou pessoa permanecer a menos de 200 cm do sensor HC-SR04 (liberando novo incremento somente após leitura igual ou superior a 200 cm) e deve descartar leituras nulas decorrentes de falha ou desconexão do pino `ECHO` (timeout de 30 ms), evitando contagens repetidas ou falsos positivos no visor LCD 16x2.                                                                                                                                                               | Confiabilidade Local     | Alta       | A01, A04      | Seção 3.1.3.3; Protótipo 3.4.1 (CT03, CT04, CT05, CT08); RN08 | Simulado no Wokwi (Sprint 1); validação física planejada |

**Nota do Quadro 1:** A classificação "Simulado no Wokwi (Sprint 1); validação física planejada" identifica os requisitos funcionais locais já implementados no código-fonte da Sprint 1 e verificados nos casos de teste CT01 a CT08 em ambiente virtual (seção 3.4.1), restando sua validação física em bancada nas etapas seguintes. O status "Planejado" indica capacidades necessárias à arquitetura integrada das próximas sprints. O RF011 registra uma possibilidade de integração a validar com a Unipar, sem afirmar que ela já foi aprovada ou implementada. Os identificadores RF012 e RF013 foram reservados, pois os temas anteriormente descritos neles ainda não haviam sido pensados pela equipe; não integram, por ora, o escopo aprovado de requisitos. Como a Lista de Materiais (seção 3.1.7) da Sprint 1 adota a placa Arduino Uno R3 (ATmega328P), que não dispõe de interface Wi-Fi nativa, a conectividade MQTT prevista no RF010 será implementada nas sprints subsequentes mediante módulo de comunicação serial/ ponte de rede ou atualização de hardware conforme definido na arquitetura técnica (seção 3.3.5).

### 3.3.2. Regras de Negócio (sprint 1, refinar até sprint 5)

As regras de negócio abaixo delimitam as condições formais para que uma leitura de passagem integre o balanço dinâmico de evacuação e estabelecem os parâmetros de interpretação operacional pela liderança de SSMA e pelo CCO. No recorte atual do MVP, elas aplicam-se a eventos de emergência e exercícios simulados de vazamento de cloro gasoso na unidade de Cubatão, considerando sensoriamento de passagem instalado nos Pontos de Encontro e população de referência obtida das Portarias P1 e P2. O sensoriamento entre áreas internas da planta, a orientação ativa de rotas de fuga e a identificação nominal de pessoas ausentes permanecem fora do escopo desta versão, em alinhamento com o TAPI e com a seção 3.1.3.

| ID   | Descrição | RF associado |
| ---- | --------- | ------------ |
| RN01 | ...       | RF001        |
| RN02 | ...       | RF001        |

### 3.3.3. Requisitos Não Funcionais — 8 Eixos ISO/IEC 25010 (sprints 2 a 5)

_Preencha os 8 eixos. Cada eixo deve ter ao menos um RNF verificável (com métrica, limite ou critério concreto) ou justificativa explícita de ausência. Evolua do conceitual (sprint 2) ao técnico mensurável (sprint 5)._

| Eixo                     | Requisito | Métrica / Critério | Justificativa |
| ------------------------ | --------- | ------------------ | ------------- |
| USAB — Usabilidade       | ...       | ...                | ...           |
| CONF — Confiabilidade    | ...       | ...                | ...           |
| DES — Desempenho         | ...       | p95 < X ms         | ...           |
| SUP — Suportabilidade    | ...       | ...                | ...           |
| SEG — Segurança          | ...       | ...                | ...           |
| CAP — Capacidade         | ...       | ...                | ...           |
| REST — Restrições Design | ...       | ...                | ...           |
| ORG — Organizacionais    | ...       | ...                | ...           |

### 3.3.4. Matriz de Rastreabilidade (RTM) (sprints 1 a 5)

_A RTM consolida a rastreabilidade completa do sistema. Um elo quebrado invalida toda a cadeia — mantenha-a atualizada a cada sprint. Referencie os casos de testes a partir das tabelas definidas na seção 3.4.x_

| Persona | RF    | RN   | Caso de Teste | Evidência                          |
| ------- | ----- | ---- | ------------- | ---------------------------------- |
| ...     | RF001 | RN01 | CT02          | print, log, relatório de cobertura |

### 3.3.5. Arquitetura da Solução (sprint 3)

_Vídeo de explicação sobre a arquitetura da solução: (coloque aqui o link do vídeo)_

\_Descreva a arquitetura técnica da solução de forma detalhada (visão de arquitetura).

Justifique como a arquitetura suporta os requisitos funcionais e não funcionais.

O diagrama de arquitetura deve:\_

- _Mostrar microcontroladores, incluindo descrições de sua função no sistema (por exemplo: "Irá processar o sinal dos sensores a cada X minutos")_
- _Mostrar sensores, incluindo descrição de função e especificações técnicas do tipo de informação que será coletada_
- _Mostrar apresentadores de informação (displays), incluindo descrição de que tipo de informação será apresentada (por exemplo, "Mostrar temperatura dos sensores")_
- _Mostrar atuadores, caso existam na solução, incluindo descrições do que irão acionar (por exemplo, "Ligar motor de irrigação durante x minutos")_
- _Mostrar o broker MQTT e o dashboard que é a interface do usuário_
- _Mostrar ligações entre os elementos (com fio ou sem fio) – incluindo conexões com sensores e atuadores, conexão com WiFi, entre outros_

### 3.3.6. Arquitetura do Protótipo(sprint 4)

_Vídeo de explicação sobre a arquitetura do protótipo físico: (coloque aqui o link do vídeo)_

\_Descreva as tecnologias utilizadas de forma detalhada (visão de tecnologia).

Descreva a arquitetura usando um diagrama de blocos similar à visão anterior, porém especificando as tecnologias utilizadas. O diagrama de arquitetura deve:\_

- _Mostrar microcontroladores, incluindo descrições de sua função no sistema (por exemplo: "Irá processar o sinal dos sensores a cada X minutos")_
- _Mostrar sensores, incluindo descrição de função e especificações técnicas do tipo de informação que será coletada_
- _Mostrar apresentadores de informação (displays), incluindo descrição de que tipo de informação será apresentada (por exemplo, "Mostrar temperatura dos sensores")_
- _Mostrar atuadores, caso existam na solução, incluindo descrições do que irão acionar (por exemplo, "Ligar motor de irrigação durante x minutos")_
- _Mostrar o broker MQTT e o dashboard que é a interface do usuário_
- _Mostrar ligações entre os elementos (com fio ou sem fio) – incluindo conexões com sensores e atuadores, conexão com WiFi, entre outros._
  _Faça uma tabela dos possíveis componentes utilizados. Todos os componentes devem estar presentes na arquitetura._

| **Componente**             | **Descrição**                                                                                                                                                               | **Tipo**              |
| -------------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | --------------------- |
| E.g. ESP32 WROOM 32 Devkit | E.g. Trata-se de um microcontrolador amplamente usado na indústria e em projetos educacionais, que possui interfaces mais amigáveis para conexão de componentes diversos... | E.g. Microcontrolador |
| E.g. sensor XPTO           | E.g. Este sensor mede o sinal de XYZ em unidades q/s, e possui tolerância de abcd...                                                                                        | E.g. Sensor           |

### 3.3.7. Arquitetura Refinada da Solução (sprint 5)

\_Descreva a revisão da arquitetura técnica da solução de forma detalhada (visão de arquitetura). <br>

Justifique como a arquitetura suporta os requisitos funcionais e não funcionais. <br>

A revisão deverá incluir comentários sobre cada ponto levantado, mostrando como os ajustes foram realizados, além da descrição da arquitetura revisada.\_

## 3.4. Resultados

_Nesta seção, detalhe os resultados obtidos com a implementação, de acordo com o disposto nas subseções._

### 3.4.1.Protótipo Inicial do Projeto usando o Simulador Wokwi (sprint 1)

_Preencha aqui o link para o protótipo inicial no Wokwi_

_Abaixo você deve registrar diversas situações de teste, indicando exemplos de leitura (entrada) e escrita (saída) apresentadas pelo seu sistema no simulador. Estes registros serão utilizados para testar seus componentes, portanto, descreva várias situações, incluindo não apenas casos de sucesso, mas também de possíveis falhas nas leituras de entradas e saídas. <br>
Siga as nomenclaturas e convenções já utilizadas anteriormente, e não se esqueça dos alinhamentos de negócios e experiência do usuário para pensar em situações representativas. Inclua figuras do simulador e descreva os testes realizados para ilustrar o funcionamento do protótipo simulado. A tabela a seguir serve como exemplo._

| **CT#** | **Bloco**                             | **Componente de entrada**    | **Leitura da entrada** | **Componente de saída** | **Leitura da saída**        | **Descrição**                                    |
| ------- | ------------------------------------- | ---------------------------- | ---------------------- | ----------------------- | --------------------------- | ------------------------------------------------ |
| CT01    | ex. medidor de umidade relativa do ar | ex. “sensor de umidade XPTO” | < 100                  | ex. led amarelo         | piscante em intervalo de 1s | quando a umidade está baixa, o led amarelo pisca |

### 3.4.2. Protótipo Físico do Projeto (offline) (sprint 2)

_Aqui você deve registrar diversas situações de teste, indicando exemplos de leitura (entrada) e escrita (saída) apresentadas pelo seu sistema físico. Estes registros serão utilizados para testar seus componentes, portanto, descreva várias situações, incluindo não apenas casos de sucesso, mas também de possíveis falhas nas leituras de entradas e saídas. <br>
Siga as nomenclaturas e convenções já utilizadas anteriormente, e não se esqueça dos alinhamentos de negócios e experiência do usuário para pensar em situações representativas. Inclua figuras do protótipo físico e descrições dos testes realizados para ilustrar o funcionamento do protótipo. Continue a numeração de CT a partir da tabela anterior. A tabela a seguir serve como exemplo._

| **CT#** | **Descrição**                                    | **Pré-condição**                  | **Procedimento de teste**                                                                                                 | **Pós-condição/Resultado esperado**                                                                         | **Observações** (opcional) |
| ------- | ------------------------------------------------ | --------------------------------- | ------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------------------------------- | -------------------------- |
| CT11    | ex. Verificação de conexão de rede bem-sucedida. | ex. O dispositivo está desligado. | ex. Ligue o dispositivo, aguarde alguns segundos e verifique se ele estabelece uma conexão bem-sucedida com a rede Wi-Fi. | ex. O LED verde indicador de conexão acende de forma contínua, sinalizando uma conexão bem-sucedida à rede. |

### 3.4.3. Protótipo do Projeto com MQTT e I2C (sprint 3)

_Aqui você deve registrar diversas situações de uso de seu sistema como um todo, indicando exemplos de ação do usuário e resposta do sistema, apontando como o ambiente deverá estar configurado para receber a ação e produzir a resposta. Estes registros serão utilizados para testar seu sistema, portanto, descreva várias situações, incluindo não apenas casos de sucesso, mas também de falha nos comportamentos do sistema. <br>
Siga as nomenclaturas e convenções já utilizadas anteriormente, e não se esqueça dos alinhamentos de negócios e experiência do usuário para pensar em situações representativas. Inclua figuras do protótipo físico e dashboards, além de descrições dos testes realizados para ilustrar o funcionamento do protótipo. Continue a numeração de CT a partir da tabela anterior. A tabela a seguir serve como exemplo._

| **CT#** | **Configuração do ambiente**                                                                                                                   | **Ação do usuário**                                                                     | **Resposta esperada do sistema**                                                                                                                 |
| ------- | ---------------------------------------------------------------------------------------------------------------------------------------------- | --------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------------------------------------------------------------ |
| CT21    | ex. precisa de um computador conectado na interface, dois ou mais dispositivos que simulem o posicionamento de um item X no espaço físico etc. | ex. usuário logado busca a localização do item X, que está ativo e operando normalmente | ex. interface do sistema acessa os dados da última localização registrada do item X e apresenta, constando local e horário de última atualização |

### 3.4.4. Protótipo Físico do Projeto (online) (sprint 4)

_Aqui você deve registrar diversas situações de uso de seu sistema como um todo, indicando exemplos de ação do usuário e resposta do sistema, apontando como o ambiente deverá estar configurado para receber a ação e produzir a resposta. Estes registros serão utilizados para testar seu sistema, portanto, descreva várias situações, incluindo não apenas casos de sucesso, mas também de falha nos comportamentos do sistema. <br>
**Desta vez, utilize diagramas de sequência UML para descrever os fluxos de teste do sistema.** <br>
Siga as nomenclaturas e convenções já utilizadas anteriormente, e não se esqueça dos alinhamentos de negócios e experiência do usuário para pensar em situações representativas. Inclua figuras do protótipo físico e dashboards, além de descrições dos testes realizados para ilustrar o funcionamento do protótipo._

### 3.4.5. Protótipo Final do Projeto (sprint 5)

_Registre as situações de uso do sistema revisadas utilizando a modelagem UML para descrever os fluxos de teste. <br>
Também inclua figuras da versão final do protótipo físico e dashboards, além de descrições dos testes realizados para ilustrar o funcionamento do protótipo._

## <a name="c4"></a>4. Conclusões e Recomendações

_Escreva, de forma resumida, sobre os principais resultados do seu projeto e faça recomendações formais ao seu parceiro de projeto em relação ao uso dessa solução. Você pode aproveitar este espaço para comentar sobre possíveis materiais extras._

## <a name="c5"></a>5. Referências

MERCADO LIVRE. _Cabo USB compatível com placa de desenvolvimento Arduino Uno R3 ATmega328P CH340_. Disponível em: <https://www.mercadolivre.com.br/cabo-usb-compativel-com-placa-de-desenvolvimento-arduino-uno-r3-atmega328p-ch340/p/MLB44072268?pdp_filters=item_id%3AMLB5229650730&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735125422&matt_product_id=MLB44072268-product&matt_product_partition_id=2495059736147&matt_target_id=pla-2495059736147&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoJRuM1jdBvwQsy-JbDuO2GqZUVevX9I5SgDqMi81aZh_Pusf2a-KQhoC7PwQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. _Módulo sensor ultrassônico de distância HC-SR04 para Arduino_. Disponível em: <https://www.mercadolivre.com.br/modulo-sensor-ultrassonico-distancia-hc-sr04-para-arduino/p/MLB64164978?pdp_filters=item_id%3AMLB5130062737&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735128761&matt_product_id=MLB64164978-product&matt_product_partition_id=2495059736347&matt_target_id=pla-2495059736347&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoIQ9ytYCHxi7QMFA-RU1aROmSXUtXE3xD1biz_vwK9s3dwk-8Ro6oxoCIOoQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. _Conjunto de 50 botões de pressão para placa de circuito_. Disponível em: <https://www.mercadolivre.com.br/conjunto-de-50-botoes-de-pressao-para-placa-de-circuito/p/MLB2052130334?matt_tool=18956390&utm_source=google_shopping&utm_medium=organic&pdp_filters=item_id%3AMLB7635767930&from=gshop>. Acesso em: 20 out. 2026.

ELETROGATE. _LED difuso 5 mm verde_. Disponível em: <https://www.eletrogate.com/led-difuso-5mm-verde?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=22470016551&gbraid=0AAAAADqxjs-J182in_CBPr1nyA54F-LL9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoCaLKeb9vaLT7u49dThE1TEGwTfv0C6_EYGFI6dS3biP6Xoqy1ZgVxoCiEIQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. _LED difuso 5 mm vermelho_. Disponível em: <https://www.eletrogate.com/led-difuso-5mm-vermelho?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoN-apmwJkkXYYznxTECGwrAfUUdQMOGaQL_4-m8zeFGfzU6AOYhiNxoCqJgQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. _Buzzer ativo 5 V_. Disponível em: <https://www.eletrogate.com/buzzer-ativo-5v?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoLPBf6mtcZizCQRpZRRLmGNgwewSSuaihP1VIORbIt2h8imNmBty9RoCrG8QAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. _Display LCD 16 × 2 1602 com módulo I²C soldado_. Disponível em: <https://www.mercadolivre.com.br/display-lcd-16x2-1602-fundo-azul-com-modulo-i2c-soldado/up/MLBU4549779439?pdp_filters=item_id%3AMLB7321088826&from=gshop&matt_tool=56885173&matt_word=&matt_source=google&matt_campaign_id=22090354256&matt_ad_group_id=192555051054&matt_match_type=&matt_network=g&matt_device=c&matt_creative=799032781561&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=119897001&matt_product_id=MLBU4549779439&matt_product_partition_id=2498613880064&matt_target_id=pla-2498613880064&cq_src=google_ads&cq_cmp=22090354256&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354256&gbraid=0AAAAAD93qcAf98DVye3WhOkZqJU1o3eSE&gclid=CjwKCAjwotzWBhBFEiwA1JhPoMgiK21_IFmDbVmbNMgDC3o03ZARpy4oBINxyPna8AsDNp4ISmYalRoCR_MQAvD_BwE>. Acesso em: 20 out. 2026.

SARAVATI. _Resistor 1 kΩ 5% 1/4 W_. Disponível em: <https://www.saravati.com.br/resistor-1k-5-1-4w.html?gad_source=1&gad_campaignid=23551463662&gbraid=0AAAAAC2QUl9NJxOJbt89j1o1regZh5Nz1&gclid=CjwKCAjwotzWBhBFEiwA1JhPoG38v08Hq-K_8VKXdxS8REO0qaNgkFziIwVTl9Rc2LXpGSD3o1KboRoCCEkQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. _Protoboard 400 pontos_. Disponível em: <https://www.eletrogate.com/protoboard-400-pontos?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=4&gad_campaignid=20223015315&gbraid=0AAAAADqxjs--_IDti_OP_PomQr4wJeFmq&gclid=CjwKCAjwotzWBhBFEiwA1JhPoPlT3_2SAg4EbLjDVCFA_2Gb0qBCgwXD5npVhSjZdn-yagDte4bg4BoCZoMQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. _Bateria Maxell CR2032 de lítio, 3 V, uma unidade_. Disponível em: <https://lista.mercadolivre.com.br/bateria-maxell-cr2032>. Acesso em: 22 out. 2026.

MERCADO LIVRE. _Kit de cabos jumper macho-fêmea 20 cm_. Disponível em: <https://www.mercadolivre.com.br/20pcs-jumper-mxf-20cm--20pcs-jumper-fxf-20cm/up/MLBU2370810037?pdp_filters=item_id%3AMLB4078036044&from=gshop&matt_tool=19390443&matt_word=&matt_source=google&matt_campaign_id=22090354205&matt_ad_group_id=191786774561&matt_match_type=&matt_network=g&matt_device=c&matt_creative=782869962440&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=5458938305&matt_product_id=MLBU2370810037&matt_product_partition_id=2495493043879&matt_target_id=pla-2495493043879&cq_src=google_ads&cq_cmp=22090354205&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090354205&gbraid=0AAAAAD93qcBWh7S0-tQRtyURYUhdok1-w&gclid=CjwKCAjwotzWBhBFEiwA1JhPoO4nhPq-F2KwwBsDI-Hn3A0iwomUAHbI1TRcldDnimZUYjGi7kAF6xoCG5oQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. _Cabo jumper macho-macho 20 cm para Arduino e protoboard_. Disponível em: <https://www.mercadolivre.com.br/cabo-jumper-mxm-20cm-40-pinos-para-arduino-protoboard/up/MLBU2098535281>. Acesso em: 20 out. 2026.
