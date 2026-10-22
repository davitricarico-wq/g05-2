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

A unidade fabril da Unipar localizada no polo petroquímico e industrial de Cubatão (SP) constitui uma das principais instalações de cloro-álcalis da América Latina, respondendo pela fabricação contínua de insumos químicos para o saneamento básico, tratamento de água e diversas cadeias produtivas, tais como cloro gasoso e liquefeito, ácido clorídrico, soda cáustica e hipoclorito de sódio (UNIPAR CARBOCLORO, 2023). Conforme levantado em reunião de alinhamento inicial (kickoff) com os representantes da empresa parceira[^1], a planta opera sob regime ininterrupto e abriga diariamente uma população aproximada de 755 pessoas, contingente composto por cerca de 355 colaboradores próprios e aproximadamente 400 trabalhadores terceirizados (UNIPAR CARBOCLORO, 2026). Estes últimos dedicam-se a intervenções de montagem mecânica, manutenção eletromecânica industrial, logística de granel e serviços continuados de apoio operacional. Essa população encontra-se distribuída ao longo de um parque industrial extenso, caracterizado por células eletrolíticas, vasos de pressão, bacias de contenção de produtos químicos e redes de tubovias, incluindo setores sujeitos ao enquadramento como áreas classificadas devido à presença de gases e vapores inflamáveis ou tóxicos, nos termos da Norma Regulamentadora NR-20 (BRASIL, 2022) e conforme informado pela equipe técnica da parceira (UNIPAR CARBOCLORO, 2026).

Nesse ambiente operacional, o cenário de maior severidade potencial corresponde à perda de contenção com vazamento de cloro gasoso ($\text{Cl}_2$) ou a incêndios industriais que envolvam compostos químicos perigosos (UNIPAR, 2026). De acordo com a ficha de informação toxicológica da Companhia Ambiental do Estado de São Paulo (CETESB, 2023) e os parâmetros do National Institute for Occupational Safety and Health (NIOSH, 2019), o cloro gasoso é um agente químico irritante, oxidante e corrosivo, apresentando massa molar de 70,9 g/mol e densidade relativa aproximadamente 2,5 vezes superior à do ar atmosférico. Em função dessa massa específica elevada, o cloro liberado acidentalmente comporta-se como um gás pesado, tendendo a acumular-se próximo ao solo e em regiões de menor cota topográfica antes de sofrer dispersão sob a ação dos ventos (CETESB, 2023).

Sob o aspecto toxicológico, o cloro gasoso impõe limites severos à exposição humana. Conforme estabelecido pelo NIOSH (2019), o Limite Imediatamente Perigoso à Vida ou à Saúde (IDLH, da sigla em inglês Immediately Dangerous to Life or Health) para o cloro é de 10 ppm (partes por milhão). Exposições a concentrações entre 15 e 30 ppm provocam irritação intensa nas vias aéreas superiores, tosse aguda e lesões nas mucosas oculares, ao passo que frações superiores a 50 ppm podem desencadear pneumonite química severa e edema pulmonar agudo em curto intervalo de tempo (NIOSH, 2019; CETESB, 2023). Desse modo, em ocorrências que envolvam dispersão de cloro, a celeridade do abandono de área e a apuração tempestiva de eventuais ausências nos locais seguros constituem fatores determinantes para a preservação da integridade física dos trabalhadores.

Embora a Unipar mantenha procedimentos estruturados de segurança industrial, a dinâmica atual de resposta a emergências apresenta uma limitação operacional entre a liberação física para evasão rápida e a manutenção dos registros do controle de acesso. Em condições rotineiras de produção, o fluxo de entrada e saída da planta é contabilizado pelas catracas eletrônicas posicionadas nas Portarias P1 e P2 (UNIPAR CARBOCLORO, 2026). Contudo, conforme relatado pela equipe de Saúde, Segurança e Meio Ambiente (SSMA) da Unipar (UNIPAR CARBOCLORO, 2026), quando o alarme geral de emergência é acionado, o procedimento operacional interno da companhia determina a liberação imediata das catracas (modo de giro livre), em consonância com o princípio geral da Norma Regulamentadora NR-23 (BRASIL, 2022), segundo o qual as saídas de emergência devem permanecer desobstruídas para o escoamento seguro de pessoal. Essa medida visa permitir a vazão física rápida das pessoas presentes na planta, prevenindo retenções e acidentes nos bloqueios mecânicos.

Entretanto, essa liberação mecânica interrompe o registro individualizado de passagem nas catracas durante a evasão. Ao transpor os acessos sem a validação eletrônica individual, o fluxo de saída deixa de atualizar o sistema de portaria. Consequentemente, durante o evento crítico, o Centro de Controle Operacional (CCO) e a liderança de SSMA dispõem apenas do número de referência de quantas pessoas encontravam-se na planta no instante do alarme, mas não contam com instrumentos automatizados para acompanhar o progresso numérico da chegada dos evacuados aos Pontos de Encontro (PEs).

Para realizar a conferência de presença após o abandono de área, o procedimento vigente baseia-se na contagem e chamada manual nos Pontos de Encontro, conduzida por líderes de evacuação e brigadistas com o auxílio de listas impressas em papel (UNIPAR, 2026; UNIPAR CARBOCLORO, 2026). Essa sistemática manual apresenta limitações operacionais relevantes diante de uma emergência química:
- Defasagem das listas impressas: as relações emitidas previamente podem não refletir com precisão imediata a dinâmica de prestadores de serviços terceirizados, visitantes temporários ou movimentações operacionais ocorridas pouco antes do sinistro (UNIPAR CARBOCLORO, 2026);
- Dificuldade de comunicação verbal em campo: a conferência por chamada oral é prejudicada pelo nível elevado de pressão sonora das sirenes de alarme industrial, ruídos de processo e pela própria tensão inerente à evacuação;
- Evasão direcionada pelo vento: em vazamentos de gases tóxicos, os trabalhadores devem deslocar-se em sentido contrário ou transversal ao vento predominante indicado pelas birutas. Por essa razão, colaboradores alocados em determinado setor frequentemente se dirigem a Pontos de Encontro distintos daqueles previstos em suas listas originais. Como a apuração em papel ocorre de forma fragmentada entre os diferentes PEs, torna-se demorado consolidar o total global de evacuados da planta;
- Fragilidade do suporte físico: o manuseio de pranchetas e folhas avulsas sob condições meteorológicas adversas ou deslocamento apressado eleva a probabilidade de erros de anotação, omissões, duplicidades e extravio de registros.

