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

A matriz de riscos reúne os eventos incertos que podem afetar o projeto, tanto os negativos, chamados de ameaças, quanto os positivos, chamados de oportunidades, e os distribui de acordo com a probabilidade de ocorrência e o impacto de cada um. O recorte é o mesmo das seções anteriores: o balanço de evacuação da fábrica de Cubatão, em que a população presente na planta no momento do alarme (B) é comparada às chegadas registradas nos pontos de encontro (A), como descrito na seção 3.1.3. Por isso, os riscos foram levantados a partir do que o projeto já definiu, como as regras de negócio (seção 3.3.2), a política de privacidade (seção 3.1.6), a BOM (seção 3.1.7) e os testes do protótipo inicial (seção 3.4.1), e não a partir de uma lista genérica de riscos de IoT.

#### Critérios de classificação

A probabilidade expressa a chance de o evento acontecer durante o projeto ou no piloto. O impacto expressa o efeito do evento sobre o objetivo central da solução, que é permitir que a SSMA saiba, dentro de 10 minutos após o alarme, quantas pessoas ainda não chegaram aos pontos de encontro. As duas escalas seguem os cinco níveis do template da turma e estão descritas nos quadros a seguir.

<div align="center">
<p>Quadro X – Escala de probabilidade da matriz de riscos</p>

| Nível | Faixa | Interpretação no projeto |
| --- | :---: | --- |
| Muito baixa | 10% | O evento depende de uma combinação improvável de falhas ou do descumprimento deliberado de uma regra já definida. |
| Baixa | 30% | O evento pode acontecer, mas já existe regra, restrição ou procedimento que reduz a chance. |
| Média | 50% | O evento depende de condições que o grupo ainda não controla ou ainda não testou. |
| Alta | 70% | Já existe indício concreto no projeto, como uma limitação conhecida de componente ou uma dependência externa sem prazo definido. |
| Muito alta | 90% | O evento é praticamente certo se nada for feito. |

<p>Fonte: elaboração dos autores (2026).</p>
</div>

<div align="center">
<p>Quadro X – Escala de impacto da matriz de riscos</p>

| Nível | Interpretação no projeto |
| --- | --- |
| Muito baixo | O efeito não é percebido pelos usuários e não altera nenhuma entrega. |
| Baixo | O evento exige um ajuste pontual em uma seção ou componente, sem atrasar a sprint. |
| Moderado | O evento gera retrabalho ou atraso em uma entrega, sem comprometer o objetivo da solução. |
| Alto | O evento compromete um dos critérios de sucesso da seção 3.1.3.5 ou impede o piloto em parte da planta. |
| Muito alto | O evento pode levar a SSMA a tratar como segura uma situação em que ainda há pessoas não contabilizadas, ou atrasar o acionamento da brigada. |

<p>Fonte: elaboração dos autores (2026).</p>
</div>

Para as oportunidades, a leitura é a mesma, com sinal invertido: o impacto mede o quanto o evento aproxima o projeto do seu objetivo, e não o quanto o afasta.

#### Ameaças

As ameaças foram agrupadas em três blocos. O primeiro trata da contagem em si, ou seja, dos dois números que formam o balanço. O segundo trata da integração e da operação do nó de contagem na planta. O terceiro trata da validação, do uso da solução e da condução do projeto.

<div align="center">
<p>Quadro X – Ameaças identificadas no projeto</p>

