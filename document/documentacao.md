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

A Unipar opera uma planta química em Cubatão (SP), onde vazamentos de cloro ou incêndios exigem abandono de área e conferência rápida nos Pontos de Encontro (PEs). Segundo o contexto operacional fornecido ao projeto, a população de referência é de aproximadamente 755 pessoas, sendo 355 colaboradores próprios e 400 terceirizados. Esses valores orientam o dimensionamento preliminar; a população de cada emergência depende do saldo efetivo das portarias.

No alarme, a liberação das catracas permite a evasão, mas interrompe o registro individual das passagens. A chamada manual nos PEs dificulta a consolidação pelo Centro de Controle Operacional (CCO). A regra interna informada pela Unipar determina que pessoas não confirmadas em até dez minutos após o alarme sejam tratadas como casos críticos, com acionamento imediato da brigada. Esse prazo é uma diretriz do parceiro, não um prazo estabelecido pela NR-23.

O cloro é tóxico, mais denso que o ar e não inflamável, embora seja um forte oxidante (NIOSH, 2019). Seu risco tóxico não caracteriza, por si só, uma área com atmosfera explosiva. A NR-20 trata de inflamáveis e combustíveis; sua aplicação depende das substâncias e atividades presentes. A classificação de áreas e a adequação dos equipamentos dependem de avaliação técnica específica. A NR-23 exige condições de abandono rápido e seguro, sem obstrução das passagens (BRASIL, 2025; BRASIL, 2022).

**Rastreabilidade das informações internas:** população, procedimento de portaria, SLA e restrição do TAPI foram fornecidos no contexto do projeto. O kickoff ocorreu em **16/10/2026**, conforme confirmação de Arthur Davi da Silva Rodrigues em 23/10/2026. A ata e a versão/data do TAPI ainda não estão disponíveis no repositório. Não se atribuem esses dados operacionais ao relatório público de sustentabilidade.

#### 3.1.3.2 Qual a solução proposta (visão de negócios)

Propõe-se apoiar a SSMA com contagem quantitativa e anônima nos acessos aos PEs, sem rastreamento contínuo de alta precisão em ambientes internos. No modelo integrado futuro, o saldo das Portarias P1/P2 será congelado no alarme como população inicial `B`. Nesta documentação, **`A` significa a quantidade estimada de pessoas atualmente nos PEs: entradas somadas e saídas descontadas**, e não o total histórico de chegadas. O saldo `D = B - A` apoiará a apuração de pendências, preservando a conferência humana: igualdade numérica não identifica pessoas nem garante que todos estejam seguros.

Na Sprint 1, o protótipo Wokwi utiliza Arduino Uno e **dois sensores HC-SR04**, um para entrada e outro para saída, LCD, buzzer e LEDs. O botão apenas alterna os LEDs e **não pausa a contagem**. A detecção usa sensores dedicados a cada sentido; não há algoritmo implementado de direção pela ordem de acionamento de dois feixes. A solução futura prevê ESP32. Dashboard, comunicação em rede, integração às portarias, registros de horário, histórico e alerta automático ao CCO/brigada ainda são funcionalidades futuras. A seção 3.3.8 detalha os limites e o modelo técnico; a seção 3.4.1 registra CT01–CT10.

#### 3.1.3.3 Como a solução proposta deverá ser utilizada

A jornada prevista compreende **cinco etapas**:

1. **Rotina:** os registros de crachá nas portarias sustentam o saldo da planta; o controle agregado por zonas é uma integração prevista, sem localização contínua individual. O protótipo local permanece contando nos dois estados dos LEDs.
2. **Alarme:** as catracas são liberadas conforme o procedimento da Unipar. No sistema integrado futuro, serão congelados `B` e o instante inicial do evento. O botão atual não inicia uma emergência nem zera o contador.
3. **Chegada e saída nos PEs:** os líderes orientam as passagens pelos acessos monitorados. Cada entrada válida incrementa o total local e cada saída válida o reduz, com indicação no LCD e buzzer. A quantidade de acessos deve ser dimensionada para evitar retenção, conforme a seção 3.3.8.
4. **Conferência e resposta:** atualmente, a leitura é local e a consolidação depende das equipes. Futuramente, o CCO acompanhará `D`; se `D > 0` aos dez minutos, haverá alerta automático para acionamento imediato da brigada conforme a regra interna. A SSMA coordena as ações. Baixo fluxo **pode indicar um problema que precisa ser investigado**, sem permitir concluir que uma rota está bloqueada.
5. **Contingência e reconciliação:** falha de sensor, referência inconsistente, saída não registrada ou perda de comunicação na versão futura exigem conferência manual. `A > B` representa inconsistência; `D = 0` exige validação operacional e não encerra automaticamente a emergência.

