# Sobre
Neste documento encontra-se os artefatos com exigências, explicações e critérios de avaliação da entrega do projeto atual. Importante afirmar que a documentação deve estar consistente e evitar contradição entre diferentes partes da documentação.

Deve-se no final, predizer com base na nota mostrada para cada critério, uma nota de avaliação do que foi feito em relação ao que é pedido, com: título (artefato), nota (x/10), justificativa.

## ART. 5 - Protótipo físico do projeto (offline)

Documentação: Preencher seção 3.4.2


Instruções: Implemente um protótipo físico usando o ESP32 conectado à alimentação, sensores e saídas informacionais no Protoboard, executando leituras e enviando saidas para os componentes informacionais, conforme compreensão do projeto.
Registre diversos casos de teste (CTs), indicando exemplos de leitura (entrada) e escrita (saída) apresentadas pelo seu sistema físico. Estes registros serão utilizados para testar seus componentes, portanto, descreva várias situações, incluindo não apenas casos de sucesso, mas também de possíveis falhas nas leituras de entradas e saídas. Não se esqueça de atualizar sua matriz RTM com esses CTs.
Siga as nomenclaturas e convenções já utilizadas anteriormente, e não se esqueça dos alinhamentos de negócios e experiência do usuário para pensar em situações representativas.
Inclua figuras do protótipo físico e descrições dos testes realizados para ilustrar o funcionamento do protótipo. 


CRITÉRIOS DE QUALIDADE:
SEM EVIDÊNCIAS [0%] 
O grupo não descreveu pelo menos 3 casos de teste alinhados ao escopo do projeto (pré-condição, procedimento de teste, pós-condição; resultado esperado com mudança de estado de sensores e resultado em leds); o grupo não montou um protótipo com um sensor digital ou analógico conectado ao ESP32 no protoboard com organização dos fios de conexão; o grupo não realizou documentação dos resultados de casos de teste (com capturas de tela e vídeos) que estão alinhados com os resultados esperados; o código não possui nomes descritivos de funções e variáveis, o código não possui procedimentos encapsulados em funções com comentários.


INSUFICIENTE [25%]
O grupo descreveu pelo menos 3 casos de teste alinhados ao escopo do projeto (pré-condição, procedimento de teste, pós-condição; resultado esperado com mudança de estado de sensores e resultado em leds); o grupo não montou um protótipo com um sensor digital ou analógico conectado ao ESP32 no protoboard com organização dos fios de conexão; o grupo não realizou documentação dos resultados de casos de teste (com capturas de tela e vídeos) que estão alinhados com os resultados esperados; o código não possui nomes descritivos de funções e variáveis, o código não possui procedimentos encapsulados em funções com comentários.


BÁSICO [50%]
O grupo descreveu pelo menos 3 casos de teste alinhados ao escopo do projeto (pré-condição, procedimento de teste, pós-condição; resultado esperado com mudança de estado de sensores e resultado em leds); montou um protótipo com um sensor digital ou analógico conectado ao ESP32 no protoboard com organização dos fios de conexão; o grupo não realizou documentação dos resultados de casos de teste (com capturas de tela e vídeos) que estão alinhados com os resultados esperados; o código não possui nomes descritivos de funções e variáveis, o código não possui procedimentos encapsulados em funções com comentários.


INTERMEDIÁRIO [75%]
O grupo descreveu pelo menos 3 casos de teste alinhados ao escopo do projeto (pré-condição, procedimento de teste, pós-condição; resultado esperado com mudança de estado de sensores e resultado em leds); montou um protótipo com um sensor digital ou analógico conectado ao ESP32 no protoboard com organização dos fios de conexão; realizou documentação dos resultados de casos de teste (com capturas de tela e vídeos) que estão alinhados com os resultados esperados; o código não possui nomes descritivos de funções e variáveis, o código não possui procedimentos encapsulados em funções com comentários.


AVANÇADO [100%]
O grupo descreveu pelo menos 3 casos de teste alinhados ao escopo do projeto (pré-condição, procedimento de teste, pós-condição; resultado esperado com mudança de estado de sensores e resultado em leds); montou um protótipo com um sensor digital ou analógico conectado ao ESP32 no protoboard com organização dos fios de conexão; realizou documentação dos resultados de casos de teste (com capturas de tela e vídeos) que estão alinhados com os resultados esperados; o código possui nomes descritivos de funções e variáveis, e possui procedimentos encapsulados em funções com comentários.




## ART. 6 - Requisitos Não Funcionais e Atualizações de Requisitos

Documentação: Preencher seção 3.3.3 e atualizar as seções 3.3.1, 3.3.2 e 3.3.4


Descreva os requisitos não funcionais do projeto realizando sua listagem (RNF01, RNF02 e assim por diante) e descrição, seguindo a ISO25010 e referenciando as demandas do negócio.


CRITÉRIOS DE QUALIDADE:
SEM EVIDÊNCIAS [0%] 
O grupo não apresentou evidências nesse item.


INSUFICIENTE [25%]
O grupo apresentou por escrito somente dois requisitos não funcionais conforme a norma ISO 25010, contendo métrica/critério de teste e justificativa. Além disso, atualizou de forma insatisfatória os RFs, RNs e matriz RTM.


BÁSICO [50%]
O grupo apresentou por escrito até quatro requisitos não funcionais diferentes conforme a norma ISO 25010, contendo métrica/critério de teste e justificativa. Além disso, atualizou de forma insatisfatória os RFs, RNs e matriz RTM.


INTERMEDIÁRIO [75%]
O grupo apresentou por escrito até seis requisitos não funcionais diferentes conforme a norma ISO 25010, contendo métrica/critério de teste e justificativa. Além disso, atualizou de forma satisfatória os RFs, RNs e matriz RTM. 


AVANÇADO [100%]
O grupo apresentou por escrito os oito requisitos não funcionais diferentes conforme a norma ISO 25010, contendo métrica/critério de teste e justificativa. Além disso, atualizou de forma satisfatória os RFs, RNs e matriz RTM.



## ART. 7 - Domínio dos fundamentos da experiência de usuário - Jornada do Usuário e Storyboard
Cada grupo deve elaborar, com foco na persona principal, o mapa da jornada atual do usuário, o mapa da jornada futura e o storyboard do projeto, construindo seus próprios templates ou escolhendo modelos adequados ao projeto. 


A jornada atual deve mostrar como o usuário vive hoje a situação-problema, e a jornada futura deve mostrar como essa experiência se transforma com a solução proposta. Os mapas devem apresentar o início e o final da jornada, as fases, as ações, os pensamentos e os sentimentos do usuário em cada etapa, os touchpoints, os principais picos de satisfação e vales de frustração e as oportunidades de melhoria, além dos insights que o grupo extraiu da análise.


O storyboard deve ilustrar em sequência a experiência do usuário com a solução, deixando claros o ambiente e as circunstâncias em que ela acontece, as ações e decisões do usuário e as reações do sistema a cada interação. 


Serão avaliadas a coerência e a sequência lógica das jornadas e do storyboard, a profundidade e a riqueza de detalhes, a relação com a persona principal e com o projeto, o contraste entre a jornada atual e a futura, a qualidade dos templates e de seu uso, a qualidade dos insights e das oportunidades identificadas, a clareza visual e a organização da apresentação e a descrição do processo de construção. Se usarem IA, os grupos devem descrever na documentação como ela foi utilizada.