| ID | Ameaça | Probabilidade | Impacto | Justificativa |
| --- | --- | :---: | :---: | --- |
| R01 | Contagem incorreta quando várias pessoas passam juntas pelo acesso do ponto de encontro. | Alta (70%) | Muito alto | O HC-SR04 mede a distância até o objeto mais próximo em um único feixe, então duas pessoas lado a lado ou muito próximas tendem a ser contadas como uma. Os casos CT03 e CT04 (seção 3.4.1) mostram que o protótipo só libera uma nova contagem quando o sensor volta a ler mais de 200 cm, o que um fluxo denso e apressado de evacuação dificilmente permite. A meta de acurácia de 95% da seção 3.1.3.5 depende de separar essas passagens. |
| R02 | Repassagens e passagens no sentido contrário somadas como chegadas. | Média (50%) | Muito alto | O protótipo conta qualquer aproximação, sem saber se a pessoa está entrando ou saindo do ponto de encontro. Quem volta para buscar um colega ou circula na entrada aumenta A sem que haja uma nova chegada, o que pode produzir a igualdade A = B antes da hora. É exatamente o cenário que a RN07 tenta conter ao exigir a conferência da SSMA. |
| R03 | Base B diferente da população que de fato está na planta no momento do alarme. | Média (50%) | Muito alto | B vem do saldo de entradas e saídas das portarias P1 e P2 no instante do alarme (RN02). Saídas sem registro, crachás provisórios, visitantes e pessoas que passam juntas pela catraca deixam esse saldo errado, e a seção 3.1.3.1 já aponta as listas desatualizadas como uma das falhas do processo atual. Se B ficar menor que o real, o saldo pendente D pode chegar a zero com pessoas ainda na área. |
| R04 | Indisponibilidade dos dados do controle de acesso da Unipar para o projeto. | Alta (70%) | Alto | Sem os registros das portarias não existe B, e o painel passa a mostrar apenas as chegadas, sem o saldo pendente. O TAPI informa que ainda não há sistema digital dedicado ao processo de evacuação (UNIPAR, 2026), e a política da seção 3.1.6 restringe o projeto a dados fictícios até uma autorização formal, o que torna a integração real uma dependência externa sem prazo. |
| R05 | Perda de comunicação entre o nó de contagem e o sistema central durante a emergência. | Média (50%) | Alto | O nó do ponto de encontro depende da rede para enviar as passagens ao broker MQTT, e uma emergência pode coincidir com queda de energia ou de rede na área. A RN08 impede que a ausência de leitura seja tratada como segurança e marca o balanço como inconclusivo, por isso o impacto é alto e não muito alto: a falha fica visível para a SSMA, mas retira a informação no momento em que ela mais importa. |
| R06 | Alimentação do nó inadequada para operação autônoma. | Alta (70%) | Alto | A BOM (seção 3.1.7) prevê uma pilha de lítio tipo moeda de 3 V, ainda não implementada, enquanto o Arduino Uno e o HC-SR04 operam em 5 V e consomem mais corrente do que esse tipo de pilha consegue fornecer de forma contínua. Sem uma fonte adequada e com reserva, o nó pode desligar justamente quando a energia da área for cortada na emergência. |
| R07 | Hardware inadequado para as condições do ambiente industrial. | Alta (70%) | Alto | Os componentes da BOM são de bancada, e a própria seção 3.1.7 registra que ainda faltam gabinete de proteção, fixação mecânica e grau de proteção compatível com a planta. Cubatão tem atmosfera corrosiva, exposição a chuva e zonas classificadas que exigem equipamentos certificados (seção 3.1.3), o que impede instalar o protótipo como está fora de áreas seguras. |
| R08 | Validação dos critérios de sucesso sem um simulado real na planta. | Alta (70%) | Moderado | A redução de 60% no tempo de apuração e a latência abaixo de 3 s (seção 3.1.3.5) foram definidas para serem medidas em um simulado de abandono promovido pela SSMA de Cubatão. Se o simulado não couber no calendário do módulo, o grupo só consegue fazer ensaios controlados, e esses critérios ficam demonstrados de forma parcial. |
| R09 | Painel difícil de interpretar sob pressão. | Baixa (30%) | Alto | As personas Maria Schrader, operadora do CCO, e Tuco Salamanca, gestor de SSMA (seção 3.2.1), pedem leitura em segundos e curva de aprendizado nula. Um painel com indicadores demais ou sem hierarquia clara atrasa a decisão sobre a brigada. A probabilidade é baixa porque o painel ainda vai ser desenhado, e já com esse requisito explícito. |
| R10 | Igualdade A = B interpretada como confirmação individual de todos. | Baixa (30%) | Muito alto | A contagem é agregada e não identifica quem passou (RN09), e o Value Proposition Canvas (seção 3.1.4) reconhece que o ganho de saber quem falta é atendido só em parte. Se a liderança dispensar a conferência manual porque o painel zerou, um erro de contagem vira falsa sensação de segurança. A RN07 reduz a chance ao exigir a avaliação da SSMA antes de encerrar o evento. |
| R11 | Uso indevido ou vazamento de dados pessoais de colaboradores e terceiros. | Muito baixa (10%) | Alto | A política da seção 3.1.6 proíbe dados reais no desenvolvimento e o uso do sistema para controle de produtividade, e a RN10 restringe o acesso a perfis autorizados, com registro das alterações. O impacto continua alto porque um vazamento expõe colaboradores e terceiros e compromete a confiança na solução. |
| R12 | Desalinhamento entre o escopo documentado e o protótipo desenvolvido. | Alta (70%) | Moderado | A documentação está sendo escrita em paralelo por várias pessoas, e já existem diferenças entre seções, como o microcontrolador citado na descrição da solução (seção 3.1.3) e o usado na BOM e no protótipo (seções 3.1.7 e 3.4.1). Sem uma fonte única de escopo, requisitos, regras e testes deixam de se referir à mesma solução, o que gera retrabalho e quebra a rastreabilidade da seção 3.3.4. |
| R13 | Atraso na entrega ou defeito nos componentes do protótipo físico. | Baixa (30%) | Moderado | O protótipo físico offline da sprint 2 (seção 3.4.2) depende da compra dos itens da BOM em marketplaces, sujeitos a prazo de entrega e a peças com defeito. Como os componentes são comuns e baratos, a chance é baixa, mas um atraso empurra os testes físicos para a sprint seguinte. |

