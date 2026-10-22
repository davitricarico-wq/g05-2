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

### 3.1.5. Matriz de Riscos (sprint 1)	

_A Matriz de Risco deve ser desenhada considerando o projeto que os alunos estão criando. Deve ser entregue no template disponível no drive da turma. Os alunos devem enumerar os riscos, distribuí-los na matriz e justificar suas decisões._     

### 3.1.6. Política de Privacidade de acordo com a LGPD (sprint 1)	

Esta política preliminar considera exclusivamente o escopo do MVP definido até o momento: um protótipo de bancada com Arduino Uno, dois sensores ultrassônicos HC-SR04 para contar separadamente entradas e saídas, display LCD 16 × 2 para apresentar o total, botão para alternar entre os modos normal e emergência, LEDs verde e vermelho e buzzer para sinalização. Não fazem parte deste escopo cadastro de pessoas, crachá ou RFID, câmera, biometria, painel web, conexão de rede, banco de dados, nuvem ou rastreamento individual.

Parte-se do pressuposto técnico de que cada HC-SR04 fornece apenas medições de distância usadas para detectar uma passagem, sem produzir imagem, áudio ou qualquer identificador da pessoa. Também se pressupõe que o firmware mantém somente a contagem agregada necessária ao funcionamento imediato e não grava histórico na memória EEPROM ou em outro meio persistente. Nessas condições, as informações do fluxo principal não se relacionam a uma pessoa natural identificada ou identificável e, portanto, não caracterizam dados pessoais para os fins da LGPD. Essa conclusão decorre dos conceitos de dado pessoal e dado anonimizado previstos nos arts. 5º e 12 da Lei nº 13.709/2018 [1]. Caso qualquer um desses pressupostos deixe de ser verdadeiro, a análise deverá ser refeita antes do teste ou da implantação.

#### 3.1.6.1 Informações gerais sobre a empresa / organização

O projeto é desenvolvido pelo Inteli em parceria com a Unipar, denominação que abrange a Unipar Carbocloro S.A. e suas sociedades controladas diretas e indiretas, conforme o Aviso de Privacidade da empresa [3]. O MVP tem finalidade acadêmica e busca validar a lógica de contagem agregada de entradas e saídas e a sinalização local do protótipo; ele não representa, nesta etapa, um sistema industrial pronto para operação.

Como o fluxo descrito não trata dados pessoais, não há, para ele, a atribuição de papéis de controlador e operador. Se uma evolução passar a coletar informações identificáveis, a entidade da Unipar responsável pelas decisões sobre esse tratamento deverá ser indicada como controladora, e a participação do Inteli ou de terceiros deverá ser avaliada e documentada conforme as atividades efetivamente desempenhadas e as orientações da ANPD [2].

#### 3.1.6.2 Informações sobre o tratamento de dados

Os sensores detectam passagens em dois pontos distintos. A sequência das detecções permite ao Arduino aumentar ou diminuir um contador agregado, cujo valor é exibido no LCD. O botão alterna o estado do protótipo entre os modos normal e emergência, os LEDs indicam o modo ativo e o buzzer fornece aviso sonoro durante as contagens. O sistema não identifica quem passou, não cria um registro por pessoa e não confirma a localização ou a situação individual de ninguém.

A avaliação desta política depende dos seguintes pressupostos:

- os sensores não capturam imagens, áudio, biometria ou identificadores;
- nenhuma detecção é associada a nome, matrícula, crachá, dispositivo ou perfil;
- o circuito não está integrado a sistemas de controle de acesso ou bases corporativas;
- não há comunicação por rede, painel remoto ou armazenamento persistente;
- os ensaios são realizados em ambiente acadêmico controlado, e não em operação industrial real.

Se o protótipo for utilizado em local ou configuração que permita combinar o horário da passagem com câmeras, registros de acesso ou outras fontes capazes de identificar a pessoa, o evento poderá se tornar dado pessoal por associação. Nesse caso, será necessário mapear o novo tratamento, definir finalidade, base legal, retenção, agentes e salvaguardas antes do uso.

#### 3.1.6.3 Quais são os dados coletados

O MVP processa somente dados operacionais do circuito:

- medições de distância e pulsos de detecção gerados pelos dois sensores;
- indicação de entrada ou saída derivada da sequência das detecções;
- quantidade agregada calculada pelo Arduino;
- estado selecionado pelo botão, normal ou emergência;
- estados dos LEDs, do display e do buzzer.

Não são coletados nome, matrícula, CPF, RG, imagem, voz, biometria, dado de saúde, localização individual, identificador de crachá ou dispositivo, endereço IP ou credencial de acesso. Pelos pressupostos apresentados, as medições e a contagem agregada não permitem identificar as pessoas detectadas e não constituem dados pessoais. Também não se deve registrar manualmente informações que permitam associar as contagens a indivíduos durante os testes.