#### 3.1.3.4 Quais os benefícios trazidos pela solução proposta

Espera-se agilizar a apuração quantitativa, melhorar a visibilidade para SSMA/CCO e apoiar a identificação de pendências dentro do prazo interno de dez minutos. O LCD já fornece o total local; consolidação remota, histórico e análise temporal de simulados dependem das integrações futuras. Os benefícios são esperados, sem redução de tempo ou desempenho industrial comprovados nesta sprint.

#### 3.1.3.5 Qual será o critério de sucesso e qual medida será utilizada para o avaliar

Os critérios propostos são redução de pelo menos 60% no tempo de apuração quantitativa frente ao processo manual, capacidade para atender a população dentro do SLA e meta de acurácia por evento de pelo menos 99% em condições definidas. O protocolo, os limites de medição e o dimensionamento estão nas seções 3.3.8 e 3.4.1.1. Os dez casos funcionais documentados em Wokwi constituem evidência inicial de comportamento, sem comprovar essas metas. Resultado de 90% em estresse não aprova uso real.
	
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


### 3.3.8. Modelo de contagem, capacidade e limites do protótipo (sprint 1)

#### Variáveis e balanço da solução integrada futura

`B` é o saldo de pessoas na planta nas Portarias P1/P2 congelado no instante do alarme `t0`. Não é um valor fixo de 755: esse número é somente o cenário preliminar de dimensionamento. `E_j(t)` e `S_j(t)` são, respectivamente, entradas e saídas válidas acumuladas no PE `j` desde `t0`. Para uma contagem inicialmente reconciliada:

$$A_j(t) = A_j(t_0) + E_j(t) - S_j(t), \qquad A(t) = \sum_j A_j(t), \qquad D(t) = B - A(t)$$

Assim, `A` é a ocupação estimada atual, enquanto `E` é o total de chegadas. Uma pessoa que sai e retorna não deve somar uma presença adicional, desde que ambos os eventos sejam registrados corretamente. Transferências entre PEs exigem registro de saída na origem e entrada no destino. Pessoas já presentes no PE em `t0` precisam entrar na reconciliação inicial, evitando assumir zero sem conferência.

O firmware atual inicializa o total em zero ao ligar, incrementa entradas e aplica `max(0, total - 1)` nas saídas. Não recebe `B`, não sincroniza `t0`, não mantém contadores separados de entradas/saídas e não persiste o saldo após reinicialização. Portanto, fornece somente uma estimativa local, cuja equivalência à fórmula depende da inicialização e da detecção corretas. Saídas com saldo zero são sinalizadas pelo buzzer/serial, mas não descontadas; essa proteção pode ocultar inconsistências e exige reconciliação. A contagem não permite identificar nominalmente ausentes nem excluir erros que se compensem.

Na evolução conectada, `D > 0` em `t0 + 600 s` deverá produzir alerta automático para acionamento imediato da brigada, conforme o SLA informado. `D < 0`, base inconsistente, nó indisponível ou dados desatualizados tornam o balanço inconclusivo, com apuração manual. Nenhum desses automatismos de balanço e alarme está implementado na Sprint 1.

#### Hardware, detecção e geometria

O circuito atual utiliza Arduino Uno, dois HC-SR04 dedicados a entrada e saída, LCD 16x2 I2C, buzzer e LEDs. O botão alterna vermelho/verde; os sensores funcionam em ambos os estados. No `loop()`, a saída é consultada antes da entrada; depois de um evento, o outro sensor fica ignorado até a liberação. Não existe discriminação de direção pela sequência dos feixes. A instalação futura precisa garantir passagens coerentes com os sensores dedicados ou implementar e validar outra lógica de direção.