<p>Fonte: elaboração dos autores (2026).</p>
</div>

#### Planos de resposta às ameaças

Cada ameaça recebeu uma estratégia de resposta. **Evitar** significa mudar o escopo ou o desenho para que o risco deixe de existir, **mitigar** significa reduzir a probabilidade ou o impacto, e **aceitar** significa assumir o risco com um plano de contingência, porque o custo de tratá-lo é maior que o efeito esperado.

<div align="center">
<p>Quadro X – Planos de resposta às ameaças</p>

| ID | Estratégia | Ação planejada |
| --- | :---: | --- |
| R01 | Mitigar | Estreitar o acesso do ponto de encontro para que a passagem aconteça em fila única e testar a contagem com grupos em diferentes cadências, como prevê o método de validação da seção 3.1.3.5. Se a acurácia ficar abaixo de 95%, avaliar sensores com outro princípio de detecção, como barreira de feixe ou sensor de tempo de voo. |
| R02 | Mitigar | Usar em sequência os dois sensores ultrassônicos já previstos na BOM, para identificar o sentido da passagem e descontar as saídas do ponto de encontro. A conclusão do evento continua com a SSMA, conforme a RN07. |
| R03 | Mitigar | Congelar B no instante do alarme (RN02), validar com a SSMA como visitantes e crachás provisórios entram no saldo e marcar o balanço como inconclusivo quando a referência das portarias for inválida (RN08). |
| R04 | Mitigar | Desenvolver com uma base fictícia no mesmo formato esperado dos registros de portaria e levar à Unipar, na sprint 2, uma proposta de formato de integração, para que a troca pela base real não exija mudar a lógica do balanço. |
| R05 | Mitigar | Guardar as passagens localmente no nó e reenviá-las ao reconectar, com identificador de dispositivo e número sequencial, que a RN11 já usa para evitar duplicidade. Enviar sinais periódicos de vida ao sistema central, para que a perda de um nó apareça no painel. |
| R06 | Mitigar | Revisar a alimentação na BOM, trocando a pilha tipo moeda por uma fonte de 5 V com bateria recarregável de reserva, dimensionada para a duração de uma evacuação. |
| R07 | Evitar | Restringir o piloto aos pontos de encontro, que por definição ficam em áreas seguras, e especificar gabinete e grau de proteção antes de qualquer instalação na planta. A certificação para áreas classificadas fica fora do escopo do módulo e será registrada como recomendação à Unipar. |
| R08 | Mitigar | Solicitar à SSMA, ainda na sprint 2, uma data de simulado e, até lá, fazer ensaios controlados com cronometragem e gravação em vídeo, seguindo o método da seção 3.1.3.5. |
| R09 | Mitigar | Validar um protótipo de baixa fidelidade do painel com os perfis de CCO e SSMA antes de implementá-lo, priorizando três informações: o saldo pendente, o cronômetro de 10 minutos e as chegadas por ponto de encontro. |
| R10 | Mitigar | Exibir no painel a igualdade A = B como convergência numérica, nunca como evacuação confirmada, e manter a conclusão do evento como uma ação explícita da SSMA (RN07 e RN10). |
| R11 | Evitar | Manter apenas dados fictícios ou anonimizados no repositório e nos testes, com pseudonimização dos identificadores, conforme a seção 3.1.6. |
| R12 | Mitigar | Tratar a arquitetura da solução (seção 3.3.5) como fonte única de escopo e de hardware, e verificar na revisão de cada PR se a seção alterada continua coerente com as demais. |
| R13 | Aceitar | Comprar os componentes no início da sprint 2, com unidades de reserva para os itens mais baratos, e manter o simulador Wokwi como contingência para os testes. |