#### 3.1.6.4 Onde os dados são coletados 

As medições são geradas localmente no campo de alcance dos dois sensores instalados no protótipo de bancada, simulando um ponto de entrada e um ponto de saída. Como a documentação de escopo disponível não define unidade industrial, porta ou área real de instalação, pressupõe-se que os testes desta etapa ocorrerão apenas em ambiente acadêmico controlado. A escolha de um local real de operação está fora do escopo atual e exigirá nova avaliação, inclusive sobre a possibilidade de identificação indireta das pessoas.

#### 3.1.6.5 Para quais finalidades os dados serão utilizados

Os dados operacionais são utilizados exclusivamente para:

- detectar e diferenciar movimentos de entrada e saída no cenário simulado;
- atualizar e exibir a quantidade agregada no LCD;
- validar o funcionamento do botão e da sinalização visual e sonora;
- avaliar erros de contagem e aperfeiçoar o firmware e a montagem do MVP.

O protótipo não deve ser usado para identificar pessoas, controlar acesso, registrar presença ou jornada, avaliar produtividade, acompanhar trajetórias ou tomar decisões sobre indivíduos. Essas finalidades não são necessárias para validar o MVP e representariam mudança de escopo.

#### 3.1.6.6 Onde os dados ficam armazenados 

O escopo atual não inclui banco de dados, cartão de memória, serviço de nuvem ou conexão de rede. Assim, as medições são processadas localmente e de forma transitória pelo Arduino; apenas o valor corrente do contador e o estado do sistema permanecem na memória necessária à execução e são apresentados no LCD.

Pressupõe-se que o firmware não grave a contagem na EEPROM do Arduino. Esse comportamento deverá ser confirmado na revisão do código. Caso exista gravação persistente, o documento deverá informar o conteúdo gravado, a finalidade, o prazo e o procedimento de exclusão. O repositório poderá conter código-fonte e resultados agregados dos testes, mas não deve receber nomes, imagens, listas de presença, credenciais ou qualquer outro dado pessoal.

#### 3.1.6.7 Qual o período de armazenamento dos dados (retenção)

Cada medição de distância é descartada após ser usada no cálculo da detecção. A contagem agregada e o modo selecionado permanecem somente enquanto o protótipo está ligado ou até que o sistema seja reiniciado, conforme o pressuposto de ausência de gravação persistente. Portanto, não há prazo de retenção de dados pessoais a definir para o fluxo atual.

Resultados agregados, como número de acertos, falhas e contagens simuladas, podem ser mantidos no repositório pelo período necessário à avaliação acadêmica, pois não identificam participantes. Se os testes passarem a registrar horário detalhado, vídeo ou qualquer elemento que permita reconhecer alguém, deverá ser definida previamente uma tabela de retenção e descarte conforme a finalidade e a LGPD [1].

#### 3.1.6.8 Uso de cookies e/ou tecnologias semelhantes

O MVP não possui site, aplicativo, painel web ou conexão com a internet. Por isso, não utiliza cookies, armazenamento local de navegador, ferramentas de análise ou tecnologias semelhantes. A futura inclusão de uma interface conectada estará fora deste escopo e exigirá atualização desta política antes da coleta.

#### 3.1.6.9 Com quem esses dados são compartilhados (parceiros, fornecedores, subcontratados)

Não há compartilhamento de dados pessoais, pois o protótipo não os coleta. A equipe do Inteli, os avaliadores acadêmicos e os representantes da Unipar poderão acessar o valor agregado exibido e os resultados técnicos dos testes. O escopo não prevê fornecedores de nuvem, conectividade, banco de dados ou análise de dados.

Se uma evolução depender de terceiro ou de integração corporativa e envolver dados pessoais, os participantes e suas responsabilidades deverão ser identificados antes do tratamento, com regras de finalidade, acesso, segurança, retenção e exclusão.

#### 3.1.6.10 Informações sobre medidas de segurança adotadas pela empresa

Embora o fluxo atual não contenha dados pessoais, o projeto adota minimização desde a concepção: realiza a contagem sem criar identificadores individuais e mantém o processamento local. Também devem ser observadas as seguintes medidas:

- limitar o acesso físico ao protótipo durante os testes;
- revisar o firmware para confirmar que não há gravação na EEPROM, telemetria ou bibliotecas que enviem dados;
- não conectar o circuito a bases, câmeras ou sistemas de controle de acesso;
- não inserir credenciais, dados reais ou listas de pessoas no código e no repositório;
- registrar a versão do firmware e os pressupostos usados em cada ensaio;
- reiniciar o contador e apagar arquivos auxiliares quando deixarem de ser necessários;
- utilizar apenas resultados agregados nas evidências acadêmicas.

