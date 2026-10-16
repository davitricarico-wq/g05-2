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


# <a name="c1"></a>1. Introdução

A Unipar é uma empresa brasileira do setor químico e petroquímico, com mais de 55 anos de operação, que produz cloro, soda e PVC (VEJA..., 2024). A empresa tem mais de 1.400 colaboradores diretos (VEJA..., 2024) e fechou 2025 com receita líquida consolidada de R$ 5,1 bilhões (UNIPAR CARBOCLORO, 2026). Suas fábricas ficam em Cubatão (SP), Santo André (SP), Bahía Blanca, na Argentina (VEJA..., 2024), e Camaçari (BA), inaugurada em 2025 (UNIPAR..., 2025). A Unipar é líder na produção de cloro e soda e a segunda maior produtora de PVC da América do Sul (UNIPAR..., 2025).

Este projeto é feito com a fábrica de Cubatão, a unidade com a maior capacidade de produção de cloro da empresa (UNIPAR CARBOCLORO, 2023), onde trabalham cerca de 355 funcionários diretos e cerca de 400 de empresas parceiras (informação verbal)[^1]. Em uma emergência, como um vazamento de cloro, essas pessoas precisam sair da área rápido e chegar aos pontos de encontro. Hoje, esse processo é quase todo manual: o alarme é acionado por um operador, a empresa só sabe quem entrou e saiu pela portaria, sem saber onde cada pessoa está dentro da planta, e a confirmação de quem chegou ao ponto de encontro é feita pelos líderes, por chamada. Além disso, durante a emergência, as catracas são liberadas para dar vazão e deixam de registrar quem passa. Com isso, a evacuação fica mais lenta e é difícil saber, rápido, quem ainda não chegou (informação verbal)[^1].

[^1]: Informação fornecida por representantes da Unipar na reunião de kickoff do projeto, em 16 de outubro de 2026.

## 1.1 Objetivos

Os objetivos abaixo foram definidos a partir do Termo de Abertura do Projeto (UNIPAR, 2026) e da reunião de kickoff com a Unipar (informação verbal)[^1].

**Objetivo geral**

Aumentar a rapidez, a precisão e a rastreabilidade da evacuação da fábrica de Cubatão em situações de emergência, fortalecendo a gestão de emergências e a proteção das pessoas que estão na planta.

**Objetivos específicos**

- Saber quantas pessoas estão em cada área da planta e quem são, sem precisar da posição exata delas dentro de cada área;
- Continuar acompanhando quantas pessoas ainda estão em cada área durante a emergência, quando as catracas e portas são liberadas;
- Confirmar a chegada das pessoas aos pontos de encontro sem depender de listas e da chamada feita pelos líderes;
- Identificar quem ainda não chegou aos pontos de encontro em até 10 minutos após o alarme, prazo a partir do qual a Unipar considera a pessoa não identificada um caso crítico;
- Avisar a sala de controle e as equipes de resposta sobre o andamento da evacuação, dando mais agilidade às decisões.

## 1.2 Proposta da solução

A proposta usa o crachá de acesso dos funcionários e as catracas e portas entre as áreas da planta para saber quem está em cada área, inclusive durante uma emergência. A planta é dividida em áreas, e cada passagem entre elas tem uma catraca ou porta liberada pelo crachá.

No dia a dia, toda vez que alguém passa o crachá, o sistema registra em qual área essa pessoa entrou. Assim, ele sabe quantas pessoas estão em cada área e quem são, sem precisar da posição exata delas dentro de cada espaço.

Quando o alarme de emergência toca, as catracas e portas são liberadas para dar vazão, e as pessoas deixam de passar o crachá. Para não perder a contagem nesse momento, a proposta do grupo sugere um sensor que é ativado junto com o alarme, posicionado estratégicamente nas passagens principais, e conta as pessoas que atravessam, mesmo quando muitas passam ao mesmo tempo. Como o sistema já sabe quem estava em cada área antes do alarme, ele usa essa contagem para acompanhar quantas pessoas já saíram de cada área, quantas ainda faltam sair e quantas chegaram aos pontos de encontro.