<p>Fonte: elaboração dos autores (2026).</p>
</div>

#### Oportunidades

As oportunidades partem dos benefícios e diferenciais já apontados nas seções 1.3 e 3.1.3.4. As estratégias usadas são **explorar**, quando o grupo age para garantir que a oportunidade aconteça, **melhorar**, quando age para aumentar a chance ou o benefício, e **compartilhar**, quando a oportunidade depende de outro ator para ser aproveitada.

<div align="center">
<p>Quadro X – Oportunidades identificadas no projeto</p>

| ID | Oportunidade | Probabilidade | Impacto | Justificativa | Estratégia e ação |
| --- | --- | :---: | :---: | --- | --- |
| O01 | Aproveitar o crachá e as catracas que já existem na planta. | Alta (70%) | Alto | A base B usa a infraestrutura atual de controle de acesso, sem um dispositivo novo para o colaborador, o que a seção 1.3 aponta como diferencial, já que equipamentos que atrapalham o EPI tendem a ser abandonados. Isso reduz o custo de implantação e a resistência de uso de quem está na ponta, como o técnico de operação representado pela persona Gustavo Fring (seção 3.2.1). | Explorar: priorizar na integração o formato de dados que o controle de acesso da Unipar já produz. |
| O02 | Reduzir a exposição da brigada a buscas sem direção. | Média (50%) | Muito alto | Com o saldo pendente e os setores das pessoas presentes na base congelada, a SSMA pode acionar a brigada apenas quando há pendência real (seção 3.1.3.3), evitando buscas com roupa de proteção química e ar limitado em áreas onde ninguém ficou. | Explorar: incluir no alerta dos 10 minutos (RN06) os setores das pessoas que estavam na planta no momento do alarme. |
| O03 | Usar o histórico de passagens para melhorar o Plano de Ação de Emergência (PAE). | Alta (70%) | Moderado | Cada passagem é registrada com horário, e a seção 3.1.3.4 prevê usar a curva de esvaziamento para identificar rotas sobrecarregadas. Esse ganho aparece já nos simulados, sem depender de uma emergência real. | Melhorar: guardar os eventos com horário e ponto de encontro desde o primeiro ensaio. |
| O04 | Replicar a solução nas outras plantas da Unipar. | Média (50%) | Alto | O TAPI já aponta Santo André, Camaçari e Bahía Blanca como unidades beneficiadas (UNIPAR, 2026), e a seção 1.3 destaca esse potencial. Como o balanço depende apenas de portarias e pontos de encontro, o modelo não fica preso ao layout de Cubatão. | Explorar: configurar dispositivos e locais de forma independente da planta, como já exige a RN03. |
| O05 | Servir de base para etapas futuras com câmeras e drones. | Baixa (30%) | Moderado | No kickoff, a Unipar citou câmeras e drones como possíveis evoluções do processo (seção 1.3). Uma arquitetura com dispositivos identificados e mensagens MQTT permite somar novas fontes de contagem sem refazer o balanço. | Compartilhar: registrar a possibilidade nas recomendações da seção 4, para que a Unipar decida sobre a continuidade. |

<p>Fonte: elaboração dos autores (2026).</p>
</div>

#### Síntese e prioridades

Olhando o conjunto, as ameaças mais críticas se concentram na própria contagem. R01, R02 e R03 ficam na faixa de impacto muito alto porque atacam diretamente os dois números do balanço, A e B, e um erro em qualquer um deles pode zerar o saldo pendente com pessoas ainda na área. Por isso, a prioridade da sprint 2 é validar a contagem no protótipo físico, com passagens simultâneas, repassagens e os dois sensores em sequência, antes de avançar para a integração com o painel.