Essa morosidade do processo manual contrapõe-se ao prazo interno de 10 minutos definido pela SSMA da Unipar: conforme diretriz operacional informada pela parceira (UNIPAR, 2026; UNIPAR CARBOCLORO, 2026), qualquer discrepância não esclarecida ou pessoa não contabilizada nos Pontos de Encontro em até 10 minutos após o disparo do alarme é classificada como situação crítica, exigindo o acionamento de protocolos de busca e resgate.

Segundo estimativas operacionais reportadas pela equipe da Unipar durante o levantamento de requisitos (UNIPAR CARBOCLORO, 2026), a consolidação manual da presença de aproximadamente 755 pessoas pode demandar entre 20 e 35 minutos. Esse intervalo excede o prazo interno de 10 minutos estabelecido pela SSMA e dificulta a tomada de decisão da coordenação de emergência. Quando o limite de 10 minutos é atingido sem que a contagem manual esteja concluída, a liderança de SSMA precisa decidir sobre a mobilização da Brigada de Emergência sem saber se a diferença decorre apenas do atraso na conferência em papel ou da retenção real de trabalhadores na área industrial. Adicionalmente, as intervenções em atmosferas potencialmente contaminadas por cloro exigem o uso de Equipamentos de Proteção Individual (EPIs) encapsulados e Equipamentos Autônomos de Respiração (EPR), cujos cilindros de ar comprimido possuem autonomia nominal típica de 30 minutos, frequentemente reduzida na prática pelo esforço físico intenso do socorrista (FUNDACENTRO, 2016; UNIPAR CARBOCLORO, 2026). Assim, a ausência de um balanço numérico tempestivo nos Pontos de Encontro sobrecarrega a gestão de crise e pode expor os brigadistas a incursões desnecessárias ou postergar a confirmação de que ainda existem pendências reais de evacuação.

[^1]: Informações operacionais coletadas presencialmente e em reuniões de alinhamento técnico (kickoff) com os especialistas de Saúde, Segurança e Meio Ambiente (SSMA) e de operações da Unipar Carbocloro (unidade de Cubatão - SP) em fevereiro de 2026, complementadas pelo Termo de Abertura do Projeto de Inovação (UNIPAR, 2026).

#### 3.1.3.2 Qual a solução proposta (visão de negócios)

Sob a ótica de gestão estratégica de SSMA e eficiência operacional, a solução proposta consiste em um Sistema de Apoio à Contagem e Balanço de Evacuação Industrial voltado aos Pontos de Encontro. O projeto não se propõe a substituir os procedimentos institucionais da Unipar nem a eliminar a conferência humana e o julgamento técnico das lideranças de emergência, mas a fornecer um instrumento complementar de contagem automatizada nos Pontos de Encontro para acelerar a visibilidade situacional durante o prazo interno de 10 minutos definido pela SSMA (UNIPAR, 2026).

Para manter alinhamento entre todas as frentes do projeto, o escopo do Produto Mínimo Viável (MVP) foi padronizado da seguinte forma: o sensoriamento de passagem é instalado exclusivamente nos acessos aos Pontos de Encontro, enquanto a estimativa do contingente presente na fábrica provém do saldo das Portarias P1 e P2. O emprego de sensores entre áreas internas da fábrica não integra o escopo do MVP, permanecendo apenas como possibilidade de expansão futura.

O modelo conceitual de negócio baseia-se no balanço quantitativo entre três variáveis operacionais (conforme as Regras de Negócio RN01 a RN11 descritas na seção 3.3.2):
- População de Referência na Planta ($B$): no instante em que o alarme de emergência é acionado, considera-se o saldo operacional registrado nas Portarias P1 e P2 (entradas menos saídas acumuladas até o momento do disparo). Como os sistemas de portaria estão sujeitos a eventuais inconsistências operacionais (como esquecimento de validação de crachá ou acessos excepcionais), o parâmetro $B$ não define com exatidão absoluta a população, mas fornece uma população de referência para o balanço de evacuação;
- Passagens Contabilizadas nos Pontos de Encontro ($A$): total acumulado de passagens registradas pelos dispositivos de contagem posicionados nas entradas dos Pontos de Encontro, representando o número de pessoas estimadas no ponto de encontro;
- Estimativa de Pendentes de Contabilização ($D$): diferença numérica calculada pela relação:

$$D = B - A$$

No início do evento ($t = 0$), tem-se $A = 0$ e $D = B$. À medida que os trabalhadores ingressam nos Pontos de Encontro passando pelo acesso monitorado, o indicador $A$ é incrementado e a diferença $D$ diminui.

Cumpre destacar duas premissas fundamentais de negócio que regem esse modelo:
1. Ausência de identificação nominal nos Pontos de Encontro: a contagem realizada pelos sensores nos Pontos de Encontro é estritamente quantitativa e anônima. Portanto, o sistema não identifica nominalmente quem chegou ou quem ainda não chegou ao Ponto de Encontro, tampouco informa vínculo contratual, empresa terceirizada ou último setor de cada pessoa pendente;
2. Distinção entre convergência numérica e confirmação de segurança: o atingimento da condição $D = 0$ (ou seja, $A = B$) representa exclusivamente a convergência numérica entre a população de referência das portarias e o total de passagens contabilizadas nos Pontos de Encontro. Esse resultado não constitui confirmação automática de que toda a população está segura, mantendo-se obrigatória a validação operacional e a decisão final pela equipe de SSMA (conforme a Regra de Negócio RN07).