O limiar configurado é **distância medida maior que zero e menor que 200 cm**. Trata-se da distância entre sensor e alvo na direção da medição, não de uma largura de corredor nem de garantia de cobertura lateral. Largura útil, orientação, posição, altura, campo de detecção, reflexões e separação de pessoas precisam ser definidos e ensaiados na montagem física. A proposta anterior de corredor de 150 cm não demonstra cobertura nem assegura fila individual por estar abaixo de 200 cm. Nenhuma largura de instalação está aprovada nesta etapa, e delimitadores não podem obstruir a evasão.

Após a detecção, é necessário permanecer sem detecção por pelo menos 1.000 ms para rearmar. Isso se soma ao tempo de ocupação do feixe, às leituras e ao processamento (`delay(20)` no fim do laço; timeout de eco de 30 ms por medição). O sinal sonoro de 100 ms não é o intervalo completo entre contagens. O espaçamento físico deve assegurar esse período livre; uma distância fixa de 1 m entre pessoas, isoladamente, não garante o rearmamento. Falhas de eco retornam `-1`; descartar essa leitura evita um evento espúrio, mas não comprova que nenhuma passagem foi perdida.

#### Dimensionamento dos acessos em dez minutos

Uma fila única para 755 pessoas exigiria intervalo médio de no máximo `600 / 755 = 0,795 s/pessoa`, mesmo sem caminhada ou margem operacional. O rearmamento de um segundo, acrescido da ocupação e do processamento, impede essa vazão no firmware atual. **Um único acesso é insuficiente.**

Seja `s` o intervalo efetivo entre contagens corretas, incluindo passagem e rearmamento; a vazão por acesso é `Q = 60 / s` pessoas/minuto. Como aproximação conservadora, reserve `t_desloc` segundos desde o alarme até a disponibilização do grupo na fila e utilize `T = 600 - t_desloc` para processá-lo. Para acessos independentes com divisão equilibrada da demanda:

$$k_{min} = \left\lceil \frac{755\,s}{600 - t_{desloc}} \right\rceil$$

| Intervalo efetivo assumido `s` | Vazão por acesso | Acessos mínimos com 600 s disponíveis | Acessos mínimos com 420 s disponíveis (180 s reservados ao deslocamento) |
|---|---|---|---|
| 1 s (limite idealizado, sem ocupação/processamento) | 60 pessoas/min | 2 | 2 |
| 1,5 s | 40 pessoas/min | 2 | 3 |
| 2 s | 30 pessoas/min | 3 | 4 |
| 3 s | 20 pessoas/min | 4 | 6 |

Esses cenários são cálculos, não vazões medidas. Por exemplo, com `s = 2 s` e três minutos de deslocamento, são necessários **pelo menos quatro acessos independentes**. Para uma reserva adicional de 20% da capacidade nesse cenário, `ceil(755 × 2 / (0,8 × 420)) = 5` acessos. Esses parâmetros ainda precisam ser medidos e aprovados com a SSMA; não há número definitivo de acessos de implantação.

A soma da capacidade não basta se uma fila ficar sobrecarregada. Para cada PE com demanda `B_j`, deve-se verificar `k_j = ceil(B_j × s_j / T_j)` e somar os acessos necessários. O ensaio deve registrar a distribuição e os horários reais de chegada, inclusive o último grupo, as saídas, interrupções e eventual indisponibilidade de um acesso. Acesso independente significa um nó que possa contar em paralelo: os dois sensores do mesmo Arduino não são dois acessos independentes, pois compartilham o bloqueio. A montagem física também deve avaliar interferência entre sensores próximos. A organização de filas depende de validação de segurança para não atrasar o abandono.

#### Evoluções previstas

ESP32, comunicação em rede/MQTT, integração P1/P2, congelamento automático de `B`, sincronização de horário, dashboard, registros temporais persistentes, histórico e alertas remotos são planejados. As mensagens atuais no monitor serial não constituem histórico persistente com data/hora. O controle agregado por zonas com crachás integra a visão futura; a Sprint 1 se restringe à contagem local nos PEs e aos testes CT01–CT10, sem indoor tracking.

## 3.4. Resultados

_Nesta seção, detalhe os resultados obtidos com a implementação, de acordo com o disposto nas subseções._

### 3.4.1. Protótipo Inicial do Projeto usando o Simulador Wokwi (sprint 1)

