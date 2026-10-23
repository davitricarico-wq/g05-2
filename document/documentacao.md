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

#### 3.1.3.3 Como a solução proposta deverá ser utilizada

#### 3.1.3.4 Quais os benefícios trazidos pela solução proposta

#### 3.1.3.5 Qual será o critério de sucesso e qual medida será utilizada para o avaliar

### 3.1.4. Value Proposition Canvas (sprint 1)

_O Canvas da proposta de valor deve ser feito considerando a solução que vocês estão desenvolvendo. Usar o template disponível no drive da turma._     

### 3.1.5. Matriz de Riscos

A matriz de riscos reúne os eventos incertos que podem afetar o projeto do grupo **Synthetix**, divididos entre eventos negativos (ameaças) e positivos (oportunidades), distribuindo-os de acordo com a probabilidade de ocorrência e o nível de impacto de cada um.

O escopo de análise considera a arquitetura da solução desenvolvida para evacuação industrial, composta por três componentes principais:

1. **Chaveiros individuais:** Dispositivos portáteis fixados ao EPI do colaborador, dotados de botões de status/socorro, acelerômetro para detecção de ausência de movimento/queda e sinalização tátil/luminosa.
2. **Caixas Fixas (Antenas por zona):** Módulos instalados em cada cômodo/zona e no Ponto de Encontro para triangulação de sinal de radiofrequência e confirmação automática de presença.
3. **Painel Central (Dashboard):** Mapeamento dinâmico em tempo real exibindo a condição das zonas (azul = segura / vermelha = evacuar) e o status individual dos trabalhadores (OK, Pedido de Ajuda, Sem Movimento ou Sem Sinal).

Os riscos foram levantados diretamente a partir dos requisitos técnicos do MVP, das definições do grupo e das lacunas operacionais identificadas na fábrica.

---

#### Critérios de Classificação

A probabilidade expressa a chance de o evento ocorrer durante os testes do protótipo ou na operação da planta piloto. O impacto mede o efeito do evento sobre o objetivo central da solução: **garantir a contagem precisa e em tempo real dos trabalhadores, orientar a rota de fuga e acelerar a resposta da brigada de emergência**.

<div align="center">

**Quadro 1 – Escala de probabilidade da matriz de riscos**

| Nível           | Faixa  | Interpretação no projeto Synthetix                                                                                    |
| :-------------- | :----: | :-------------------------------------------------------------------------------------------------------------------- |
| **Muito baixa** | $10\%$ | O evento depende de uma combinação improvável de falhas ou de descumprimento deliberado de procedimentos.             |
| **Baixa**       | $30\%$ | O evento pode acontecer, mas existem salvaguardas operacionais ou redundâncias técnicas que reduzem sua chance.       |
| **Média**       | $50\%$ | O evento depende de condições operacionais e de infraestrutura que o grupo ainda não testou totalmente em campo.      |
| **Alta**        | $70\%$ | Existe indício concreto de ocorrência, limitação inerente da tecnologia escolhida ou dependência de fatores externos. |
| **Muito alta**  | $90\%$ | O evento é iminente ou praticamente certo na ausência de ação corretiva imediata.                                     |

_Fonte: Elaboração do Grupo Synthetix (2026)._

</div>

<br>

<div align="center">

**Quadro 2 – Escala de impacto da matriz de riscos**

| Nível           | Interpretação no projeto Synthetix                                                                              |
| :-------------- | :-------------------------------------------------------------------------------------------------------------- |
| **Muito baixo** | O evento não altera o funcionamento do painel e passa despercebido pelos operadores.                            |
| **Baixo**       | Exige ajustes pontuais na calibração dos chaveiros ou na interface gráfica sem atrasar as entregas do projeto.  |
| **Moderado**    | Gera retrabalho técnico ou elevação de custos de hardware, sem comprometer a segurança da evacuação.            |
| **Alto**        | Compromete a precisão da localização por zonas ou distorce os dados de presença do painel central.              |
| **Muito alto**  | Deixa o sistema inoperante na emergência, oculta vítimas não salvas ou atrasa diretamente o resgate da brigada. |

_Fonte: Elaboração do Grupo Synthetix (2026)._

</div>

---

#### Ameaças (Riscos Negativos)

<div align="center">

**Quadro 3 – Ameaças identificadas no projeto Synthetix**

