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

A unidade fabril da Unipar localizada no polo petroquímico e industrial de Cubatão (SP) constitui uma das mais estratégicas instalações de cloro-álcalis da América Latina, respondendo pela fabricação contínua de insumos químicos vitais para o saneamento básico, tratamento de água e diversas cadeias produtivas, tais como cloro gasoso e liquefeito, ácido clorídrico, soda cáustica e hipoclorito de sódio. A planta opera sob regime ininterrupto e abriga diariamente uma população flutuante de aproximadamente 755 pessoas, contingente composto por cerca de 355 colaboradores próprios e aproximadamente 400 trabalhadores terceirizados. Estes últimos dedicam-se a intervenções especializadas de montagem mecânica, manutenção eletromecânica industrial, logística de granel e prestação de serviços continuados de apoio operacional. Essa expressiva densidade populacional encontra-se dispersa ao longo de um parque industrial extenso e complexo, caracterizado por células eletrolíticas, vasos de pressão sob alta temperatura, bacias de contenção de químicos e extensas redes de tubovias.

Nesse ambiente operacional de elevada periculosidade, o cenário de maior severidade potencial corresponde à perda de contenção com vazamento de cloro gasoso (Cl2) ou a incêndios industriais que envolvam compostos clorados. O cloro gasoso é um agente químico asfixiante, fortemente oxidante e altamente corrosivo, apresentando massa molar de 70,9 g/mol e densidade relativa aproximadamente 2,5 vezes maior do que a do ar atmosférico. Em função dessa elevada massa específica, o cloro liberado acidentalmente comporta-se como um gás pesado, rastejando junto ao solo e concentrando-se em áreas de menor cota topográfica, galerias subterrâneas de cabos, canaletas pluviais e bacias de contenção antes de sofrer dispersão turbulenta sob a ação dos ventos.

Sob o aspecto toxicológico, o cloro gasoso impõe limites de tolerância extremamente estritos à fisiologia humana. O Limite Imediatamente Perigoso à Vida ou à Saúde (IDLH, da sigla em inglês Immediately Dangerous to Life or Health) é fixado em meros 10 ppm (partes por milhão). Exposições a frações volumétricas moderadas, entre 15 e 30 ppm, provocam tosse intensa, irritação aguda e queimação nas vias aéreas superiores, além de graves lesões nas mucosas oculares. Concentrações atmosféricas superiores a 50 ppm induzem a quadros de espasmo laríngeo, edema pulmonar não cardiogênico agudo e parada cardiorrespiratória em poucos minutos. Desse modo, em ocorrências que envolvam dispersão de cloro, a velocidade de evacuação e a confirmação tempestiva de ausência de vítimas nas áreas sob risco representam a variável determinante entre a preservação da integridade física dos trabalhadores e o desencadeamento de fatalidades em larga escala.

Embora a Unipar mantenha rígidos padrões de excelência operacional e conformidade técnica, os procedimentos convencionais de resposta a emergências esbarram em um paradoxo estrutural entre a segurança física de evasão e a telemetria do controle de acesso. Em condições rotineiras de produção, o fluxo de entrada e saída é registrado por meio de catracas eletrônicas acionadas por crachás RFID posicionadas nas portarias P1 e P2 e nos acessos a setores operacionais. Contudo, assim que o alarme geral de emergência é acionado (seja por detectores automáticos de gases tóxicos ou pelo acionamento de botoeiras industriais de emergência), as diretrizes da Norma Regulamentadora NR-23 e as práticas consolidadas de engenharia de segurança determinam a liberação mecânica imediata de todas as catracas da planta (modo de pânico com queda de braços ou giro desimpedido). Essa medida visa garantir a evasão rápida e contínua das 755 pessoas, prevenindo o estrangulamento do fluxo humano, pisoteamentos e quedas nos acessos principais.

Entretanto, essa liberação física gera como efeito colateral um apagão instantâneo de dados de telemetria. Ao transpor os bloqueios sem a validação eletrônica dos crachás, o fluxo de evacuação deixa de produzir registros no sistema de controle de acesso. Consequentemente, no momento mais crítico do incidente químico, o Centro de Controle Operacional (CCO) e a liderança de SSMA (Saúde, Segurança e Meio Ambiente) perdem a visibilidade da distribuição espacial da população industrial, ficando sem meios informatizados para determinar quem já transpôs os limites da planta, quem está a caminho de zonas seguras e quem ainda permanece retido no interior das edificações e áreas de processo.