A concepção por contagem anônima nos Pontos de Encontro atende de forma estrita à restrição estabelecida no Termo de Abertura do Projeto de Inovação (TAPI), que veda a utilização de localização contínua de alta precisão em ambientes fechados (indoor tracking) (UNIPAR, 2026). Sob a perspectiva de negócios, essa decisão justifica-se por três fatores principais:
1. Viabilidade em áreas classificadas e redução de custos de infraestrutura: a planta de Cubatão possui setores com atmosferas potencialmente explosivas e ambientes quimicamente agressivos (BRASIL, 2022; UNIPAR CARBOCLORO, 2026). Implantar rastreamento interno contínuo em toda a planta exigiria equipamentos certificados para áreas classificadas em larga escala, elevando custos de aquisição e manutenção. Ao posicionar os dispositivos de contagem apenas nos Pontos de Encontro (locais externos ou abrigados fora das zonas primárias de contenção de cloro), reduz-se a complexidade de instalação;
2. Governança de dados e conformidade com a Lei Geral de Proteção de Dados Pessoais (LGPD — Lei nº 13.709/2018): a ausência de rastreamento individual contínuo evita o monitoramento comportamental dos trabalhadores no interior da fábrica. Ainda assim, a conformidade com a LGPD não decorre apenas do enquadramento na base legal de proteção da vida e da incolumidade física (Art. 7º, inciso VII, da Lei nº 13.709/2018), exigindo a aplicação conjunta de princípios e controles detalhados na seção 3.1.6: minimização de dados (coleta restrita a contagens numéricas nos PEs), limitação de finalidade (uso exclusivo para segurança em emergências e simulados), controle de acesso restrito por perfil aos operadores autorizados do CCO e de SSMA (RN10), medidas técnicas de segurança da informação e política formal de retenção e descarte dos registros definida pela Unipar (BRASIL, 2018);
3. Foco no indicador tático de evacuação: na janela inicial de 10 minutos, a informação prioritária para a coordenação de SSMA é acompanhar a velocidade de ocupação dos Pontos de Encontro e dimensionar rapidamente eventual defasagem numérica global ($D > 0$), apoiando a priorização das ações de resposta.

Para assegurar transparência quanto ao estágio de desenvolvimento do projeto, separa-se claramente o que já foi implementado no protótipo atual do que constitui planejamento para as próximas etapas:
- Escopo implementado na Sprint 1 (Protótipo Atual): foi desenvolvido e validado em ambiente de simulação (Wokwi) um nó local autônomo (offline) de contagem de passagens para Ponto de Encontro, baseado na placa microcontroladora Arduino Uno R3 (ATmega328P), equipada com sensor ultrassônico HC-SR04 para detecção de presença em faixa inferior a 200 cm, botão de controle (início/pausa do monitoramento), LED verde (indicador de sistema pausado), LED vermelho (indicador de monitoramento ativo), buzzer ativo com ajuste para retorno sonoro de 100 ms a cada detecção e visor LCD 16x2 com interface I2C para exibição local imediata do total de passagens contabilizadas. Na lista de materiais (BOM, seção 3.1.7) para a montagem física do MVP em bancada, preveem-se dois sensores ultrassônicos HC-SR04 por ponto de acesso para permitir a distinção do sentido de passagem (entrada e saída);
- Escopo planejado para evoluções futuras (Sprints subsequentes e visão de produto): a implementação física do segundo sensor ultrassônico para leitura bidirecional, a adição de conectividade de rede para transmissão remota dos dados, a integração automatizada com o sistema de portarias P1/P2 para obtenção de $B$ e a construção do painel centralizado (dashboard) para o CCO e SSMA constituem etapas planejadas para o desenvolvimento futuro, cujos detalhes de arquitetura técnica encontram-se especificados na seção 3.3.

Essa estruturação modular permite validar primeiramente a confiabilidade da contagem física no acesso ao Ponto de Encontro na unidade de Cubatão, criando uma base técnica que, após os devidos testes de campo e integrações de rede, poderá ser avaliada para futura adaptação em outras unidades da Unipar, como Santo André (SP), Camaçari (BA) e Bahía Blanca (Argentina).

#### 3.1.3.3 Como a solução proposta deverá ser utilizada

A utilização operacional da solução estrutura-se em quatro etapas cronológicas e envolve a atuação coordenada de quatro perfis de usuários da unidade de Cubatão:
1. Operador de Campo / Colaborador (contingente estimado em cerca de 355 funcionários próprios e 400 terceirizados);
2. Líder de Ponto de Encontro e Brigada de Emergência (equipe responsável pela organização do fluxo nos Pontos de Encontro, apuração complementar em campo e execução de operações de busca e salvamento);
3. Operador do Centro de Controle Operacional (CCO) (profissional encarregado do acompanhamento dos indicadores operacionais e de emergência da planta);
4. Liderança de SSMA (coordenação responsável pela validação final do balanço de evacuação e pela decisão tática sobre o acionamento da brigada).

A jornada de uso compreende tanto o funcionamento local já implementado no protótipo da Sprint 1 quanto o fluxo integrado planejado para a solução completa, observando ainda os protocolos de contingência para situações anômalas:

1. Estado de Rotina (Operação Normal)
Durante a operação normal da fábrica, os trabalhadores próprios e terceirizados registram suas entradas e saídas nas catracas das Portarias P1 e P2, compondo o saldo de referência de pessoas presentes na planta. Nos Pontos de Encontro, o dispositivo de contagem permanece em modo de espera (pausado). No protótipo da Sprint 1 (baseado em Arduino Uno R3), esse estado é sinalizado pelo LED verde aceso e LED vermelho apagado, ocasião em que eventuais movimentações diante do sensor ultrassônico HC-SR04 não incrementam o contador (conforme validado nos casos de teste CT06 e CT07 da seção 3.4.1).