|   ID   | Ameaça                                                                   | Probabilidade  |  Impacto   | Justificativa                                                                                                                                                                                                                                                 |
| :----: | :----------------------------------------------------------------------- | :------------: | :--------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **R1** | **Falha de rede ou queda de energia durante a emergência**               | Média ($50\%$) | Muito Alto | Incêndios e explosões frequentemente causam curto-circuito ou desligamento preventivo da rede elétrica da fábrica. Se as Caixas Fixas não possuírem alimentação autônoma por bateria, o sistema inteiro fica "cego" no momento em que mais precisa funcionar. |
| **R2** | **Ausência de lista de presença diária na fábrica**                      | Alta ($70\%$)  |    Alto    | Sem saber quem bateu o ponto ou entrou na fábrica no dia, a brigada de incêndio não consegue diferenciar quem falta no Ponto de Encontro de quem simplesmente não foi trabalhar (folga/atestado), mobilizando resgates desnecessários em áreas de risco.      |
| **R3** | **Fator humano no manuseio do chaveiro**                                 | Média ($50\%$) |  Moderado  | Operadores podem esquecer o chaveiro no armário, a bateria do dispositivo pode descarregar ou visitantes podem entrar sem o equipamento. Embora o colaborador ainda possa evacuar fisicamente, os dados do painel ficam distorcidos.                          |
| **R4** | **Interferência de RF por estruturas metálicas industriais**             | Baixa ($30\%$) |    Alto    | Galpões metálicos, tubulações pesadas e motores elétricos geram atenuação e ruído de rádio. Se o sinal falhar ou atenuar demais, o algoritmo de sinal mais forte pode alocar a pessoa na zona errada do mapa.                                                 |
| **R5** | **Inviabilidade por exigência de certificação à prova de explosão (Ex)** | Alta ($70\%$)  |  Moderado  | Em áreas classificadas (com presença de gases ou poeiras inflamáveis), equipamentos exigem invólucros ou circuitos intrinsecamente seguros. Essa exigência eleva o custo e regulamentação do produto, exigindo delimitação de escopo no MVP.                  |
| **R6** | **Retardo no acionamento do "Modo Emergência"**                          | Baixa ($30\%$) | Muito Alto | Se o sistema depender de acionamento manual no painel para alterar o mapa para "Modo Evacuação", falhas humanas ou pânico podem atrasar a sinalização das saídas e o rastreio automático.                                                                     |

_Fonte: Elaboração do Grupo Synthetix (2026)._

</div>

---

#### Planos de Resposta às Ameaças

<div align="center">

**Quadro 4 – Planos de resposta às ameaças**

|   ID   | Estratégia  | Ação planejada no projeto Synthetix                                                                                                                                                                                       |
| :----: | :---------: | :------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------ |
| **R1** | **Mitigar** | Equipar cada Caixa Fixa com bateria de reserva (Li-Ion/Powerbank) dimensionada para manter a operação autônoma por no mínimo $4\text{ horas}$ sem rede elétrica.                                                          |
| **R2** | **Mitigar** | Implementar leitor de radiofrequência na portaria da fábrica para cadastrar automaticamente a lista de presentes do dia no banco de dados assim que o chaveiro/crachá passa pela catraca.                                 |
| **R3** | **Mitigar** | Adicionar aviso sonoro/LEDs de checagem na portaria para alertar chaveiros descarregados e criar um protocolo obrigatório de entrega de chaveiros temporários para visitantes.                                            |
| **R4** | **Mitigar** | Executar testes de RSSI (indicador de força de sinal recebido) e implementar uma margem de histerese no algoritmo de decisão para evitar oscilações de zona entre antenas vizinhas.                                       |
| **R5** | **Evitar**  | Restringir a instalação física das Caixas Fixas do MVP a zonas não classificadas (ex.: pontos de encontro, escritórios e rotas externas de passagem), tratando a certificação Ex como recomendação de evolução comercial. |
| **R6** | **Evitar**  | Conectar o painel central diretamente à saída de relé do sistema de alarme de incêndio predial já existente, garantindo disparo automático do "Modo Emergência".                                                          |

_Fonte: Elaboração do Grupo Synthetix (2026)._

</div>

---

#### Oportunidades (Riscos Positivos)

<div align="center">

**Quadro 5 – Oportunidades identificadas no projeto Synthetix**

|   ID   | Oportunidade                                         | Probabilidade  |  Impacto   | Justificativa                                                                                                                                            | Estratégia e Ação                                                                                                       |
| :----: | :--------------------------------------------------- | :------------: | :--------: | :------------------------------------------------------------------------------------------------------------------------------------------------------- | :---------------------------------------------------------------------------------------------------------------------- |
| **O1** | **Check-in automático na portaria via RF/Crachá**    | Alta ($70\%$)  | Muito Alto | A integração do chaveiro com as catracas de acesso resolve a falta de lista diária, preenchendo automaticamente o banco de dados de presentes na planta. | **Explorar:** Desenvolver o módulo de recepção de sinal de RF na entrada principal durante a próxima sprint.            |
| **O2** | **Comunicação mesh via protocolo ESP-NOW**           | Média ($50\%$) |    Alto    | O protocolo ESP-NOW permite comunicação direta rádio-a-rádio entre as Caixas Fixas sem depender de roteadores Wi-Fi ou conexão com a internet.           | **Explorar:** Implementar a topologia mesh nas Caixas Fixas para garantir autonomia total da rede física.               |
| **O3** | **Integração direta com o Alarme de Incêndio (BMS)** | Baixa ($30\%$) |    Alto    | O acionamento automático por relé elimina o fator humano e comuta o Dashboard e as luzes de rota instantaneamente ao soar a sirene.                      | **Melhorar:** Projetar uma entrada digital isolada (optocolada) no painel para recepção do sinal da central da fábrica. |