O protótipo inicial está disponível no [projeto publicado no Wokwi](https://wokwi.com/projects/478404642645348353). O código-fonte e o diagrama do circuito estão armazenados no diretório [`src/firmware/prototipo`](../src/firmware/prototipo/).

O protótipo consiste em um contador de pessoas desenvolvido com Arduino Uno e dois sensores ultrassônicos HC-SR04. Um dos sensores registra a entrada de pessoas e incrementa o contador, enquanto o segundo registra a saída e decrementa o total. O valor atualizado é apresentado em um display LCD 16x2 conectado por I2C. Cada entrada ou saída válida também aciona um buzzer na frequência de 1.000 Hz durante 100 ms.

Uma pessoa é detectada quando a distância medida pelo sensor é maior que zero e menor que 200 cm. Depois de uma detecção, o sensor permanece bloqueado até deixar de detectar a pessoa e permanecer livre durante pelo menos um segundo. Esse mecanismo evita contagens repetidas causadas pela permanência de uma pessoa em frente ao sensor. Durante o bloqueio, leituras conflitantes do outro sensor são ignoradas. O contador também possui uma proteção que impede a apresentação de valores negativos.

O botão alterna a sinalização visual entre os LEDs verde e vermelho sem interromper o funcionamento dos sensores. Dessa forma, o usuário recebe uma indicação visual do estado selecionado sem perder o monitoramento de entradas e saídas. Caso um sensor não retorne o pulso de eco dentro de 30 ms, a medição é considerada inválida e descartada sem alterar o contador ou acionar o buzzer.

O software contém as funções obrigatórias `setup()` e `loop()`, além de funções auxiliares como `iniciarLCD()`, `atualizarContador()`, `medirDistancia()` e `detectarPessoa()`. Também foi definida a classe `ContadorPessoas`. A instância `contador` dessa classe é utilizada no `loop()` para registrar entradas, registrar saídas e consultar o total atual. O código foi executado no Wokwi sem erros de sintaxe ou compilação.

#### Casos de teste

Os testes CT01 a CT05 representam uma sequência completa de entrada e saída. Os testes seguintes verificam o botão e os LEDs, condições de limite, leituras simultâneas e falha de leitura. A simulação foi reiniciada quando necessário para isolar a situação avaliada.

| **CT#** | **Bloco** | **Componente de entrada** | **Leitura da entrada** | **Componente de saída** | **Leitura da saída** | **Descrição e resultado observado** |
|---|---|---|---|---|---|---|
| CT01 | Inicialização | Arduino Uno | Simulação iniciada sem pessoas próximas aos sensores | LED verde e LCD 16x2 | LED verde aceso, LED vermelho apagado e `Total: 0` | O sistema inicializa com o contador zerado e fica pronto para receber leituras. **Aprovado.** |
| CT02 | Entrada de pessoa | HC-SR04 de entrada | 2 cm, abaixo do limite de 200 cm | LCD 16x2, buzzer e monitor serial | `Total: 1`, aviso sonoro de 1.000 Hz por 100 ms e mensagem `Pessoa entrou: +1` | A pessoa é detectada pelo sensor de entrada e o contador é incrementado uma única vez. **Aprovado.** |
| CT03 | Liberação do sensor de entrada | HC-SR04 de entrada | Distância alterada para 400 cm depois da entrada | LCD 16x2 | Total permanece em `1` | O afastamento não gera uma nova contagem. Após um segundo sem presença, os sensores são liberados para o próximo evento. **Aprovado.** |
| CT04 | Saída de pessoa | HC-SR04 de saída | 43 cm, com o total anterior igual a `1` | LCD 16x2, buzzer e monitor serial | `Total: 0`, aviso sonoro de 1.000 Hz por 100 ms e mensagem `Pessoa saiu: -1` | A pessoa é detectada pelo sensor de saída e o contador é reduzido em uma unidade. **Aprovado.** |
| CT05 | Liberação do sensor de saída | HC-SR04 de saída | Distância alterada para 400 cm depois da saída | LCD 16x2 | Total permanece em `0` | O afastamento não gera outro decremento. Após um segundo sem presença, os sensores são liberados para a próxima leitura. **Aprovado.** |
| CT06 | Sinalização vermelha | Botão | Um pressionamento válido | LEDs e LCD 16x2 | LED vermelho aceso, LED verde apagado e total preservado em `0` | O botão alterna a sinalização para o LED vermelho sem reiniciar ou modificar o contador. **Aprovado.** |
| CT07 | Proteção contra valor negativo | HC-SR04 de saída | 6 cm com o contador já em `0` | LCD 16x2, buzzer e monitor serial | LCD permanece em `Total: 0`, aviso sonoro de 1.000 Hz por 100 ms e mensagem `Pessoa saiu: -1` | A saída é detectada, mas o método `saida()` impede que o total seja reduzido abaixo de zero. **Aprovado.** |
| CT08 | Objeto fora do alcance | HC-SR04 | 400 cm, acima do limite de detecção de 200 cm | LCD 16x2 e buzzer | Total permanece em `0` e buzzer não é acionado | O objeto fora do alcance definido não é interpretado como uma pessoa e não altera o contador. **Aprovado.** |
| CT09 | Bloqueio de leituras conflitantes | HC-SR04 de entrada e HC-SR04 de saída | Entrada detectada a 2 cm e, antes da liberação, leitura de 86 cm no sensor de saída | LCD 16x2, buzzer e monitor serial | Apenas uma entrada é registrada e o total permanece em `1` | Neste ensaio, a entrada foi acionada antes da saída e permanece ativa. A leitura do sensor de saída é ignorada até a liberação do sensor inicial. Se ambos já estiverem detectando no início do mesmo ciclo, o firmware dá prioridade à saída; esse cenário não é comprovado por esta evidência. **Aprovado para a sequência ensaiada.** |
| CT10 | Falha de leitura do sensor | HC-SR04 com o fio `ECHO` desconectado | Sensor configurado em 63 cm, mas sem pulso de retorno durante 30 ms | LCD 16x2 e buzzer | Total permanece em `0` e buzzer não é acionado | A função `medirDistancia()` devolve `-1` após o tempo limite. A leitura inválida é descartada e o sistema continua funcionando sem contabilizar uma pessoa incorretamente. **Aprovado.** |

#### Evidências dos testes

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T01.png" alt="CT01: inicialização do sistema" width="85%"><br>
  <i>Figura 1 — CT01: sistema inicializado, LED verde aceso e contador apresentado em zero.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T02.png" alt="CT02: entrada de pessoa" width="85%"><br>
  <i>Figura 2 — CT02: pessoa detectada a 2 cm pelo sensor de entrada, elevando o total para um.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T03.png" alt="CT03: liberação do sensor de entrada" width="85%"><br>
  <i>Figura 3 — CT03: afastamento para 400 cm libera o sensor de entrada e mantém o total em um.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T04.png" alt="CT04: saída de pessoa" width="85%"><br>
  <i>Figura 4 — CT04: pessoa detectada a 43 cm pelo sensor de saída, reduzindo o total de um para zero.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T05.png" alt="CT05: liberação do sensor de saída" width="85%"><br>
  <i>Figura 5 — CT05: afastamento para 400 cm libera o sensor de saída e mantém o total em zero.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T06.png" alt="CT06: LED vermelho acionado pelo botão" width="85%"><br>
  <i>Figura 6 — CT06: o botão alterna a sinalização para o LED vermelho sem modificar o contador.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T07.png" alt="CT07: saída com contador zerado" width="85%"><br>
  <i>Figura 7 — CT07: saída detectada a 6 cm; a proteção mantém o contador em zero.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T08.png" alt="CT08: objeto fora do alcance" width="85%"><br>
  <i>Figura 8 — CT08: objeto posicionado a 400 cm, fora do limite de detecção, sem alteração no contador.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T09.1.png" alt="CT09: entrada registrada antes da leitura conflitante" width="42%">
  <img src="../assets/casos_teste_prototipos/inicial/T09.2.png" alt="CT09: leitura conflitante ignorada" width="42%"><br>
  <i>Figura 9 — CT09: o sensor de entrada registra uma pessoa e a leitura do sensor de saída é ignorada enquanto o primeiro sensor permanece ativo.</i>
</p>

<p align="center">
  <img src="../assets/casos_teste_prototipos/inicial/T10.png" alt="CT10: falha de leitura do sensor" width="85%"><br>
  <i>Figura 10 — CT10: com o fio ECHO desconectado, a leitura inválida é descartada e o contador permanece em zero.</i>
</p>

#### 3.4.1.1. Alcance dos resultados e protocolo de validação futura

**Evidência disponível:** CT01–CT10 são dez cenários funcionais com resultados e imagens registrados acima. A numeração e as descrições de referência são: CT01 — Inicialização; CT02 — Entrada de pessoa; CT03 — Liberação do sensor de entrada; CT04 — Saída de pessoa; CT05 — Liberação do sensor de saída; CT06 — Sinalização vermelha; CT07 — Proteção contra valor negativo; CT08 — Objeto fora do alcance; CT09 — Bloqueio de leituras conflitantes; CT10 — Falha de leitura do sensor. A conformidade reportada é `10/10` nos cenários documentados, com a ressalva de sequência do CT09. Isso não significa acurácia de 100% por passagem nem validação física/industrial. Não foram fornecidas séries de medições de tempo ou amostras auditadas de passagens que comprovem 60% de redução ou 99% de acurácia.

**Redução do tempo de apuração quantitativa — meta ainda não validada:** utilizar o mesmo grupo e condições equivalentes nos dois métodos. O início da medição será o sinal de liberação da primeira pessoa de um grupo posicionado na mesma linha de chegada ao acesso do PE. O fim será a disponibilização, ao mesmo responsável pela conferência, do total quantitativo de todas as pessoas do grupo: no manual, após chamada, anotação e soma final; no protótipo, após atualização do LCD e comunicação do total ao responsável. Se houver erro, o relógio continua até a correção e disponibilização do total correto. Registrar separadamente o instante da última passagem e o tempo de reconciliação. A confirmação nominal continua sendo uma atividade complementar; contagem anônima e chamada nominal não entregam a mesma informação.

Planejar inicialmente três rodadas pareadas com 20 voluntários, alternando a ordem dos métodos para reduzir efeito de aprendizagem, com as mesmas pessoas, organização inicial, percurso, responsáveis e condições. Registrar `T_manual,r` e `T_sensor,r` de cada rodada, tamanho do grupo, erros e correções; nenhum desses ensaios é declarado executado. Calcular a redução sobre as médias dos tempos pareados:

$$R = 100\left(1 - \frac{\overline{T}_{sensor}}{\overline{T}_{manual}}\right)$$

A meta exploratória é `R >= 60%`, sem equivaler a redução já comprovada para a planta. Esse intervalo começa na linha de chegada ao PE e exclui o deslocamento desde a área de trabalho. Para avaliar o **SLA de emergência**, medir separadamente desde o disparo do alarme geral (`t0`) até a disponibilização do balanço consolidado de todos os PEs ao CCO/SSMA, com pendências e inconsistências explicitadas. Na etapa conectada, a medição incluirá transmissão e consolidação. Aos 600 s deve haver avaliação e acionamento conforme o SLA, mesmo que o balanço ainda esteja incompleto; não se espera a última chegada para tratar casos críticos. O ensaio local de 20 pessoas não demonstra cumprimento do SLA de 755 pessoas.

**Acurácia por evento — meta ainda não validada:** comparar cada passagem real, inclusive direção, com a alteração do contador, usando observador independente e gravação autorizada para auditoria. Um evento correto exige exatamente uma alteração de sinal correto; omissão, duplicidade, sinal incorreto e contagem sem passagem são falhas, registradas individualmente sem compensar sobrecontagem com subcontagem. Relatar separadamente, para entradas e saídas, `eventos corretos / passagens reais`, omissões, erros de direção, registros extras e divergência do saldo. Medir falsos positivos em períodos sem passagem por unidade de tempo; uma taxa alta de acertos entre passagens não neutraliza registros extras durante ociosidade.

Como campanha exploratória futura, planejar cinco baterias de 20 passagens por sentido, reiniciando/reconciliando o saldo entre baterias e garantindo ocupação inicial nas saídas. Em uma amostra de 100 passagens de um sentido, 99 acertos representam **99% observado em amostra pequena**, sem demonstrar que a acurácia populacional seja de pelo menos 99%. A amostra reduzida e a dependência entre repetições limitam a generalização. Para sustentar a meta de engenharia, será necessário ampliar a campanha em condições físicas representativas, definir previamente o plano amostral e analisar a incerteza estatística por direção e condição, com avaliação da SSMA. Não há certificação de segurança decorrente dessa meta, mesmo que seja alcançada.

**Estresse e condições de falha — diagnóstico, sem aprovação para uso real:** planejar testes com permanência de cinco segundos, passagens próximas sem um segundo livre, duplas, sentidos opostos, acionamento simultâneo, ausência de eco, reinicialização e períodos sem passagem. Registrar todas as perdas, duplicidades e saídas ignoradas durante o bloqueio. Um resultado de **90% de acurácia é insuficiente para aprovação operacional**: expõe falha que exige correção, restrição de uso ou revisão da solução antes de nova validação. A contagem em bancada ou Wokwi não autoriza instalação em área industrial; a aceitação depende de ensaios de campo e avaliação formal de segurança, capacidade e adequação dos equipamentos.

**Resposta local e futura latência remota:** medir o intervalo entre a passagem pela referência física de detecção e a atualização legível no LCD, sincronizando a observação por vídeo ou instrumentação. A meta exploratória local é até 0,5 s; não foi comprovada por cronometrias nos CT01–CT10. Para o sistema conectado futuro, medir separadamente do registro do evento no nó até a exibição no dashboard, com relógios sincronizados, meta proposta de até 3 s e pelo menos 50 eventos, relatando máximo, distribuição e perdas. Histórico e registros de horário necessários a essa análise ainda precisam ser implementados.

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

BRASIL. Ministério do Trabalho e Emprego. **NR-20 — Segurança e Saúde no Trabalho com Inflamáveis e Combustíveis**. Texto atualizado em 2025, itens 20.1 e 20.2. Disponível em: [PDF oficial da NR-20](https://www.gov.br/trabalho-e-emprego/pt-br/acesso-a-informacao/participacao-social/conselhos-e-orgaos-colegiados/comissao-tripartite-partitaria-permanente/normas-regulamentadora/normas-regulamentadoras-vigentes/nr-20-atualizada-2025.pdf). Acesso em: 23 out. 2026.

BRASIL. Ministério do Trabalho e Emprego. **NR-23 — Proteção Contra Incêndios**. Texto atualizado em 2022, itens 23.3.3 a 23.3.5.1. Disponível em: [PDF oficial da NR-23](https://www.gov.br/trabalho-e-emprego/pt-br/acesso-a-informacao/participacao-social/conselhos-e-orgaos-colegiados/comissao-tripartite-partitaria-permanente/arquivos/normas-regulamentadoras/nr-23-atualizada-2022.pdf). Acesso em: 23 out. 2026.

NIOSH — NATIONAL INSTITUTE FOR OCCUPATIONAL SAFETY AND HEALTH. **NIOSH Pocket Guide to Chemical Hazards: Chlorine (CAS 7782-50-5)**. Última revisão informada: 30 out. 2019. Disponível em: [ficha específica de cloro](https://www.cdc.gov/niosh/npg/npgd0115.html). Acesso em: 23 out. 2026.

UNIPAR. **Relatório de Sustentabilidade 2023**. Referência complementar de contexto institucional, sem uso como evidência da população ou do SLA da unidade. Disponível em: [relatório completo em PDF](https://unipar-institucional-prd.s3.sa-east-1.amazonaws.com/downloads_list_item/4073-unipar__r_s_2023__d6.pdf). Link identificado no levantamento das referências em 23 out. 2026; a leitura integral do PDF não foi realizada nesta revisão.

UNIPAR / INTELI. **Kickoff do projeto — unidade de Cubatão**. Realizado em 16 out. 2026, conforme data confirmada por Arthur Davi da Silva Rodrigues em 23 out. 2026. Informações operacionais utilizadas: população aproximada, liberação das catracas, conferência manual e prazo interno de dez minutos. Ata e link interno não disponíveis no repositório; não há data de acesso documental a declarar.

UNIPAR / INTELI. **Termo de Abertura do Projeto de Inovação (TAPI) — Módulo 4**. Restrição de escopo informada no contexto do projeto: não contemplar rastreamento contínuo de alta precisão em ambientes internos. Versão, data e link interno pendentes de disponibilização; documento não consultado diretamente nesta revisão.

EQUIPE DO PROJETO. **Protótipo inicial Wokwi e evidências CT01–CT10**. Disponível em: [simulação](https://wokwi.com/projects/478404642645348353), [firmware](../src/firmware/prototipo/sketch.ino), [circuito](../src/firmware/prototipo/diagram.json) e [evidências locais](../assets/casos_teste_prototipos/inicial/). Firmware, circuito e documentação das evidências consultados em 23 out. 2026; a simulação não foi reexecutada nesta revisão documental.