2. Deflagração da Emergência
Diante da detecção de vazamento de cloro ou acionamento de alarme de emergência, inicia-se o protocolo de abandono de área:
- As catracas das Portarias P1 e P2 são liberadas segundo o procedimento interno da Unipar para permitir a evasão rápida;
- O saldo das portarias no instante do alarme é fixado como a população de referência $B$ (na etapa atual do MVP, esse valor pode ser consultado junto ao controle de acesso; na etapa integrada planejada, será congelado automaticamente no início do evento, conforme RN01 e RN02);
- Inicia-se a contagem do prazo interno de 10 minutos definido pela SSMA da Unipar;
- Nos Pontos de Encontro, o módulo de contagem entra em modo de monitoramento ativo. No protótipo atual da Sprint 1, o líder do Ponto de Encontro ativa o monitoramento pressionando o botão físico do dispositivo, o que apaga o LED verde, acende o LED vermelho e habilita a contagem no visor LCD 16x2 (conforme CT01). Na versão conectada planejada, essa ativação também poderá ocorrer de forma remota a partir do disparo do alarme geral.

3. Deslocamento, Acesso em Fila Única e Contabilização no Ponto de Encontro
Ao ouvir o alarme, os colaboradores deslocam-se até o Ponto de Encontro seguro segundo a direção do vento indicada pelas birutas. Ao chegarem ao acesso do Ponto de Encontro, para reduzir erros de leitura causados por oclusão ou passagem simultânea lado a lado, o ingresso é orientado pelo líder de abandono ou por delimitadores físicos (como gradis ou cones) em formato de fila única pelo corredor monitorado (menor que 200 cm de largura).
Conforme cada pessoa passa diante do sensor ultrassônico HC-SR04 (a uma distância inferior a 200 cm), o microcontrolador Arduino Uno R3 detecta a presença, incrementa em uma unidade o total de passagens contabilizadas ($A$), atualiza imediatamente o visor LCD 16x2 (`Total: X`) e emite um aviso sonoro curto (100 ms) no buzzer, fornecendo confirmação local imediata de que a passagem foi registrada (CT02). Para evitar contagens repetidas caso um colaborador caminhe lentamente ou pare temporariamente em frente ao sensor, a lógica de controle mantém o estado ocupado e só libera um novo incremento após o afastamento acima do limiar de 200 cm (CT03 e CT04). Na versão conectada planejada, cada incremento de $A$ será transmitido ao painel central do CCO e da SSMA.

4. Monitoramento do Balanço, Conferência da SSMA e Decisão Tática
Durante a janela de 10 minutos, o líder do Ponto de Encontro (por meio do visor LCD 16x2 local no protótipo atual) e a coordenação do CCO/SSMA (por meio da consolidação dos PEs no painel planejado) acompanham a evolução das passagens contabilizadas ($A$) em comparação com a população de referência ($B$) e o saldo estimado de pendentes ($D = B - A$):
- Caso ocorra a convergência numérica ($D = 0$, ou seja, $A = B$) dentro do prazo interno de 10 minutos: o sistema indica equilíbrio quantitativo entre as passagens contabilizadas nos Pontos de Encontro e a população de referência. Entretanto, como $D = 0$ representa apenas convergência numérica e não garante por si só que não houve erros compensados (como uma passagem duplicada compensando uma ausência), a equipe de SSMA mantém a conferência operacional complementar em campo antes de declarar o encerramento da apuração (RN07);
- Caso o prazo interno de 10 minutos seja atingido com saldo pendente positivo ($D > 0$, ou seja, $A < B$): caracteriza-se estado de alerta crítico (RN06). Como o sistema realiza contagem anônima nos Pontos de Encontro e não identifica nominalmente nem localiza em qual setor interno se encontram os ausentes, a utilidade tática do sistema consiste em quantificar imediatamente o déficit de evacuação e informar quais Pontos de Encontro receberam menor fluxo (indicando possíveis rotas bloqueadas pela pluma de gás). Com base nesse indicador quantitativo e na reconciliação com as lideranças de área, o Gerente de SSMA detém a decisão final sobre o acionamento e a priorização da Brigada de Emergência.