Essas medidas reduzem o risco de uma mudança informal transformar a contagem anônima em acompanhamento individual. Se houver tratamento futuro de dados pessoais, deverão ser adotadas medidas técnicas e administrativas proporcionais ao risco, em conformidade com os arts. 46 a 49 da LGPD e com as orientações da ANPD [1][4].

#### 3.1.6.11 Orientações sobre como a empresa/organização atende aos direitos dos usuários

Como o contador não registra nem identifica pessoas, a equipe não consegue localizar, consultar, corrigir ou excluir uma passagem atribuída a determinado indivíduo. Também não há decisão automatizada que produza efeito sobre uma pessoa. Isso não impede que alguém peça esclarecimentos sobre o funcionamento do protótipo ou informe suspeita de coleta indevida.

Se o escopo passar a envolver dados pessoais, a organização responsável deverá assegurar os direitos previstos no art. 18 da LGPD, incluindo confirmação, acesso, correção, informação sobre compartilhamento e, quando aplicável, anonimização, bloqueio, portabilidade, oposição ou eliminação [1][5].

#### 3.1.6.12 Informações sobre como o titular de dados pode solicitar e exercer os seus direitos

Uma pessoa que queira esclarecer o uso do protótipo ou suspeite que houve coleta de dado pessoal poderá contatar o encarregado da Unipar pelo e-mail **lgpd-encarregado@unipar.com**, canal divulgado no Aviso de Privacidade da empresa [3]. O pedido deve indicar o contexto do teste e a dúvida ou o direito que se pretende exercer. Como a solução atual mantém apenas uma contagem anônima, pode não existir registro que permita vincular uma passagem ao solicitante; essa limitação deverá ser explicada com clareza na resposta.

#### 3.1.6.13 Informações de contato do Data Protection Officer (DPO) ou encarregado de proteção de dados da organização

O canal oficial publicado pela Unipar para contato com seu Encarregado de Proteção de Dados Pessoais é:

- **E-mail:** lgpd-encarregado@unipar.com
- **Aviso de Privacidade:** <https://unipar.com/aviso-de-privacidade>

O nome da pessoa que exerce a função não é apresentado no aviso público consultado; por isso, registra-se somente o canal institucional confirmado [3].

Esta política deverá ser revisada antes de qualquer alteração que inclua identificação por crachá ou RFID, cadastro, câmera, áudio, biometria, registro individual de horário ou localização, integração com sistemas corporativos, painel conectado, banco de dados, nuvem ou armazenamento persistente. Esses recursos não estão previstos no MVP analisado e não podem ser tratados como se já fizessem parte da solução.

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

[1] BRASIL. **Lei nº 13.709, de 14 de agosto de 2018: Lei Geral de Proteção de Dados Pessoais (LGPD)**. Brasília, DF: Presidência da República, 2018. Disponível em: <https://www.planalto.gov.br/ccivil_03/_ato2015-2018/2018/lei/l13709compilado.htm>. Acesso em: 22 out. 2026.

[2] AGÊNCIA NACIONAL DE PROTEÇÃO DE DADOS. **Guia orientativo para definições dos agentes de tratamento de dados pessoais e do encarregado**. Brasília, DF: ANPD, 2022. Disponível em: <https://www.gov.br/anpd/pt-br/centrais-de-conteudo/materiais-educativos-e-publicacoes/guia-orientativo-para-definicoes-dos-agentes-de-tratamento-de-dados-pessoais-e-do-encarregado>. Acesso em: 22 out. 2026.

[3] UNIPAR. **Aviso de Privacidade**. Disponível em: <https://unipar.com/aviso-de-privacidade>. Acesso em: 22 out. 2026.

[4] AGÊNCIA NACIONAL DE PROTEÇÃO DE DADOS. **Guia orientativo sobre segurança da informação para agentes de tratamento de pequeno porte**. Brasília, DF: ANPD, 2021. Disponível em: <https://www.gov.br/anpd/pt-br/centrais-de-conteudo/materiais-educativos-e-publicacoes/guia-orientativo-sobre-seguranca-da-informacao-para-agentes-de-tratamento-de-pequeno-porte>. Acesso em: 22 out. 2026.

[5] AGÊNCIA NACIONAL DE PROTEÇÃO DE DADOS. **Direito dos titulares**. Disponível em: <https://www.gov.br/anpd/pt-br/assuntos/titular-de-dados/direito-dos-titulares>. Acesso em: 22 out. 2026.