_Fonte: Elaboração do Grupo Synthetix (2026)._

</div>

---

#### Matriz de Riscos (Distribuição Visual)

<br>

<div align="center">
<sub>Figura X – Matriz de riscos do projeto</sub>

<img src="../assets/MatrizDeRisco.png" width="80%">

<sup>Fonte: elaborado pelos autores com auxílio de inteligência artificial (2026).</sup>

</div>

---

### Síntese e Prioridades do Projeto

A análise da matriz revela que as ameaças de maior severidade do projeto Synthetix referem-se à **infraestrutura e alimentação elétrica na emergência (R1)**, à **gestão da lista inicial de presentes (R2)** e à **rapidez no acionamento do modo de emergência (R6)**.

Para a próxima fase do projeto, as prioridades estratégicas definidas pelo grupo são:

1. **Garantia de Autonomia (R1):** Incorporação de baterias de backup em todas as Caixas Fixas.
2. **Automação da Presença (R2 & O1):** Validação da leitura por RF na portaria para formação dinâmica da lista de colaboradores presentes na planta.
3. **Resiliência de Comunicação (R4 & O2):** Uso do protocolo **ESP-NOW** para assegurar que a troca de informações entre as zonas continue funcionando mesmo se a rede Wi-Fi da fábrica for interrompida.

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