5. Tratamento de Situações Excepcionais e Falhas Operacionais
Para garantir segurança operacional e alinhamento com as Regras de Negócio (RN08 e RN11), a Matriz de Riscos (seção 3.1.5) e a Lista de Materiais (seção 3.1.7), a utilização do sistema contempla protocolos específicos para seis cenários de exceção:
- Contagem nos Pontos de Encontro superior à população de referência ($A > B$, resultando em $D < 0$): situação que pode decorrer de subnotificação prévia na portaria ou de passagens duplicadas nos sensores. Conforme a RN08, o sistema não oculta a divergência nem assume sucesso de evacuação; o balanço é classificado como inconclusivo, exibindo alerta de inconsistência numérica para que a SSMA realize a reconciliação manual;
- Indisponibilidade ou falha de leitura de um sensor: no nível do dispositivo local (protótipo da Sprint 1), caso o sensor HC-SR04 sofra desconexão do pino `ECHO` ou perda de pulso de retorno (timeout de 30 ms retornando distância nula), o firmware ignora a leitura inválida e não gera incrementos falsos no visor LCD 16x2 (conforme validado no caso de teste CT08). No nível sistêmico (RN08), a indisponibilidade de qualquer Ponto de Encontro invalida a consolidação automática global, marcando o balanço como inconclusivo e determinando conferência manual naquele ponto;
- Base das portarias incorreta ou desatualizada: se a população de referência $B$ apresentar inconsistência conhecida (por falha prévia nas catracas P1/P2 ou entrada de emergência não registrada), aplica-se a RN08, classificando o cálculo $D = B - A$ como inconclusivo e utilizando apenas a contagem absoluta $A$ de cada Ponto de Encontro como apoio informativo à conferência manual da SSMA;
- Perda de comunicação de rede: no protótipo da Sprint 1, a operação já é integralmente local no Arduino Uno R3, mantendo a exibição de $A$ no visor LCD 16x2 independentemente de rede externa. Na versão conectada planejada, caso ocorra queda de comunicação entre um Ponto de Encontro e o painel central, o dispositivo continuará contabilizando as passagens localmente no visor LCD para leitura direta do líder do PE, enquanto o painel do CCO/SSMA sinalizará perda de telemetria daquele nó e classificará o balanço automático como inconclusivo até a reconciliação via rádio (RN08);
- Passagem da mesma pessoa mais de uma vez: a permanência contínua diante do sensor é tratada pelo bloqueio lógico de estado ocupado, que exige o retorno da distância a valores iguais ou superiores a 200 cm antes de permitir nova contagem (CT03 e CT04). Já o risco de um colaborador sair do Ponto de Encontro e passar novamente pelo pórtico é mitigado pela organização física do acesso em fila única sob supervisão do líder do PE e, caso ocorra, é tratado como limitação conhecida que exige validação final da SSMA (RN07 e RN11);
- Travessia no sentido contrário (saída pelo acesso de entrada): no protótipo simulado da Sprint 1, que emprega apenas um sensor HC-SR04, o sensor detecta presença sem discriminar o sentido do deslocamento, razão pela qual o fluxo deve ser orientado em sentido único pelo líder do PE. Para tratar estruturalmente essa condição na montagem física do MVP, a Lista de Materiais (seção 3.1.7) especifica dois sensores ultrassônicos HC-SR04 por ponto de controle, dispostos em sequência longitudinal no corredor de passagem: a ordem temporal de acionamento entre o primeiro e o segundo feixe permite distinguir se a pessoa está entrando no Ponto de Encontro (incrementando $A$) ou atravessando no sentido contrário (ignorando ou registrando a saída conforme a regra de operação).

#### 3.1.3.4 Quais os benefícios trazidos pela solução proposta

A adoção da solução proposta tem como propósito gerar benefícios potenciais e resultados esperados para a operação de emergência da Unipar, os quais serão progressivamente validados ao longo das etapas de teste e implantação, distribuindo-se em três eixos corporativos:

1. Apoio à Proteção da Vida e Integridade Física (Resultados Esperados)
- Redução potencial no tempo de apuração preliminar nos Pontos de Encontro: espera-se diminuir o intervalo necessário para obter o total de passagens contabilizadas nos Pontos de Encontro, permitindo que a liderança de SSMA identifique mais rapidamente a existência de discrepâncias numéricas dentro do prazo interno de 10 minutos;
- Apoio quantitativo à decisão de mobilização da Brigada de Emergência: embora a contagem anônima não indique a localização exata nem a identidade de eventuais ausentes, o indicador de saldo pendente ($D = B - A$) e o volume de chegadas por Ponto de Encontro fornecem subsídios objetivos para que a SSMA avalie a magnitude da pendência e combine esse dado com o relato dos líderes de área, evitando acionamentos baseados exclusivamente na demora de consolidação das listas em papel;
- Organização disciplinada do fluxo de entrada nos Pontos de Encontro: diferentemente de uma entrada desordenada, o projeto prevê o direcionamento dos colaboradores em fila única no acesso monitorado pelos sensores ultrassônicos. Embora exija controle de fila na chegada ao Ponto de Encontro para elevar a precisão da contagem, esse arranjo físico substitui a necessidade de parada completa de cada trabalhador para assinatura ou resposta individual à chamada em prancheta logo no pórtico de entrada.

2. Eficiência Operacional e Apoio à Gestão de Crise (Resultados Esperados)
- Complementação digital ao processo de conferência em campo: o sistema atua como camada automatizada de contagem rápida para reduzir a dependência exclusiva de anotações manuais em papel sob ruído de sirenes, preservando a conferência complementar e a decisão final da equipe de SSMA (RN07);
- Consolidação ágil de indicadores de evacuação: na etapa atual (Sprint 1), o visor LCD 16x2 fornece ao líder do Ponto de Encontro o total imediato de passagens sem necessidade de soma manual; na etapa integrada planejada, espera-se centralizar as contagens de todos os PEs em uma única tela para o CCO e a SSMA;
- Aderência ao prazo interno de 10 minutos da SSMA: potencial de acelerar a obtenção do primeiro balanço quantitativo da evacuação, auxiliando a gestão de crise a cumprir a diretriz temporal interna da Unipar;
- Apoio à avaliação de encerramento de simulados: a disponibilidade imediata do total de passagens contabilizadas nos Pontos de Encontro tende a agilizar a etapa de reconciliação final conduzida pela SSMA após exercícios simulados de abandono de área.

3. Governança, Conformidade Legal e Cultura de Segurança (Resultados Esperados)
- Registro estruturado de eventos para análise pós-incidente e simulados: a geração de registros temporais de contagem nos Pontos de Encontro cria um histórico quantitativo que pode auxiliar a SSMA na avaliação do desempenho de simulados e na identificação de Pontos de Encontro com maior demanda de fluxo;
- Subsídio para revisão do Plano de Ação de Emergência (PAE): a comparação entre os tempos de chegada nos diferentes Pontos de Encontro em exercícios periódicos permite estudar gargalos de deslocamento na planta;
- Alinhamento às normas de segurança industrial: concepção coerente com as diretrizes gerais de resposta a emergências da NR-20 e da NR-23 (BRASIL, 2022), respeitando as restrições de instalação em áreas classificadas ao concentrar o hardware nos Pontos de Encontro;
- Aderência aos princípios da LGPD (Lei nº 13.709/2018): a opção por contagem numérica anônima nos Pontos de Encontro, sem rastreamento contínuo de localização individual, favorece a conformidade com a legislação de proteção de dados quando combinada às práticas de governança previstas no projeto, incluindo finalidade restrita à salvaguarda da vida (Art. 7º, inciso VII), minimização de dados coletados, controle de acesso restrito aos operadores autorizados de SSMA/CCO (RN10), segurança no armazenamento e observância de prazos formais de retenção e descarte (BRASIL, 2018).