Essas informações vão para um painel na sala de controle, que mostra quantas pessoas ainda estão em cada área, quem estava presente nelas antes do alarme e quantas já chegaram aos pontos de encontro. Com isso, a equipe de emergência deixa de depender de listas e da chamada para saber quem pode ainda estar na planta e consegue agir dentro do prazo de 10 minutos definido pela Unipar.

> Neste momento (Sprint 1), é certo afirmar que a proposta da solução engloba apenas a área de confirmação, sendo representada pela contagem de pessoas de maneira automatizada. Não foram definidas extensões para a solução que englobam os objetivos das áreas de monitoramento e orientação. A primeira proposta de solução simples foi adotada pela equipe para que, nas próximas sprints, fosse possível expandir a complexidade com mais precisão e evitar que houvesse retrabalho.

## 1.3 Justificativa

Em uma fábrica que trabalha com cloro, a rapidez da evacuação pode salvar vidas. Em 2022, um vazamento de cloro no porto de Aqaba, na Jordânia, matou 13 pessoas e deixou mais de 250 feridos (VAZAMENTO..., 2022). Na Unipar, quem não é identificado em até 10 minutos após o alarme já é tratado como caso crítico (informação verbal)[^1], e hoje essa confirmação ainda depende de listas e chamada. A proposta mantém a contagem funcionando justamente no momento em que ela para hoje, quando as catracas são liberadas na emergência, e mostra à sala de controle quantas pessoas ainda estão em cada área e quem estava nelas. Com isso, a proposta busca entregar os benefícios que a Unipar espera do projeto: visibilidade, rastreabilidade e mais agilidade na decisão dos gestores de SSMA (UNIPAR, 2026). Esse tipo de ganho já aparece em outras indústrias: na Ferrero, a contagem com crachás eletrônicos ficou 70% mais rápida que o processo manual (DABROWSKA, 2024).

A solução se diferencia em dois pontos. O primeiro é aproveitar o crachá que os funcionários já usam para entrar na planta, sem um dispositivo novo para carregar. No kickoff, a Unipar destacou que um equipamento que atrapalhe o uso do EPI ou seja desconfortável tende a ser deixado de lado pelas pessoas (informação verbal)[^1]. O segundo é trabalhar por áreas: o sistema mostra em que área cada pessoa estava, sem rastrear a posição exata, o que respeita a restrição do TAPI de não tratar localização precisa em ambientes internos (UNIPAR, 2026). Isso coloca a proposta entre as soluções que só contam as pessoas no ponto de encontro, como a da Ferrero (DABROWSKA, 2024), e as que rastreiam a localização dos funcionários na planta, como a usada pela Chevron Oronite em Singapura (WIRELESS..., [20--]). Como potencial, o mesmo modelo pode ser levado para as outras fábricas da Unipar no Brasil e na Argentina, que o TAPI já aponta como beneficiadas (UNIPAR, 2026), e servir de base para etapas futuras discutidas no kickoff, como o uso de câmeras e drones (informação verbal)[^1].

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

A análise SWOT (ou FOFA) é uma ferramenta de planejamento estratégico que avalia quatro elementos: forças (fatores internos positivos), fraquezas (fatores internos negativos), oportunidades (fatores externos positivos) e ameaças (fatores externos negativos). Com base nisso, realizou-se a análise SWOT da Unipar, considerando suas características organizacionais, sua atuação no mercado e os fatores internos e externos que podem influenciar seu desempenho e sua competitividade, conforme apresentado na figura abaixo.

### 3.1.3. Descrição da Solução a ser Desenvolvida (sprint 1)	

#### 3.1.3.1 Qual é o problema a ser resolvido

#### 3.1.3.2 Qual a solução proposta (visão de negócios)

#### 3.1.3.3 Como a solução proposta deverá ser utilizada

#### 3.1.3.4 Quais os benefícios trazidos pela solução proposta

#### 3.1.3.5 Qual será o critério de sucesso e qual medida será utilizada para o avaliar
	
### 3.1.4. Value Proposition Canvas (sprint 1)	

_O Canvas da proposta de valor deve ser feito considerando a solução que vocês estão desenvolvendo. Usar o template disponível no drive da turma._     

### 3.1.5. Matriz de Riscos (sprint 1)	