| Categoria | Quantidade | Referência do componente no protótipo/PCI | Código do componente (fabricante) | Valor do componente (R$) |
| --- | ---: | --- | --- | ---: |
| Processamento | 1 | Arduino Uno | Arduino Uno R3 | R$39,54 ([Mercado Livre](https://www.mercadolivre.com.br/cabo-usb-compativel-com-placa-de-desenvolvimento-arduino-uno-r3-atmega328p-ch340/p/MLB44072268?pdp_filters=item_id%3AMLB5229650730&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735125422&matt_product_id=MLB44072268-product&matt_product_partition_id=2495059736147&matt_target_id=pla-2495059736147&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoJRuM1jdBvwQsy-JbDuO2GqZUVevX9I5SgDqMi81aZh_Pusf2a-KQhoC7PwQAvD_BwE)) |
| Sensoriamento | 2 | Sensores ultrassônicos de entrada e saída | HC-SR04 | R$15,00 (unidade); R$30,00 (2 unidades) ([Mercado Livre](https://www.mercadolivre.com.br/modulo-sensor-ultrassonico-distancia-hc-sr04-para-arduino/p/MLB64164978?pdp_filters=item_id%3AMLB5130062737&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735128761&matt_product_id=MLB64164978-product&matt_product_partition_id=2495059736347&matt_target_id=pla-2495059736347&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoIQ9ytYCHxi7QMFA-RU1aROmSXUtXE3xD1biz_vwK9s3dwk-8Ro6oxoCIOoQAvD_BwE)) |
| Interação | 1 | Botão de pressão | Board Push Button Switch (tactile) | R$1,21 (unidade) ([Mercado Livre](https://www.mercadolivre.com.br/conjunto-de-50-botoes-de-pressao-para-placa-de-circuito/p/MLB2052130334?matt_tool=18956390&utm_source=google_shopping&utm_medium=organic&pdp_filters=item_id%3AMLB7635767930&from=gshop)) |
| Sinalização visual | 1 | LED verde | LED difuso 5 mm | R$0,15 ([Eletrogate](https://www.eletrogate.com/led-difuso-5mm-verde?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=22470016551&gbraid=0AAAAADqxjs-J182in_CBPr1nyA54F-LL9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoCaLKeb9vaLT7u49dThE1TEGwTfv0C6_EYGFI6dS3biP6Xoqy1ZgVxoCiEIQAvD_BwE)) |
| Sinalização visual | 1 | LED vermelho | LED difuso 5 mm | R$0,15 ([Eletrogate](https://www.eletrogate.com/led-difuso-5mm-vermelho?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoN-apmwJkkXYYznxTECGwrAfUUdQMOGaQL_4-m8zeFGfzU6AOYhiNxoCqJgQAvD_BwE)) |
| Sinalização sonora | 1 | Buzzer | Buzzer ativo 5V | R$2,90 ([Eletrogate](https://www.eletrogate.com/buzzer-ativo-5v?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoLPBf6mtcZizCQRpZRRLmGNgwewSSuaihP1VIORbIt2h8imNmBty9RoCrG8QAvD_BwE)) |
| Visualização | 1 | Display LCD | LCD 16 × 2 com interface I²C | R$25,55 ([Mercado Livre](https://www.mercadolivre.com.br/display-lcd-16x2-1602-fundo-azul-com-modulo-i2c-soldado/up/MLBU4549779439?pdp_filters=item_id%3AMLB7321088826&from=gshop&matt_tool=56885173&matt_word=&matt_source=google&matt_campaign_id=22090354256&matt_ad_group_id=192555051054&matt_match_type=&matt_network=g&matt_device=c&matt_creative=799032781561&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=119897001&matt_product_id=MLBU4549779439&matt_product_partition_id=2498613880064&matt_target_id=pla-2498613880064&cq_src=google_ads&cq_cmp=22090354256&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354256&gbraid=0AAAAAD93qcAf98DVye3WhOkZqJU1o3eSE&gclid=CjwKCAjwotzWBhBFEiwA1JhPoMgiK21_IFmDbVmbNMgDC3o03ZARpy4oBINxyPna8AsDNp4ISmYalRoCR_MQAvD_BwE)) |
| Condicionamento elétrico | 2 | Resistores | 5V ou 3.3V, 1k Ohm, (1/4W) | R$0,12 (unidade) ([Saravati](https://www.saravati.com.br/resistor-1k-5-1-4w.html?gad_source=1&gad_campaignid=23551463662&gbraid=0AAAAAC2QUl9NJxOJbt89j1o1regZh5Nz1&gclid=CjwKCAjwotzWBhBFEiwA1JhPoG38v08Hq-K_8VKXdxS8REO0qaNgkFziIwVTl9Rc2LXpGSD3o1KboRoCCEkQAvD_BwE)) |
| Montagem | 1 | Protoboard | Protoboard para montagem sem solda | R$8,90 ([Eletrogate](https://www.eletrogate.com/protoboard-400-pontos?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=4&gad_campaignid=20223015315&gbraid=0AAAAADqxjs--_IDti_OP_PomQr4wJeFmq&gclid=CjwKCAjwotzWBhBFEiwA1JhPoPlT3_2SAg4EbLjDVCFA_2Gb0qBCgwXD5npVhSjZdn-yagDte4bg4BoCZoMQAvD_BwE)) |
| Alimentação planejada | 1 | Pilha de lítio tipo moeda, ainda não implementada no protótipo | CR2023, 3 V, não recarregável | R$13,90 ([Mercado Livre](https://lista.mercadolivre.com.br/bateria-maxell-cr2032)) |
| Interconexão | 4 | Jumpers macho-fêmea | Alternativa A: conexão do display LCD I²C; utilizar com 16 jumpers macho-macho | R$1,05 (unidade); R$4,20 (4 unidades) ([Mercado Livre](https://www.mercadolivre.com.br/20pcs-jumper-mxf-20cm--20pcs-jumper-fxf-20cm/up/MLBU2370810037?pdp_filters=item_id%3AMLB4078036044&from=gshop&matt_tool=19390443&matt_word=&matt_source=google&matt_campaign_id=22090354205&matt_ad_group_id=191786774561&matt_match_type=&matt_network=g&matt_device=c&matt_creative=782869962440&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=5458938305&matt_product_id=MLBU2370810037&matt_product_partition_id=2495493043879&matt_target_id=pla-2495493043879&cq_src=google_ads&cq_cmp=22090354205&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090354205&gbraid=0AAAAAD93qcBWh7S0-tQRtyURYUhdok1-w&gclid=CjwKCAjwotzWBhBFEiwA1JhPoO4nhPq-F2KwwBsDI-Hn3A0iwomUAHbI1TRcldDnimZUYjGi7kAF6xoCG5oQAvD_BwE)) |
| Interconexão | 16 ou 20 | Jumpers macho-macho | Alternativa A: 16 unidades com 4 jumpers macho-fêmea; alternativa B: 20 unidades, caso todos os módulos sejam conectados pela protoboard | R$0,42 (unidade); Alternativa A: R$6,72; Alternativa B: R$8,40; ambos em [Mercado Livre](https://www.mercadolivre.com.br/cabo-jumper-mxm-20cm-40-pinos-para-arduino-protoboard/up/MLBU2098535281) |
| **Total estimado do MVP** |  |  |  | **Alternativa A: R$133,46; Alternativa B: R$130,94** |

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

*Liste os RF numerados de forma objetiva e verificável. Cada RF deve poder ser convertido em caso de teste.*

| ID    | Descrição | Prioridade | Status       |
|-------|-----------|------------|--------------|
| RF001 | ...       | Alta       | Implementado |
| RF002 | ...       | Média      | Planejado    |

### 3.3.2. Regras de Negócio (sprint 1, refinar até sprint 5)

_Numere e redija as RN de forma implementável e testável. Toda RN deve ter pelo menos um teste automatizado associado a partir da sprint 3._

| ID   | Descrição | RF associado |
|------|-----------|--------------|
| RN01 | ...       | RF001        |
| RN02 | ...       | RF001        |

### 3.3.3. Requisitos Não Funcionais — 8 Eixos ISO/IEC 25010 (sprints 2 a 5)

_Preencha os 8 eixos. Cada eixo deve ter ao menos um RNF verificável (com métrica, limite ou critério concreto) ou justificativa explícita de ausência. Evolua do conceitual (sprint 2) ao técnico mensurável (sprint 5)._

| Eixo                     | Requisito | Métrica / Critério | Justificativa |
|--------------------------|-----------|--------------------|---------------|
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

| Persona | RF    | RN   | Caso de Teste | Evidência        |
|---------|-------|------|---------------|------------------|
| ...     | RF001 | RN01 | CT02  | print, log, relatório de cobertura |


### 3.3.5. Arquitetura da Solução (sprint 3)

_Vídeo de explicação sobre a arquitetura da solução: (coloque aqui o link do vídeo)_

_Descreva a arquitetura técnica da solução de forma detalhada (visão de arquitetura).

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

Descreva a arquitetura usando um diagrama de blocos similar à visão anterior, porém especificando as tecnologias utilizadas. O diagrama de arquitetura deve:_
- _Mostrar microcontroladores, incluindo descrições de sua função no sistema (por exemplo: "Irá processar o sinal dos sensores a cada X minutos")_
- _Mostrar sensores, incluindo descrição de função e especificações técnicas do tipo de informação que será coletada_
- _Mostrar apresentadores de informação (displays), incluindo descrição de que tipo de informação será apresentada (por exemplo, "Mostrar temperatura dos sensores")_
- _Mostrar atuadores, caso existam na solução, incluindo descrições do que irão acionar (por exemplo, "Ligar motor de irrigação durante x minutos")_
- _Mostrar o broker MQTT e o dashboard que é a interface do usuário_
- _Mostrar ligações entre os elementos (com fio ou sem fio) – incluindo conexões com sensores e atuadores, conexão com WiFi, entre outros._
  _Faça uma tabela dos possíveis componentes utilizados. Todos os componentes devem estar presentes na arquitetura._

| **Componente** | **Descrição** | **Tipo** | 
|----------|----------|----------|
|E.g. ESP32 WROOM 32 Devkit|E.g. Trata-se de um microcontrolador amplamente usado na indústria e em projetos educacionais, que possui interfaces mais amigáveis para conexão de componentes diversos...|E.g. Microcontrolador|
|E.g. sensor XPTO|E.g. Este sensor mede o sinal de XYZ em unidades q/s, e possui tolerância de abcd...|E.g. Sensor|

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

**CT#** | **Bloco** | **Componente de entrada** | **Leitura da entrada** | **Componente de saída** | **Leitura da saída** | **Descrição**
|----------|----------|----------|----------|----------|----------|----------|
|CT01|ex. medidor de umidade relativa do ar|ex. “sensor de umidade XPTO”| < 100 | ex. led amarelo | piscante em intervalo de 1s | quando a umidade está baixa, o led amarelo pisca

### 3.4.2. Protótipo Físico do Projeto (offline) (sprint 2)

_Aqui você deve registrar diversas situações de teste, indicando exemplos de leitura (entrada) e escrita (saída) apresentadas pelo seu sistema físico. Estes registros serão utilizados para testar seus componentes, portanto, descreva várias situações, incluindo não apenas casos de sucesso, mas também de possíveis falhas nas leituras de entradas e saídas. <br>
Siga as nomenclaturas e convenções já utilizadas anteriormente, e não se esqueça dos alinhamentos de negócios e experiência do usuário para pensar em situações representativas. Inclua figuras do protótipo físico e descrições dos testes realizados para ilustrar o funcionamento do protótipo. Continue a numeração de CT a partir da tabela anterior. A tabela a seguir serve como exemplo._

**CT#** | **Descrição** | **Pré-condição** | **Procedimento de teste** | **Pós-condição/Resultado esperado** | **Observações** (opcional)
|----------|----------|----------|----------|----------|----------|
|CT11|ex. Verificação de conexão de rede bem-sucedida. | ex. O dispositivo está desligado.| ex. Ligue o dispositivo, aguarde alguns segundos e verifique se ele estabelece uma conexão bem-sucedida com a rede Wi-Fi. | ex. O LED verde indicador de conexão acende de forma contínua, sinalizando uma conexão bem-sucedida à rede. |

### 3.4.3. Protótipo do Projeto com MQTT e I2C (sprint 3)	

_Aqui você deve registrar diversas situações de uso de seu sistema como um todo, indicando exemplos de ação do usuário e resposta do sistema, apontando como o ambiente deverá estar configurado para receber a ação e produzir a resposta. Estes registros serão utilizados para testar seu sistema, portanto, descreva várias situações, incluindo não apenas casos de sucesso, mas também de falha nos comportamentos do sistema. <br>
Siga as nomenclaturas e convenções já utilizadas anteriormente, e não se esqueça dos alinhamentos de negócios e experiência do usuário para pensar em situações representativas. Inclua figuras do protótipo físico e dashboards, além de descrições dos testes realizados para ilustrar o funcionamento do protótipo. Continue a numeração de CT a partir da tabela anterior. A tabela a seguir serve como exemplo._

**CT#** | **Configuração do ambiente** | **Ação do usuário** | **Resposta esperada do sistema** 
|----------|----------|----------|----------|
|CT21|ex. precisa de um computador conectado na interface, dois ou mais dispositivos que simulem o posicionamento de um item X no espaço físico etc. | ex. usuário logado busca a localização do item X, que está ativo e operando normalmente | ex. interface do sistema acessa os dados da última localização registrada do item X e apresenta, constando local e horário de última atualização | 

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

BRASIL. Lei nº 14.026, de 15 de julho de 2020. Atualiza o marco legal do saneamento básico. Brasília, DF: Presidência da República, 2020. Disponível em: https://www.planalto.gov.br/ccivil_03/_ato2019-2022/2020/lei/l14026.htm. Acesso em: 15 out. 2026.

BRASIL. Ministério do Trabalho e Emprego. Normas Regulamentadoras (NR). Brasília, DF: Ministério do Trabalho e Emprego. Disponível em: https://www.gov.br/trabalho-e-emprego/pt-br/assuntos/inspecao-do-trabalho/seguranca-e-saude-no-trabalho/ctpp-nrs/normas-regulamentadoras-nrs. Acesso em: 15 out. 2026.

DABROWSKA, Magda. Emergency mustering solution. IoT Now, [s. l.], 12 jan. 2024. Disponível em: https://iot-now.com/2024/01/12/141842-emergency-mustering-solution/. Acesso em: 20 out. 2026.

ELETROGATE. Buzzer ativo 5 V. Disponível em: https://www.eletrogate.com/buzzer-ativo-5v?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoLPBf6mtcZizCQRpZRRLmGNgwewSSuaihP1VIORbIt2h8imNmBty9RoCrG8QAvD_BwE. Acesso em: 20 out. 2026.

MERCADO LIVRE. Cabo USB compatível com placa de desenvolvimento Arduino Uno R3 ATmega328P CH340. Disponível em: https://www.mercadolivre.com.br/cabo-usb-compativel-com-placa-de-desenvolvimento-arduino-uno-r3-atmega328p-ch340/p/MLB44072268?pdp_filters=item_id%3AMLB5229650730&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735125422&matt_product_id=MLB44072268-product&matt_product_partition_id=2495059736147&matt_target_id=pla-2495059736147&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoJRuM1jdBvwQsy-JbDuO2GqZUVevX9I5SgDqMi81aZh_Pusf2a-KQhoC7PwQAvD_BwE. Acesso em: 20 out. 2026.

MERCADO LIVRE. Módulo sensor ultrassônico de distância HC-SR04 para Arduino. Disponível em: https://www.mercadolivre.com.br/modulo-sensor-ultrassonico-distancia-hc-sr04-para-arduino/p/MLB64164978?pdp_filters=item_id%3AMLB5130062737&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735128761&matt_product_id=MLB64164978-product&matt_product_partition_id=2495059736347&matt_target_id=pla-2495059736347&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoIQ9ytYCHxi7QMFA-RU1aROmSXUtXE3xD1biz_vwK9s3dwk-8Ro6oxoCIOoQAvD_BwE. Acesso em: 20 out. 2026.

MERCADO LIVRE. Conjunto de 50 botões de pressão para placa de circuito. Disponível em: https://www.mercadolivre.com.br/conjunto-de-50-botoes-de-pressao-para-placa-de-circuito/p/MLB2052130334?matt_tool=18956390&utm_source=google_shopping&utm_medium=organic&pdp_filters=item_id%3AMLB7635767930&from=gshop. Acesso em: 20 out. 2026.

ELETROGATE. LED difuso 5 mm verde. Disponível em: https://www.eletrogate.com/led-difuso-5mm-verde?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=22470016551&gbraid=0AAAAADqxjs-J182in_CBPr1nyA54F-LL9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoCaLKeb9vaLT7u49dThE1TEGwTfv0C6_EYGFI6dS3biP6Xoqy1ZgVxoCiEIQAvD_BwE. Acesso em: 20 out. 2026.

ELETROGATE. LED difuso 5 mm vermelho. Disponível em: https://www.eletrogate.com/led-difuso-5mm-vermelho?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoN-apmwJkkXYYznxTECGwrAfUUdQMOGaQL_4-m8zeFGfzU6AOYhiNxoCqJgQAvD_BwE. Acesso em: 20 out. 2026.

ELETROGATE. Protoboard 400 pontos. Disponível em: https://www.eletrogate.com/protoboard-400-pontos?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=4&gad_campaignid=20223015315&gbraid=0AAAAADqxjs--_IDti_OP_PomQr4wJeFmq&gclid=CjwKCAjwotzWBhBFEiwA1JhPoPlT3_2SAg4EbLjDVCFA_2Gb0qBCgwXD5npVhSjZdn-yagDte4bg4BoCZoMQAvD_BwE. Acesso em: 20 out. 2026.

ESTADÃO CONTEÚDO. Unipar tem 2025 desafiado pelo ciclo petroquímico, com quarto trimestre mais crítico. UOL Economia, 19 mar. 2026. Disponível em: https://economia.uol.com.br/noticias/estadao-conteudo/2026/03/19/unipar-tem-2025-desafiado-pelo-ciclo-petroquimico-com-quarto-trimestre-mais-critico.htm. Acesso em: 15 out. 2026.

INTELI. Projeto parceiro: Unipar — Sistema de IoT para Monitoramento, Orientação e Confirmação de Evacuação em Emergências Industriais. 2026. Disponível em: https://docs.google.com/document/d/1yKX2hho7oz5-i71Sfl6xBaFho90tpnsR/edit?usp=drive_link&ouid=118360090804793164161&rtpof=true&sd=true. Acesso em: 15 out. 2026. Material de apoio correspondente ao Módulo 4 do Ciclo Comum de Graduação do Instituto de Tecnologia e Liderança, 2026.

MERCADO LIVRE. Cabo jumper macho-macho 20 cm para Arduino e protoboard. Disponível em: https://www.mercadolivre.com.br/cabo-jumper-mxm-20cm-40-pinos-para-arduino-protoboard/up/MLBU2098535281. Acesso em: 20 out. 2026.

UNIPAR. Projeto parceiro Unipar: sistema de IoT para monitoramento, orientação e confirmação de evacuação em emergências industriais. São Paulo: Inteli, 2026. Termo de Abertura do Projeto (TAPI), Turma 25, Módulo 4. Documento não publicado.

MERCADO LIVRE. Bateria Maxell CR2032 de lítio, 3 V, uma unidade. Disponível em: https://lista.mercadolivre.com.br/bateria-maxell-cr2032. Acesso em: 22 out. 2026.

MERCADO LIVRE. Display LCD 16 × 2 1602 com módulo I²C soldado. Disponível em: https://www.mercadolivre.com.br/display-lcd-16x2-1602-fundo-azul-com-modulo-i2c-soldado/up/MLBU4549779439?pdp_filters=item_id%3AMLB7321088826&from=gshop&matt_tool=56885173&matt_word=&matt_source=google&matt_campaign_id=22090354256&matt_ad_group_id=192555051054&matt_match_type=&matt_network=g&matt_device=c&matt_creative=799032781561&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=119897001&matt_product_id=MLBU4549779439&matt_product_partition_id=2498613880064&matt_target_id=pla-2498613880064&cq_src=google_ads&cq_cmp=22090354256&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354256&gbraid=0AAAAAD93qcAf98DVye3WhOkZqJU1o3eSE&gclid=CjwKCAjwotzWBhBFEiwA1JhPoMgiK21_IFmDbVmbNMgDC3o03ZARpy4oBINxyPna8AsDNp4ISmYalRoCR_MQAvD_BwE. Acesso em: 20 out. 2026.

MERCADO LIVRE. Kit de cabos jumper macho-fêmea 20 cm. Disponível em: https://www.mercadolivre.com.br/20pcs-jumper-mxf-20cm--20pcs-jumper-fxf-20cm/up/MLBU2370810037?pdp_filters=item_id%3AMLB4078036044&from=gshop&matt_tool=19390443&matt_word=&matt_source=google&matt_campaign_id=22090354205&matt_ad_group_id=191786774561&matt_match_type=&matt_network=g&matt_device=c&matt_creative=782869962440&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=5458938305&matt_product_id=MLBU2370810037&matt_product_partition_id=2495493043879&matt_target_id=pla-2495493043879&cq_src=google_ads&cq_cmp=22090354205&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090354205&gbraid=0AAAAAD93qcBWh7S0-tQRtyURYUhdok1-w&gclid=CjwKCAjwotzWBhBFEiwA1JhPoO4nhPq-F2KwwBsDI-Hn3A0iwomUAHbI1TRcldDnimZUYjGi7kAF6xoCG5oQAvD_BwE. Acesso em: 20 out. 2026.

SARAVATI. Resistor 1 kΩ 5% 1/4 W. Disponível em: https://www.saravati.com.br/resistor-1k-5-1-4w.html?gad_source=1&gad_campaignid=23551463662&gbraid=0AAAAAC2QUl9NJxOJbt89j1o1regZh5Nz1&gclid=CjwKCAjwotzWBhBFEiwA1JhPoG38v08Hq-K_8VKXdxS8REO0qaNgkFziIwVTl9Rc2LXpGSD3o1KboRoCCEkQAvD_BwE. Acesso em: 20 out. 2026.

UNIPAR. Manual da marca. 2022. Disponível em: https://drive.google.com/file/d/1_XkquJbTrDnP6CyCtCTjtASRwI4qLL2P/view?usp=sharing. Acesso em: 15 out. 2026. Material institucional da Unipar utilizado como referência no Módulo 4 do Ciclo Comum de Graduação do Instituto de Tecnologia e Liderança, 2026.

UNIPAR. Perfil corporativo. Relações com Investidores. Disponível em: https://ri.unipar.com/sobre-a-unipar/perfil-corporativo/. Acesso em: 15 out. 2026.

UNIPAR. Produtos: cloro. Disponível em: https://unipar.com/produtos/cloro. Acesso em: 15 out. 2026.

UNIPAR. Relatório de sustentabilidade. Relações com Investidores, 2025. Disponível em: https://ri.unipar.com/sustentabilidade/relatorio-de-sustentabilidade/. Acesso em: 15 out. 2026.

UNIPAR. Sobre a Unipar. Disponível em: https://unipar.com/sobre/. Acesso em: 15 out. 2026.

UNIPAR CARBOCLORO. Release de resultados 2T23. São Paulo: Unipar Carbocloro, 2023. Disponível em: https://static.poder360.com.br/2023/08/resultados-unipar-2T23.pdf. Acesso em: 19 out. 2026.

UNIPAR CARBOCLORO. Release de resultados 4T25. São Paulo: Unipar Carbocloro, 2026. Disponível em: https://api.mziq.com/mzfilemanager/v2/d/3c0b3516-7dff-44a5-946f-20e7ec87dfa0/2d4c9ca6-1e44-6e77-e845-7392f3c2c4b0?origin=2. Acesso em: 19 out. 2026.

UNIPAR CARBOCLORO S.A. Informações trimestrais (ITR): 31 de março de 2025. 2025. Disponível em: https://api.mziq.com/mzfilemanager/v2/d/3c0b3516-7dff-44a5-946f-20e7ec87dfa0/605e2a07-9fb6-eb47-ecda-0350c5df8db7?origin=1. Acesso em: 15 out. 2026.

UNIPAR Carbocloro inaugura sua 1ª unidade no Nordeste. Movimento Econômico, [s. l.], 4 abr. 2025. Disponível em: https://movimentoeconomico.com.br/estados/bahia/2025/04/04/unipar-carbocloro-inaugura-sua-1a-unidade-no-nordeste/. Acesso em: 19 out. 2026.

VAZAMENTO de gás em porto deixa 13 mortos e mais de 250 feridos na Jordânia; veja vídeo. Folha de Pernambuco, Recife, jun. 2022. Disponível em: https://www.folhape.com.br/noticias/vazamento-de-gas-em-porto-deixa-13-mortos-na-jordania/231857/. Acesso em: 20 out. 2026.

VEJA o impacto gerado pela Unipar em 55 anos de história. Exame, São Paulo, 28 maio 2024. Disponível em: https://exame.com/esg/impacto-unipar-em-55-anos-de-historia/. Acesso em: 19 out. 2026.

WIRELESS, paperless tracking keeps employees safer. Automation World, [s. l.], [20--]. Disponível em: https://www.automationworld.com/article/technologies/sensors-process/wireless-paperless-tracking-keeps-employees-safer. Acesso em: 20 out. 2026.

[1] BRASIL. Lei nº 13.709, de 14 de agosto de 2018: Lei Geral de Proteção de Dados Pessoais (LGPD). Brasília, DF: Presidência da República, 2018. Disponível em: https://www.planalto.gov.br/ccivil_03/_ato2015-2018/2018/lei/l13709compilado.htm. Acesso em: 22 out. 2026.

[2] AGÊNCIA NACIONAL DE PROTEÇÃO DE DADOS. Guia orientativo para definições dos agentes de tratamento de dados pessoais e do encarregado. Brasília, DF: ANPD, 2022. Disponível em: https://www.gov.br/anpd/pt-br/centrais-de-conteudo/materiais-educativos-e-publicacoes/guia-orientativo-para-definicoes-dos-agentes-de-tratamento-de-dados-pessoais-e-do-encarregado. Acesso em: 22 out. 2026.

[3] UNIPAR. Aviso de Privacidade. Disponível em: https://unipar.com/aviso-de-privacidade. Acesso em: 22 out. 2026.

[4] AGÊNCIA NACIONAL DE PROTEÇÃO DE DADOS. Guia orientativo sobre segurança da informação para agentes de tratamento de pequeno porte. Brasília, DF: ANPD, 2021. Disponível em: https://www.gov.br/anpd/pt-br/centrais-de-conteudo/materiais-educativos-e-publicacoes/guia-orientativo-sobre-seguranca-da-informacao-para-agentes-de-tratamento-de-pequeno-porte. Acesso em: 22 out. 2026.

[5] AGÊNCIA NACIONAL DE PROTEÇÃO DE DADOS. Direito dos titulares. Disponível em: https://www.gov.br/anpd/pt-br/assuntos/titular-de-dados/direito-dos-titulares. Acesso em: 22 out. 2026.