#### 3.1.3.5 Qual será o critério de sucesso e qual medida será utilizada para o avaliar

A avaliação da solução proposta estrutura-se em quatro critérios de sucesso técnicos e operacionais, com métricas quantificáveis e procedimentos de validação compatíveis tanto com o protótipo atual (offline, baseado em Arduino Uno R3) quanto com as evoluções planejadas, assegurando total alinhamento com as Regras de Negócio (seção 3.3.2), a Lista de Materiais (seção 3.1.7) e os Casos de Teste do Protótipo (seção 3.4.1).

1. Tempo de Contabilização de Passagens no Ponto de Encontro
- Definição: Redução proporcional no tempo necessário para contabilizar a entrada de um grupo de pessoas no Ponto de Encontro por meio do dispositivo automatizado em fila única, comparativamente ao tempo gasto na conferência nominal por lista impressa, mantendo a projeção de operação dentro do prazo interno de 10 minutos definido pela SSMA da Unipar.
- Métrica / Indicador: Redução Percentual do Tempo de Contabilização ($\Delta T\%$) e Tempo Projetado de Contabilização por Ponto de Encontro ($T_{proj}$).
- Meta Numérica: Redução mínima de 60% no tempo de contabilização por lote amostral em relação à chamada manual por lista ($\Delta T\% \ge 60\%$), com vazão unitária no acesso em fila única que permita processar a demanda média de cada Ponto de Encontro em tempo inferior ou igual a 10 minutos ($T_{proj} \le 10\text{ min}$).
- Expressão de Avaliação:

$$\Delta T\% = \left( \frac{T_{manual,n} - T_{sensor,n}}{T_{manual,n}} \right) \times 100 \ge 60\%$$

- Método de Validação Empírica (com alternativa para ausência de simulado em escala real): Caso seja realizado um simulado oficial na planta de Cubatão durante o projeto, os tempos serão cronometrados em campo junto à equipe de SSMA. Caso não seja viável mobilizar toda a população de 755 pessoas da fábrica para um simulado real, a validação será realizada por meio de ensaio controlado em escala reduzida e projeção analítica de vazão:
  1. Amostra e repetições: grupo controlado de $n = 20$ voluntários executando $k = 3$ rodadas de passagem em fila única pelo pórtico equipado com o protótipo (Arduino Uno R3 + HC-SR04), comparando o tempo total de passagem e registro no LCD ($T_{sensor,20}$) com o tempo médio de chamada e anotação manual em prancheta para os mesmos 20 indivíduos ($T_{manual,20}$);
  2. Projeção de capacidade para a planta: a partir do tempo médio por pessoa na fila única ($\bar{t}_{unit} = T_{sensor,20} / 20$), calcula-se a vazão efetiva do pórtico ($Q = 60 / \bar{t}_{unit}$ pessoas/minuto) e verifica-se a quantidade necessária de pórticos ou Pontos de Encontro operando em paralelo para absorver 755 pessoas dentro da janela de 10 minutos (considerando o tempo prévio de caminhada até o PE).

2. Acurácia da Contagem de Passagens e Decomposição de Erros do Sensor
- Definição: Fidelidade quantitativa entre o número real de eventos de passagem pelo acesso monitorado do Ponto de Encontro e os registros contabilizados pelo dispositivo, avaliando separadamente cada modo de falha física ou lógica.
- Revisão Crítica da Meta de Acurácia: Uma meta genérica de 95% de acurácia global mostrar-se-ia insuficiente para o contexto de segurança da Unipar, pois admitiria um erro residual de até 5%, o que em um universo de 755 pessoas corresponderia a cerca de 38 pessoas contabilizadas incorretamente (podendo mascarar ausências reais ou gerar dezenas de falsos alertas). Por essa razão, estabelece-se para o protótipo em condições controladas de fila única uma meta estrita de acurácia por evento igual ou superior a 99% ($TAC_{evento} \ge 99\%$, erro máximo de 1%), associada à obrigatoriedade da conferência complementar pela SSMA (RN07) sempre que houver suspeita de anomalia de fluxo.
- Métricas / Indicadores Decompostos: Em vez de utilizar apenas a diferença líquida entre total real e total exibido (a qual permitiria que um falso positivo anulasse matematicamente um falso negativo), o critério mede separadamente cinco tipos de erro em relação ao total de passagens reais de entrada ($N_{entradas\_reais}$):
  - Falsos Positivos por ruído ou interferência ($FP$): incrementos gerados sem passagem humana real diante do sensor;
  - Falsos Negativos de passagem individual ($FN$): pessoa que atravessa individualmente o feixe na faixa de detecção (< 200 cm) sem ser contabilizada;
  - Duplicidades por permanência ou oscilação ($DUP$): incrementos extras gerados por uma única pessoa que permanece parada ou caminha lentamente diante do sensor;
  - Erros no Sentido da Passagem ($ESP$): incrementos indevidos (ou descontos incorretos) provocados por pessoa atravessando no sentido contrário (saída pelo corredor de entrada);
  - Erros por Pessoas Passando Juntas ($PPJ$): subcontagem decorrente de duas ou mais pessoas atravessando simultaneamente lado a lado ou coladas sem o espaçamento mínimo de rearmamento do sensor.