Para suprir essa ausência de informações em tempo real, o protocolo atual apoia-se na conferência manual nos Pontos de Encontro (PEs), conduzida por líderes de abandono de área e brigadistas por meio de listas impressas em pranchetas de papel. Essa metodologia analógica manifesta falhas críticas e intoleráveis em um cenário de crise química:
- Desatualização cadastral crônica: as listas impressas no início da jornada não refletem a dinâmica diária de visitantes esporádicos, prestadores de serviços terceirizados com crachás provisórios ou permutas pontuais de turno ocorridas poucas horas antes do evento.
- Inviabilidade da comunicação auditiva: o procedimento de chamada nominal oral torna-se virtualmente ineficaz diante da poluição sonora severa provocada por sirenes industriais de alta potência, sopradores, ruídos de despressurização de vapor e o estresse generalizado dos evacuados.
- Evasão cruzada em decorrência da direção dos ventos: a regra fundamental de salvaguarda em fugas de gases pesados exige que os trabalhadores se desloquem em trajetória perpendicular ou oposta à direção apontada pelas birutas. Dessa forma, colaboradores lotados em determinada unidade de processo comumente evacuam para Pontos de Encontro distintos daqueles previamente designados em suas listas setoriais teóricas. Como os líderes de cada PE atuam isoladamente e sem ferramentas digitais integradas, o processo resulta em falsas constatações de ausência em um ponto e contagens duplicadas ou registros dispersos em outros.
- Degradação e extravio do suporte físico: as pranchetas e folhas de papel estão expostas a intempéries climáticas (chuva, ventania), respingos de substâncias químicas e ao próprio tumulto da evacuação, acarretando rasuras, perda de folhas e lentidão acentuada na contagem.

Esse método arcaico entra em conflito frontal com a Regra de Ouro e o SLA mandatório de SSMA da Unipar: qualquer colaborador que não tenha sua presença confirmada em um Ponto de Encontro em até 10 minutos após o acionamento do alarme é classificado formalmente como caso crítico, caracterizando potencial vítima inconsciente ou aprisionada e exigindo a imediata deflagração de operação tática de busca e resgate.

Na prática operacional, a conferência manual de cerca de 755 indivíduos por meio de chamadas nominais em papel consome rotineiramente entre 20 e 35 minutos para alcançar uma consolidação preliminar. Esse descompasso temporal coloca a gerência de SSMA diante de um dilema operacional gravíssimo: esgotado o prazo regulamentar de 10 minutos sem a consolidação do censo, a liderança é impelida a mobilizar a Brigada de Emergência para varreduras cegas por toda a extensão fabril. 

Os brigadistas, utilizando vestimentas pesadas de proteção química encapsulada (nível A ou B) e equipamentos autônomos de respiração com suprimento limitado a cerca de 20 a 30 minutos de autonomia útil de ar, são lançados em áreas com suspeita de atmosfera letal de cloro sem informações precisas sobre onde buscar ou mesmo se de fato existem vítimas reais. Em diversas circunstâncias, essa incerteza expõe os próprios socorristas a riscos extremos de contaminação e estresse térmico para procurar colaboradores que já haviam deixado a área de perigo, mas cuja confirmação não pôde ser computada a tempo em virtude da lentidão do processo manual.

#### 3.1.3.2 Qual a solução proposta (visão de negócios)

Sob o prisma de gestão estratégica de SSMA, governança corporativa e eficiência operacional, a solução proposta constitui uma Plataforma Digital de Balanço e Confirmação de Evacuação Industrial em Tempo Real. O sistema não tem como premissa substituir os equipamentos de controle de acesso ou os sistemas prediais legados de detecção de incêndio, mas conectá-los a uma malha de Internet das Coisas (IoT) industrial estrategicamente posicionada, transformando um processo vulnerável e estritamente manual em uma operação orientada a telemetria instantânea e balanço de fluxo.

A base teórica e matemática da arquitetura proposta fundamenta-se no Princípio da Conservação de Fluxo Populacional aplicado a Zonas Agregadas de Evacuação:
- População Base Inicial Congelada (B): no instante exato do acionamento do alarme de emergência, o sistema executa um congelamento digital (snapshot) da base de colaboradores presentes na planta. Esse número é obtido a partir dos registros de crachá consolidados pelas catracas de controle de acesso rotineiro das Portarias P1 e P2 (saldo de entradas ativas menos saídas efetuadas até aquele instante), definindo com exatidão a população total em risco (aproximadamente 755 pessoas, entre trabalhadores próprios e terceiros).
- População Confirmada nos Pontos de Encontro (A): fluxo cumulativo de chegadas registrado de forma ininterrupta e automatizada pelos nós de sensoriamento IoT instalados nos acessos dos Pontos de Encontro (PEs) e portais de evacuação.
- População Pendente de Confirmação (D): contingente de pessoas cujo paradeiro seguro ainda não foi atestado pelo sistema, calculado em tempo real pela equação de balanço dinâmico:

$$D = B - A$$

No instante inicial da emergência ($t = 0$), constata-se $A = 0$ e $D = B$. Conforme os trabalhadores alcançam as áreas seguras dos Pontos de Encontro e transpõem as zonas de detecção dos nós de sensoriamento, a contagem de $A$ é sucessivamente incrementada, resultando na convergência decrescente de $D$ em direção a zero.

A presente arquitetura atende estritamente à restrição mandatória disposta no Termo de Abertura do Projeto de Inovação (TAPI), a qual veda categoricamente o uso de sistemas de localização contínua de alta precisão em ambientes internos (indoor tracking ou RTLS contínuo por meio de triangulação UWB, Bluetooth Low Energy ativo ou Wi-Fi por crachá eletrônico individualizado). A exclusão do indoor tracking contínuo alinha-se a imperativos técnicos, financeiros e de governança:
1. Viabilidade em Áreas Classificadas: o complexo de cloro-soda de Cubatão possui extensas zonas com atmosferas potencialmente explosivas (Zonas 1 e 2, conforme NR-20 e ABNT NBR IEC 60079). A implantação de uma infraestrutura massiva de antenas ativas e o fornecimento de crachás emissores contínuos com baterias para todo o contingente operacional exigiriam certificação de segurança intrínseca (Ex ia/Ex ib). Tal exigência implicaria custos de implementação e manutenção impraticáveis, além de alto risco de indisponibilidade em ambientes industriais agressivos.
2. Conformidade com a LGPD e Relações de Trabalho: o monitoramento ininterrupto da trajetória física dos colaboradores durante suas jornadas cria passivos regulatórios à luz da Lei Geral de Proteção de Dados Pessoais (Lei nº 13.709/2018) e resistência sindical quanto à vigilância indevida. A abordagem por zonas agregadas e contagem não intrusiva em pontos de passagem respeita o princípio da necessidade e minimização de dados, utilizando os registros unicamente para a salvaguarda da vida humana em situações críticas de emergência (Artigo 7º, inciso VII, da LGPD).
3. Eficiência Focada na Decisão de Crise: para a coordenação de emergência, a informação essencial não é o rastreamento individual dentro de prédios, mas a validação numérica e inequívoca de que os colaboradores atingiram os Pontos de Encontro seguros dentro da janela regulamentar.

A entrega de valor de negócio consolida-se em um Dashboard Centralizado disponibilizado no CCO e na sala de comando de SSMA. Essa interface analítica fornece:
- A curva de convergência da evacuação, apresentando em tempo real a taxa instantânea de esvaziamento ($dA/dt$) e a curva de amortização de pendentes ($D$);
- O cronômetro regressivo vinculado ao SLA de 10 minutos, gerando alertas visuais progressivos conforme o tempo avança;
- O balanço de ocupação desagregado por Ponto de Encontro, possibilitando ao CCO identificar se algum PE específico está recebendo uma sobrecarga atípica ou se encontra-se deserto, o que indica rotas de fuga bloqueadas pela pluma de cloro;
- A correlação cruzada entre os colaboradores pendentes e seus respectivos setores de trabalho de rotina (congelados na base $B$), permitindo delimitar os quadrantes prioritários para intervenção antes que a janela de 10 minutos seja extrapolada.

Em termos de estratégia evolutiva de engenharia, a solução é delineada como um Produto Mínimo Viável (MVP) cujo escopo na Sprint 1 concentra-se na validação do nó de confirmação e contagem automatizada nos pontos de encontro. O hardware do protótipo é estruturado em torno do microcontrolador ESP32 acoplado a sensores de passagem/presença, display e sinalizadores de retorno visual, associado à implementação de rotinas de debouncing e persistência. Essa base tecnológica padronizada e modular, ancorada em protocolos abertos da indústria (MQTT, JSON e REST), garante que a solução validada na planta de Cubatão apresente total interoperabilidade e escalabilidade para as demais unidades do Grupo Unipar, abrangendo as fábricas de Santo André (SP), Polo Petroquímico de Camaçari (BA) e Bahía Blanca (Argentina).

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

_Incluir as principais referências de seu projeto, para que seu parceiro possa consultar caso ele se interessar em aprofundar. Um exemplo de referência de livro e de site: <br>
LUCK, Heloisa. Liderança em gestão escolar. 4. ed. Petrópolis: Vozes, 2010. <br>
SOBRENOME, Nome. Título do livro: subtítulo do livro. Edição. Cidade de publicação: Nome da editora, Ano de publicação. <br>
Disponível em: https://adalove.inteli.edu.br/feed. Acesso em: 1 out. 2023 <br>
Disponível em: LINK DO SITE. Acesso em: Dia Mês Ano_