Em seguida vêm as dependências externas, R04 e R08, que não dependem só do grupo e precisam ser levadas à Unipar o quanto antes, e a alimentação do nó (R06), que é uma correção barata na BOM e elimina um ponto de falha no momento mais crítico da evacuação. Do lado das oportunidades, O01 e O02 reforçam o argumento central da proposta: a solução aproveita o que a planta já tem e devolve à SSMA a informação que permite proteger também quem faz o resgate.

A matriz será revisada ao fim de cada sprint, junto com a matriz de rastreabilidade da seção 3.3.4, já que vários riscos só podem ser reclassificados depois dos testes com o protótipo físico e com a integração MQTT.

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

*Liste os RF numerados de forma objetiva e verificável. Cada RF deve poder ser convertido em caso de teste.*

| ID    | Descrição | Prioridade | Status       |
|-------|-----------|------------|--------------|
| RF001 | ...       | Alta       | Implementado |
| RF002 | ...       | Média      | Planejado    |

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

MERCADO LIVRE. *Cabo USB compatível com placa de desenvolvimento Arduino Uno R3 ATmega328P CH340*. Disponível em: <https://www.mercadolivre.com.br/cabo-usb-compativel-com-placa-de-desenvolvimento-arduino-uno-r3-atmega328p-ch340/p/MLB44072268?pdp_filters=item_id%3AMLB5229650730&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735125422&matt_product_id=MLB44072268-product&matt_product_partition_id=2495059736147&matt_target_id=pla-2495059736147&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoJRuM1jdBvwQsy-JbDuO2GqZUVevX9I5SgDqMi81aZh_Pusf2a-KQhoC7PwQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Módulo sensor ultrassônico de distância HC-SR04 para Arduino*. Disponível em: <https://www.mercadolivre.com.br/modulo-sensor-ultrassonico-distancia-hc-sr04-para-arduino/p/MLB64164978?pdp_filters=item_id%3AMLB5130062737&from=gshop&matt_tool=56164162&matt_word=&matt_source=google&matt_campaign_id=22090193744&matt_ad_group_id=194474654154&matt_match_type=&matt_network=g&matt_device=c&matt_creative=792355615410&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=735128761&matt_product_id=MLB64164978-product&matt_product_partition_id=2495059736347&matt_target_id=pla-2495059736347&cq_src=google_ads&cq_cmp=22090193744&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090193744&gbraid=0AAAAAD93qcDWMW_AFPrQLlrvCxOyNb_89&gclid=CjwKCAjwotzWBhBFEiwA1JhPoIQ9ytYCHxi7QMFA-RU1aROmSXUtXE3xD1biz_vwK9s3dwk-8Ro6oxoCIOoQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Conjunto de 50 botões de pressão para placa de circuito*. Disponível em: <https://www.mercadolivre.com.br/conjunto-de-50-botoes-de-pressao-para-placa-de-circuito/p/MLB2052130334?matt_tool=18956390&utm_source=google_shopping&utm_medium=organic&pdp_filters=item_id%3AMLB7635767930&from=gshop>. Acesso em: 20 out. 2026.

ELETROGATE. *LED difuso 5 mm verde*. Disponível em: <https://www.eletrogate.com/led-difuso-5mm-verde?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=22470016551&gbraid=0AAAAADqxjs-J182in_CBPr1nyA54F-LL9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoCaLKeb9vaLT7u49dThE1TEGwTfv0C6_EYGFI6dS3biP6Xoqy1ZgVxoCiEIQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. *LED difuso 5 mm vermelho*. Disponível em: <https://www.eletrogate.com/led-difuso-5mm-vermelho?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoN-apmwJkkXYYznxTECGwrAfUUdQMOGaQL_4-m8zeFGfzU6AOYhiNxoCqJgQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. *Buzzer ativo 5 V*. Disponível em: <https://www.eletrogate.com/buzzer-ativo-5v?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=1&gad_campaignid=20223015315&gbraid=0AAAAADqxjs_RKxEA4lB8OTz9kzOy_b2y9&gclid=CjwKCAjwotzWBhBFEiwA1JhPoLPBf6mtcZizCQRpZRRLmGNgwewSSuaihP1VIORbIt2h8imNmBty9RoCrG8QAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Display LCD 16 × 2 1602 com módulo I²C soldado*. Disponível em: <https://www.mercadolivre.com.br/display-lcd-16x2-1602-fundo-azul-com-modulo-i2c-soldado/up/MLBU4549779439?pdp_filters=item_id%3AMLB7321088826&from=gshop&matt_tool=56885173&matt_word=&matt_source=google&matt_campaign_id=22090354256&matt_ad_group_id=192555051054&matt_match_type=&matt_network=g&matt_device=c&matt_creative=799032781561&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=119897001&matt_product_id=MLBU4549779439&matt_product_partition_id=2498613880064&matt_target_id=pla-2498613880064&cq_src=google_ads&cq_cmp=22090354256&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=1&gad_campaignid=22090354256&gbraid=0AAAAAD93qcAf98DVye3WhOkZqJU1o3eSE&gclid=CjwKCAjwotzWBhBFEiwA1JhPoMgiK21_IFmDbVmbNMgDC3o03ZARpy4oBINxyPna8AsDNp4ISmYalRoCR_MQAvD_BwE>. Acesso em: 20 out. 2026.