- Expressões de Avaliação:

$$TAC_{evento} = \left( 1 - \frac{FP + FN + DUP + ESP + PPJ}{N_{entradas\_reais}} \right) \times 100$$

$$T_{sub} = \left( \frac{FN + PPJ}{N_{entradas\_reais}} \right) \times 100 \quad \text{e} \quad T_{sobre} = \left( \frac{FP + DUP + ESP}{N_{entradas\_reais}} \right) \times 100$$

onde $TAC_{evento}$ é a Taxa de Acurácia por Evento (meta $\ge 99\%$ no protocolo nominal em fila única e $\ge 90\%$ nos ensaios de estresse de borda), $T_{sub}$ é a Taxa de Subcontagem (meta $\le 1\%$ em fila única) e $T_{sobre}$ é a Taxa de Sobrecontagem (meta $\le 1\%$ em fila única).
- Protocolo Experimental (Amostra, Repetições e Condições de Teste):
  - Amostra e repetições para validação nominal: $k = 5$ baterias independentes de $n = 20$ passagens individuais em fila única, totalizando $N_{entradas\_reais} = 100$ passagens auditadas;
  - Amostra e repetições para validação de anomalias (estresse): 4 baterias específicas com 10 repetições cada: (i) parada estática de 5 segundos diante do sensor para medir $DUP$; (ii) operação do sensor sem passagens por 5 minutos para medir $FP$; (iii) travessia em sentido contrário para medir $ESP$ (avaliando a evolução do protótipo de 1 sensor na Sprint 1 para o par de sensores HC-SR04 previsto na BOM); e (iv) passagem de duplas lado a lado/coladas para quantificar $PPJ$;
  - Condições de contorno padronizadas: largura útil do corredor de passagem delimitada em até 150 cm (dentro do alcance configurado de 200 cm do HC-SR04), sensor instalado na altura média do tronco (aprox. 1,0 m a 1,2 m do solo), velocidade de caminhada normal ($0,8\text{ m/s}$ a $1,5\text{ m/s}$), espaçamento mínimo de $1,0\text{ m}$ entre pessoas consecutivas na fila única e verificação de referência (ground truth) por observador independente e gravação em vídeo.

3. Tempo de Resposta Local (Protótipo Atual Offline) e Latência de Atualização Remota (Etapa Conectada Planejada)
- Definição e Adequação ao Estágio do Protótipo: Como o protótipo desenvolvido na Sprint 1 opera de forma local e offline no Arduino Uno R3 (sem conectividade Wi-Fi ou MQTT implementada nesta fase), não é tecnicamente cabível testar latência de rede no artefato atual. Dessa forma, o critério de desempenho temporal é desdobrado em duas medidas distintas conforme a fase do projeto:
  - Medida 3A — Tempo de Resposta Local no Dispositivo ($T_{local}$, aplicável e testável já nas Sprints 1 e 2): intervalo entre a entrada do objeto/pessoa na faixa de detecção (< 200 cm) do sensor HC-SR04 e a atualização do contador no visor LCD 16x2 acompanhada do acionamento do buzzer de 100 ms;
  - Medida 3B — Latência de Atualização do Painel Remoto ($L_{painel}$, aplicável a partir da implementação da conectividade nas Sprints 3 e 4): intervalo entre o registro da passagem no microcontrolador e a atualização do indicador correspondente na interface de monitoramento do CCO/SSMA.
- Metas Numéricas e Expressões de Avaliação:

$$T_{local} = t_{feedback\_LCD} - t_{deteccao\_sensor} \le 0,5\text{ s}$$

$$L_{painel} = t_{painel} - t_{deteccao\_sensor} \le 3,0\text{ s}$$

- Método de Validação Empírica: Na Sprint 1, $T_{local}$ é verificado na simulação Wokwi e em bancada pela resposta imediata do visor LCD 16x2 e do buzzer a cada ciclo do loop principal (que possui atraso de estabilização de 100 ms no código-fonte atual). Nas sprints seguintes, com a adição do módulo de comunicação, $L_{painel}$ será medido por meio da diferença entre os registros temporais de envio na porta serial do microcontrolador e de recebimento na aplicação receptora em 50 eventos consecutivos de passagem.