_A Matriz de Risco deve ser desenhada considerando o projeto que os alunos estão criando. Deve ser entregue no template disponível no drive da turma. Os alunos devem enumerar os riscos, distribuí-los na matriz e justificar suas decisões._     

### 3.1.6. Política de Privacidade de acordo com a LGPD (sprint 1)	

_A Política de privacidade para o projeto de acordo com a LGPD deve ser escrita considerando o projeto que os alunos estão criando. Os pontos a seguir precisam ser apresentados. O aluno pode utilizar  o Gerador de Política de Privacidade (https://www.nuvemshop.com.br/ferramentas/gerador-politica-de-privacidade), criado pela Nuvemshop e, de acordo com a empresa, já adaptado a LGPD para ter uma prévia e ajustar de acordo com o seu projeto._

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

Na primeira sprint, o grupo concentrou o escopo do protótipo na **contabilização quantitativa de passagens** nos acessos aos Pontos de Encontro durante emergências ou simulados de vazamento de cloro gasoso na unidade de Cubatão (SP). No recorte do Produto Mínimo Viável (MVP), a detecção de passagem registra exclusivamente o evento físico de travessia pelo acesso monitorado, sem identificar nominalmente a pessoa e sem realizar localização contínua em ambiente interno (em conformidade com a restrição do Termo de Abertura do Projeto — TAPI). No protótipo inicial validado em simulador na Sprint 1 (seção 3.4.1), utiliza-se um sensor ultrassônico HC-SR04 acoplado a um microcontrolador Arduino Uno R3 para contagem local unidirecional em fila única; para a montagem física do MVP prevista na Lista de Materiais (seção 3.1.7), especifica-se o uso de dois sensores HC-SR04 por ponto de acesso a fim de distinguir o sentido de passagem (entrada e saída). A contabilização nas duas portarias (P1 e P2), a conectividade de rede dos nós de sensoriamento e o painel centralizado de acompanhamento constituem a evolução planejada para as próximas sprints. A instalação adicional de sensores em passagens entre áreas internas da planta permanece fora do escopo desta versão do MVP e depende de validação futura com a Unipar.

Para a realização do balanço de evacuação, considera-se **B** a **população de referência** presente na planta no instante do acionamento do alarme, obtida a partir do saldo operacional de entradas e saídas das Portarias P1 e P2 naquele momento (valor que permanece congelado como referência durante o evento, mas que está sujeito a eventuais inconsistências prévias do controle de acesso). Define-se como **A** o total acumulado de **passagens contabilizadas** (pessoas estimadas) nas entradas dos Pontos de Encontro ativos desde o disparo do alarme. A diferença **D = B − A** estima a quantidade de pessoas ainda não contabilizadas nos Pontos de Encontro, desde que os dados dos dispositivos e da base de referência estejam íntegros. Ressalta-se que essa comparação é estritamente numérica e anônima: o cálculo de **D** não identifica nominalmente quem falta nem informa o setor interno onde cada pessoa está, e o atingimento de **D = 0** (**A = B**) representa apenas **convergência numérica**, não substituindo a conferência complementar nem a decisão final da equipe de Saúde, Segurança e Meio Ambiente (SSMA). Além disso, o sistema proposto não realiza detecção química automática de cloro; o evento de emergência é iniciado por acionamento humano ou integração com o alarme existente da planta.

Os atores e perfis operacionais referenciados nos requisitos funcionais e nas regras de negócio são padronizados conforme o mapeamento de stakeholders e personas da seção 3.2.1:
- **A01 — Gestor de SSMA | Público principal — proto-persona Tuco Salamanca:** acompanha as informações consolidadas do balanço de evacuação, coordena a conferência complementar com as equipes em campo e utiliza os dados disponíveis para apoiar as decisões sobre resposta à emergência e encerramento do evento. Suas necessidades orientam os requisitos de visualização de pendências numéricas, clareza das informações e rastreabilidade dos registros.
- **A02 — Brigadistas / Equipe de Emergência | Público secundário — sem proto-persona elaborada:** orientam a evacuação, auxiliam os colaboradores, verificam os Pontos de Encontro e executam as ações de busca e salvamento previstas nos procedimentos da unidade. Participam da conferência complementar e da comunicação de informações de campo à gestão da emergência.
- **A03 — Técnico de Operação / Colaborador | Público principal — proto-persona Gustavo Fring:** representa os funcionários e colaboradores que precisam receber o alerta, seguir as orientações de evacuação, obter apoio quando necessário e ser contabilizados no Ponto de Encontro. A equipe adotou um técnico de operação como personagem para aprofundar esse perfil, representando as necessidades comuns de evacuação dos demais colaboradores. No MVP, sua interação com a contagem ocorre pela passagem pelo acesso monitorado, sem identificação nominal. O acionamento manual do alarme, quando aplicável, segue os procedimentos da unidade.
- **A04 — Responsável por Infraestrutura e TI | Público secundário — sem proto-persona elaborada:** atua na configuração e identificação dos dispositivos, na parametrização dos locais monitorados e no suporte à conectividade e à integração da solução. Suas atribuições são consideradas nos requisitos de configuração, manutenção e acompanhamento do estado dos dispositivos.
- **A05 — Operador do Centro de Controle Operacional (CCO) | Público principal — proto-persona Maria Schrader:** acompanha indicadores e alarmes operacionais, recebe relatos de campo, comunica ocorrências e executa as ações atribuídas ao CCO nos procedimentos da unidade. Suas necessidades orientam os requisitos de acompanhamento do evento, consulta ao painel e acesso a informações atualizadas para apoiar a comunicação com o SSMA e as equipes responsáveis.
**Quadro 1 — Requisitos funcionais do sistema de apoio à contagem e balanço de evacuação.**

| ID | Nome | Descrição verificável | Tipo | Prioridade | Atores | Origem | Situação |
| --- | --- | --- | --- | --- | --- | --- | --- |
| RF001 | Contagem local de passagens no Ponto de Encontro | Quando o modo de monitoramento estiver ativo, o dispositivo local (Arduino Uno R3 com sensor ultrassônico HC-SR04) deve detectar a presença de uma pessoa atravessando o acesso em distância inferior a 200 cm, incrementar em uma unidade o contador local, atualizar imediatamente o total no visor LCD 16x2 I2C (`Total: X`) e emitir um pulso sonoro de 100 ms no buzzer ativo. | Sensoriamento | Alta | A01, A02, A03 | Seção 1.2; Seção 3.1.3; BOM 3.1.7; Protótipo 3.4.1 | Simulado no Wokwi (Sprint 1); validação física planejada |
| RF002 | Identificação e configuração de função dos dispositivos | A solução integrada deve associar a cada nó de sensoriamento um identificador único (`device_id`), o local físico monitorado (Portaria P1, Portaria P2 ou Ponto de Encontro específico) e a regra direcional dos sensores (incremento de entrada ou decremento/descarte de saída a partir do par de sensores ultrassônicos). | Configuração | Alta | A04 | Seção 3.1.3; BOM 3.1.7; RN03 | Planejado |
| RF003 | Consolidação da população de referência nas portarias | A solução integrada deve contabilizar as entradas e subtrair as saídas registradas nas Portarias P1 e P2 durante a operação de rotina para manter atualizado o saldo estimado de pessoas presentes no interior da planta, sem rastrear a divisão por setores internos. | Processamento | Alta | A01, A04, A05 | Kickoff Unipar; Seção 1.2; Seção 3.1.3.2; RN02 | Planejado |
| RF004 | Abertura do evento de emergência e congelamento de B | Ao receber o comando de início de emergência ou simulado de vazamento de cloro, a solução deve registrar o carimbo de tempo inicial (`t = 0`), habilitar os Pontos de Encontro designados para a ocorrência, congelar o saldo corrente das Portarias P1 e P2 como a população de referência **B** e iniciar a contagem regressiva do prazo interno de 10 minutos definido pela SSMA da Unipar. | Controle | Alta | A01, A03, A05 | Kickoff Unipar; Seção 1.1; Seção 3.1.3.3; RN01; RN02 | Planejado |
| RF005 | Totalização anônima de passagens nos Pontos de Encontro (A) | Enquanto houver um evento de emergência ativo, a solução deve somar na variável **A** todas as passagens válidas de entrada registradas pelos dispositivos dos Pontos de Encontro ativos a partir do instante do alarme, tratando cada leitura de forma estritamente numérica e anônima (sem associação a crachá, nome, vínculo ou setor). | Processamento | Alta | A01, A03, A05 | TAPI Unipar; Seção 3.1.3.2; Seção 3.1.6 (LGPD); RN04; RN09 | Planejado |
| RF006 | Cálculo dinâmico e classificação do balanço de evacuação | A solução deve calcular continuamente o saldo estimado de pendentes pela fórmula **D = B − A** e exibir conjuntamente **B**, **A**, **D** e o tempo decorrido desde o alarme, classificando explicitamente três estados operacionais: (i) pendência numérica (**D > 0**), (ii) convergência numérica sujeita à conferência da SSMA (**D = 0**, isto é, **A = B**) e (iii) inconsistência por sobrecontagem (**A > B**, isto é, **D < 0**). | Processamento / Consulta | Alta | A01, A02, A05 | Seção 1.1; Seção 3.1.3.2; RN05; RN07; RN08 | Planejado |
| RF007 | Painel centralizado de acompanhamento (Dashboard CCO/SSMA) | O painel de supervisão deve apresentar em tempo real os indicadores consolidados (**B**, **A**, **D** e cronômetro de 10 minutos), a evolução temporal das passagens contabilizadas por Ponto de Encontro, o estado de conectividade de cada dispositivo e o horário da última atualização recebida. | Visualização | Alta | A01, A02, A05 | TAPI Unipar; Seção 3.1.3.2; RN05; RN09 | Planejado |

### 3.3.2. Regras de Negócio (sprint 1, refinar até sprint 5)

*Numere e redija as RN de forma implementável e testável. Toda RN deve ter pelo menos um teste automatizado associado a partir da sprint 3.*

| ID   | Descrição | RF associado |
|------|-----------|--------------|
| RN01 | ...       | RF001        |
| RN02 | ...       | RF001        |

### 3.3.3. Requisitos Não Funcionais — 8 Eixos ISO/IEC 25010 (sprints 2 a 5)

*Preencha os 8 eixos. Cada eixo deve ter ao menos um RNF verificável (com métrica, limite ou critério concreto) ou justificativa explícita de ausência. Evolua do conceitual (sprint 2) ao técnico mensurável (sprint 5).*

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

O diagrama de arquitetura deve:_
- _Mostrar microcontroladores, incluindo descrições de sua função no sistema (por exemplo: "Irá processar o sinal dos sensores a cada X minutos")_
- _Mostrar sensores, incluindo descrição de função e especificações técnicas do tipo de informação que será coletada_
- _Mostrar apresentadores de informação (displays), incluindo descrição de que tipo de informação será apresentada (por exemplo, "Mostrar temperatura dos sensores")_
- _Mostrar atuadores, caso existam na solução, incluindo descrições do que irão acionar (por exemplo, "Ligar motor de irrigação durante x minutos")_
- _Mostrar o broker MQTT e o dashboard que é a interface do usuário_
- _Mostrar ligações entre os elementos (com fio ou sem fio) – incluindo conexões com sensores e atuadores, conexão com WiFi, entre outros_


### 3.3.6. Arquitetura do Protótipo(sprint 4)	

_Vídeo de explicação sobre a arquitetura do protótipo físico: (coloque aqui o link do vídeo)_

_Descreva as tecnologias utilizadas de forma detalhada (visão de tecnologia).

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

_Descreva a revisão da arquitetura técnica da solução de forma detalhada (visão de arquitetura). <br>

Justifique como a arquitetura suporta os requisitos funcionais e não funcionais. <br>

A revisão deverá incluir comentários sobre cada ponto levantado, mostrando como os ajustes foram realizados, além da descrição da arquitetura revisada._


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

DABROWSKA, Magda. Emergency mustering solution. *IoT Now*, [s. l.], 12 jan. 2024. Disponível em: https://iot-now.com/2024/01/12/141842-emergency-mustering-solution/. Acesso em: 20 out. 2026.

ELETROGATE. *Buzzer ativo 5 V*. Disponível em: <https://www.eletrogate.com/buzzer-ativo-5v?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoLPBf6mtcZizCQRpZRRLmGNgwewSSuaihP1VIORbIt2h8imNmBty9RoCrG8QAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. *LED difuso 5 mm verde*. Disponível em: <https://www.eletrogate.com/led-difuso-5mm-verde?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=22470016551&gbraid=0AAAAADqxjs-J182in_CBPr1nyA54F-LL9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoCaLKeb9vaLT7u49dThE1TEGwTfv0C6_EYGFI6dS3biP6Xoqy1ZgVxoCiEIQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. *LED difuso 5 mm vermelho*. Disponível em: <https://www.eletrogate.com/led-difuso-5mm-vermelho?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoN-apmwJkkXYYznxTECGwrAfUUdQMOGaQL_4-m8zeFGfzU6AOYhiNxoCqJgQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. *Protoboard 400 pontos*. Disponível em: <https://www.eletrogate.com/protoboard-400-pontos?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=4&gad_campaignid=20223015315&gbraid=0AAAAADqxjs--_IDti_OP_PomQr4wJeFmq&gclid=CjwKCAjwotzWBhBFEiwA1JhPoPlT3_2SAg4EbLjDVCFA_2Gb0qBCgwXD5npVhSjZdn-yagDte4bg4BoCZoMQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Bateria Maxell CR2032 de lítio, 3 V, uma unidade*. Disponível em: <https://lista.mercadolivre.com.br/bateria-maxell-cr2032>. Acesso em: 22 out. 2026.

MERCADO LIVRE. *Cabo jumper macho-macho 20 cm para Arduino e protoboard*. Disponível em: <https://www.mercadolivre.com.br/cabo-jumper-mxm-20cm-40-pinos-para-arduino-protoboard/up/MLBU2098535281>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Cabo USB compatível com placa de desenvolvimento Arduino Uno R3 ATmega328P CH340*. Disponível em: <https://www.mercadolivre.com.br/cabo-usb-compativel-com-placa-de-desenvolvimento-arduino-uno-r3-atmega328p-ch340/p/MLB44072268?pdp_filters=item_id%3AMLB5229650730&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735125422&matt_product_id=MLB44072268-product&matt_product_partition_id=2495059736147&matt_target_id=pla-2495059736147&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoJRuM1jdBvwQsy-JbDuO2GqZUVevX9I5SgDqMi81aZh_Pusf2a-KQhoC7PwQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Conjunto de 50 botões de pressão para placa de circuito*. Disponível em: <https://www.mercadolivre.com.br/conjunto-de-50-botoes-de-pressao-para-placa-de-circuito/p/MLB2052130334?matt_tool=18956390&utm_source=google_shopping&utm_medium=organic&pdp_filters=item_id%3AMLB7635767930&from=gshop>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Display LCD 16 × 2 1602 com módulo I²C soldado*. Disponível em: <https://www.mercadolivre.com.br/display-lcd-16x2-1602-fundo-azul-com-modulo-i2c-soldado/up/MLBU4549779439?pdp_filters=item_id%3AMLB7321088826&from=gshop&matt_tool=56885173&matt_word=&matt_source=google&matt_campaign_id=22090354256&matt_ad_group_id=192555051054&matt_match_type=&matt_network=g&matt_device=c&matt_creative=799032781561&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=119897001&matt_product_id=MLBU4549779439&matt_product_partition_id=2498613880064&matt_target_id=pla-2498613880064&cq_src=google_ads&cq_cmp=22090354256&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354256&gbraid=0AAAAAD93qcAf98DVye3WhOkZqJU1o3eSE&gclid=CjwKCAjwotzWBhBFEiwA1JhPoMgiK21_IFmDbVmbNMgDC3o03ZARpy4oBINxyPna8AsDNp4ISmYalRoCR_MQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Kit de cabos jumper macho-fêmea 20 cm*. Disponível em: <https://www.mercadolivre.com.br/20pcs-jumper-mxf-20cm--20pcs-jumper-fxf-20cm/up/MLBU2370810037?pdp_filters=item_id%3AMLB4078036044&from=gshop&matt_tool=19390443&matt_word=&matt_source=google&matt_campaign_id=22090354205&matt_ad_group_id=191786774561&matt_match_type=&matt_network=g&matt_device=c&matt_creative=782869962440&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=5458938305&matt_product_id=MLBU2370810037&matt_product_partition_id=2495493043879&matt_target_id=pla-2495493043879&cq_src=google_ads&cq_cmp=22090354205&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090354205&gbraid=0AAAAAD93qcBWh7S0-tQRtyURYUhdok1-w&gclid=CjwKCAjwotzWBhBFEiwA1JhPoO4nhPq-F2KwwBsDI-Hn3A0iwomUAHbI1TRcldDnimZUYjGi7kAF6xoCG5oQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Módulo sensor ultrassônico de distância HC-SR04 para Arduino*. Disponível em: <https://www.mercadolivre.com.br/modulo-sensor-ultrassonico-distancia-hc-sr04-para-arduino/p/MLB64164978?pdp_filters=item_id%3AMLB5130062737&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735128761&matt_product_id=MLB64164978-product&matt_product_partition_id=2495059736347&matt_target_id=pla-2495059736347&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoIQ9ytYCHxi7QMFA-RU1aROmSXUtXE3xD1biz_vwK9s3dwk-8Ro6oxoCIOoQAvD_BwE>. Acesso em: 20 out. 2026.

SARAVATI. *Resistor 1 kΩ 5% 1/4 W*. Disponível em: <https://www.saravati.com.br/resistor-1k-5-1-4w.html?gad_source=1&gad_campaignid=23551463662&gbraid=0AAAAAC2QUl9NJxOJbt89j1o1regZh5Nz1&gclid=CjwKCAjwotzWBhBFEiwA1JhPoG38v08Hq-K_8VKXdxS8REO0qaNgkFziIwVTl9Rc2LXpGSD3o1KboRoCCEkQAvD_BwE>. Acesso em: 20 out. 2026.

UNIPAR. *Projeto parceiro Unipar*: sistema de IoT para monitoramento, orientação e confirmação de evacuação em emergências industriais. São Paulo: Inteli, 2026. Termo de Abertura do Projeto (TAPI), Turma 25, Módulo 4. Documento não publicado.

UNIPAR CARBOCLORO. *Release de resultados 2T23*. São Paulo: Unipar Carbocloro, 2023. Disponível em: https://static.poder360.com.br/2023/08/resultados-unipar-2T23.pdf. Acesso em: 19 out. 2026.

UNIPAR CARBOCLORO. *Release de resultados 4T25*. São Paulo: Unipar Carbocloro, 2026. Disponível em: https://api.mziq.com/mzfilemanager/v2/d/3c0b3516-7dff-44a5-946f-20e7ec87dfa0/2d4c9ca6-1e44-6e77-e845-7392f3c2c4b0?origin=2. Acesso em: 19 out. 2026.

UNIPAR Carbocloro inaugura sua 1ª unidade no Nordeste. *Movimento Econômico*, [s. l.], 4 abr. 2025. Disponível em: https://movimentoeconomico.com.br/estados/bahia/2025/04/04/unipar-carbocloro-inaugura-sua-1a-unidade-no-nordeste/. Acesso em: 19 out. 2026.

VAZAMENTO de gás em porto deixa 13 mortos e mais de 250 feridos na Jordânia; veja vídeo. *Folha de Pernambuco*, Recife, jun. 2022. Disponível em: https://www.folhape.com.br/noticias/vazamento-de-gas-em-porto-deixa-13-mortos-na-jordania/231857/. Acesso em: 20 out. 2026.

VEJA o impacto gerado pela Unipar em 55 anos de história. *Exame*, São Paulo, 28 maio 2024. Disponível em: https://exame.com/esg/impacto-unipar-em-55-anos-de-historia/. Acesso em: 19 out. 2026.

WIRELESS, paperless tracking keeps employees safer. *Automation World*, [s. l.], [20--]. Disponível em: https://www.automationworld.com/article/technologies/sensors-process/wireless-paperless-tracking-keeps-employees-safer. Acesso em: 20 out. 2026.