SARAVATI. *Resistor 1 kΩ 5% 1/4 W*. Disponível em: <https://www.saravati.com.br/resistor-1k-5-1-4w.html?gad_source=1&gad_campaignid=23551463662&gbraid=0AAAAAC2QUl9NJxOJbt89j1o1regZh5Nz1&gclid=CjwKCAjwotzWBhBFEiwA1JhPoG38v08Hq-K_8VKXdxS8REO0qaNgkFziIwVTl9Rc2LXpGSD3o1KboRoCCEkQAvD_BwE>. Acesso em: 20 out. 2026.

ELETROGATE. *Protoboard 400 pontos*. Disponível em: <https://www.eletrogate.com/protoboard-400-pontos?utm_source=Site&utm_medium=GoogleMerchant&utm_campaign=GoogleMerchant&gad_source=4&gad_campaignid=20223015315&gbraid=0AAAAADqxjs--_IDti_OP_PomQr4wJeFmq&gclid=CjwKCAjwotzWBhBFEiwA1JhPoPlT3_2SAg4EbLjDVCFA_2Gb0qBCgwXD5npVhSjZdn-yagDte4bg4BoCZoMQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Bateria Maxell CR2032 de lítio, 3 V, uma unidade*. Disponível em: <https://lista.mercadolivre.com.br/bateria-maxell-cr2032>. Acesso em: 22 out. 2026.

MERCADO LIVRE. *Kit de cabos jumper macho-fêmea 20 cm*. Disponível em: <https://www.mercadolivre.com.br/20pcs-jumper-mxf-20cm--20pcs-jumper-fxf-20cm/up/MLBU2370810037?pdp_filters=item_id%3AMLB4078036044&from=gshop&matt_tool=19390443&matt_word=&matt_source=google&matt_campaign_id=22090354205&matt_ad_group_id=191786774561&matt_match_type=&matt_network=g&matt_device=c&matt_creative=782869962440&matt_keyword=&matt_ad_position=&matt_ad_type=pla&matt_merchant_id=5458938305&matt_product_id=MLBU2370810037&matt_product_partition_id=2495493043879&matt_target_id=pla-2495493043879&cq_src=google_ads&cq_cmp=22090354205&cq_net=g&cq_plt=gp&cq_med=pla&gad_source=4&gad_campaignid=22090354205&gbraid=0AAAAAD93qcBWh7S0-tQRtyURYUhdok1-w&gclid=CjwKCAjwotzWBhBFEiwA1JhPoO4nhPq-F2KwwBsDI-Hn3A0iwomUAHbI1TRcldDnimZUYjGi7kAF6xoCG5oQAvD_BwE>. Acesso em: 20 out. 2026.

MERCADO LIVRE. *Cabo jumper macho-macho 20 cm para Arduino e protoboard*. Disponível em: <https://www.mercadolivre.com.br/cabo-jumper-mxm-20cm-40-pinos-para-arduino-protoboard/up/MLBU2098535281>. Acesso em: 20 out. 2026.

UNIPAR. *Projeto parceiro Unipar*: sistema de IoT para monitoramento, orientação e confirmação de evacuação em emergências industriais. São Paulo: Inteli, 2026. Termo de Abertura do Projeto (TAPI), Turma 25, Módulo 4. Documento não publicado.