4. Conformidade Funcional do Protótipo nos Casos de Teste Executados (CT01 a CT08)
- Definição: Verificação objetiva do comportamento lógico e elétrico do protótipo implementado na Sprint 1 (Arduino Uno R3, sensor ultrassônico HC-SR04, botão de controle, LED verde, LED vermelho, buzzer com potenciômetro e visor LCD 16x2 I2C) perante os cenários funcionais e de falha especificados para o nó de Ponto de Encontro.
- Métrica / Indicador: Taxa de Conformidade nos Casos de Teste do Protótipo ($TC_{CT}$).
- Meta Numérica e Status de Validação: A meta de engenharia consiste em atingir conformidade nos 8 casos de teste estruturados ($CT01$ a $CT08$). Registra-se que, na Sprint 1, os casos $CT01$ a $CT08$ foram integralmente executados e verificados em ambiente de simulação no simulador Wokwi (conforme documentado e evidenciado na seção 3.4.1), restando para as próximas etapas a reexecução física em bancada com os componentes reais da Lista de Materiais e com o segundo sensor HC-SR04, não se declarando aprovação definitiva de campo antes da conclusão de todos os testes físicos integrados.
- Matriz de Casos de Teste Realmente Executados no Protótipo da Sprint 1 (alinhada exatamente à seção 3.4.1):
  - CT01 (Controle do monitoramento): pressionamento válido do botão com o sistema em espera; resultado verificado: LED vermelho acende, LED verde apaga e o visor LCD 16x2 exibe `Total: 0`, ativando o monitoramento sem alterar indevidamente o contador;
  - CT02 (Detecção de presença): posicionamento do sensor HC-SR04 em 148 cm (< 200 cm) com monitoramento ativo; resultado verificado: visor LCD 16x2 atualiza para `Total: 1` e o buzzer emite aviso sonoro de 100 ms, contabilizando a primeira presença uma única vez;
  - CT03 (Proteção contra duplicidade): manutenção do sensor HC-SR04 em 148 cm sem afastamento; resultado verificado: visor LCD 16x2 mantém `Total: 1`, comprovando que a permanência contínua do mesmo objeto/pessoa não gera contagens repetidas;
  - CT04 (Liberação para nova contagem): alteração da distância no HC-SR04 para 321 cm (> 200 cm) seguida de nova aproximação para 40 cm (< 200 cm); resultado verificado: o total permanece em `1` durante o afastamento a 321 cm e incrementa para `Total: 2` com novo aviso sonoro ao retornar para 40 cm;
  - CT05 (Leitura fora da área de interesse): sensor HC-SR04 posicionado em 376 cm (> 200 cm); resultado verificado: visor LCD 16x2 permanece em `Total: 2` e o buzzer não é acionado;
  - CT06 (Pausa do sistema): novo pressionamento válido do botão durante o monitoramento; resultado verificado: LED verde acende, LED vermelho apaga, buzzer permanece desligado e o valor `Total: 2` é preservado no visor LCD 16x2;
  - CT07 (Entrada ignorada durante pausa): alteração da distância do HC-SR04 para 74 cm (< 200 cm) enquanto o sistema está pausado; resultado verificado: LED verde permanece aceso e o visor LCD 16x2 mantém `Total: 2`, ignorando passagens fora do modo ativo;
  - CT08 (Falha de leitura do sensor): simulação de falha física com o fio do pino `ECHO` do HC-SR04 desconectado (distância configurada em 103 cm, gerando timeout de 30 ms sem pulso de retorno e leitura `0.00` no monitor serial); resultado verificado: o firmware trata a leitura nula como inválida, o visor LCD 16x2 permanece em `Total: 0` e o buzzer não é acionado, evitando falsos positivos por falha de cabeamento.
- Expressão de Avaliação:

$$TC_{CT} = \left( \frac{CT_{conformes}}{CT_{planejados}} \right) \times 100 \quad (CT_{planejados} = 8)$$
	
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
_BOM (Bill of Material) pode ser definido como uma lista completa de materiais, que detalha todos os itens necessários para construir, fabricar ou reparar um produto. Deve-se preencher o template fornecido.




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

BRASIL. Lei nº 13.709, de 14 de agosto de 2018. Lei Geral de Proteção de Dados Pessoais (LGPD). Brasília, DF: Presidência da República, 2018. Disponível em: https://www.planalto.gov.br/ccivil_03/_ato2015-2018/2018/lei/l13709.htm. Acesso em: 20 fev. 2026.

BRASIL. Ministério do Trabalho e Previdência. Norma Regulamentadora nº 20 (NR-20): Segurança e Saúde no Trabalho com Inflamáveis e Combustíveis. Brasília, DF: MTP, 2022. Disponível em: https://www.gov.br/trabalho-e-emprego/pt-br/acesso-a-informacao/participacao-social/conselhos-e-orgaos-colegiados/comissao-tripartite-partitaria-permanente/normas-regulamentadora/normas-regulamentadoras-vigentes/norma-regulamentadora-no-20-nr-20. Acesso em: 20 fev. 2026.

BRASIL. Ministério do Trabalho e Previdência. Norma Regulamentadora nº 23 (NR-23): Proteção Contra Incêndios. Brasília, DF: MTP, 2022. Disponível em: https://www.gov.br/trabalho-e-emprego/pt-br/acesso-a-informacao/participacao-social/conselhos-e-orgaos-colegiados/comissao-tripartite-partitaria-permanente/normas-regulamentadora/normas-regulamentadoras-vigentes/norma-regulamentadora-no-23-nr-23. Acesso em: 20 fev. 2026.

CETESB — COMPANHIA AMBIENTAL DO ESTADO DE SÃO PAULO. Ficha de Informação Toxicológica (FIT) e Ficha de Informação de Produto Químico: Cloro. São Paulo: CETESB, 2023. Disponível em: https://cetesb.sp.gov.br/emergencias-quimicas/. Acesso em: 20 fev. 2026.

FUNDACENTRO — FUNDAÇÃO JORGE DUPRAT FIGUEIREDO DE SEGURANÇA E MEDICINA DO TRABALHO. Programa de Proteção Respiratória: Recomendações, Seleção e Uso de Respiradores. 4. ed. São Paulo: Fundacentro, 2016.

NIOSH — NATIONAL INSTITUTE FOR OCCUPATIONAL SAFETY AND HEALTH. NIOSH Pocket Guide to Chemical Hazards: Chlorine (CAS 7782-50-5). Atlanta, GA: Centers for Disease Control and Prevention (CDC), 2019. Disponível em: https://www.cdc.gov/niosh/npg/npgd0115.html. Acesso em: 20 fev. 2026.

UNIPAR. Termo de Abertura do Projeto de Inovação (TAPI) — Módulo 4: Sistema IoT de Apoio à Evacuação e Segurança Operacional (Unidade Cubatão). São Paulo: Inteli / Unipar Carbocloro S.A., 2026. Documento interno de projeto.

UNIPAR CARBOCLORO S.A. Relatório Anual de Sustentabilidade e Operações Industriais. São Paulo: Unipar, 2023. Disponível em: https://ri.unipar.com/. Acesso em: 20 fev. 2026.

UNIPAR CARBOCLORO S.A. Notas técnicas e levantamento de requisitos operacionais registrados em reunião de alinhamento (kickoff) com a equipe de SSMA da unidade de Cubatão (SP). Cubatão: Unipar / Inteli, fev. 2026. Comunicação técnica oral e documental aos autores.

