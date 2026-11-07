# Inteli - Instituto de Tecnologia e Liderança

<p align="center">
<a href= "https://www.inteli.edu.br/"><img src="assets/inteli.png" alt="Inteli - Instituto de Tecnologia e Liderança" border="0" width=40% height=40%></a>
</p>

<br>

# C.R.I.S.I.S - Controle e Resposta Inteligente em Situações de Incidente e Segurança

## Synthetix

## 👨‍🎓 Integrantes:

- <a href="https://www.linkedin.com/in/davi-viana-tricarico-a3b991410/">Davi Tricarico</a>
- <a href="https://www.linkedin.com/in/felipe-rabinovich/">Felipe Rabinovich</a>
- <a href="https://www.linkedin.com/in/gustavo-luz-fantasia/">Gustavo Fantasia</a>
- <a href="https://www.linkedin.com/in/felipe-escobar-152129352/">Felipe Escobar</a>
- <a href="https://www.linkedin.com/in/lucasb-oliveira">Lucas Oliveira</a>
- <a href="https://www.linkedin.com/in/pedro-negri-840519335/">Pedro Negri</a>
- <a href="https://www.linkedin.com/in/vinicius-gava%C3%A7a-ramos-94b190440/">Vinicius Ramos</a>
- <a href="https://www.linkedin.com/in/arthur-davi-da-silva-rodrigues/">Arthur Rodrigues</a>

## 👩‍🏫 Professores:

### Orientador(a)

- <a href="https://www.linkedin.com/in/profclaudioandre/">Claudio Andre</a>

### Instrutores

- <a href="https://www.linkedin.com/in/anacristinadossantos/">Ana Cristina</a>
- <a href="https://www.linkedin.com/in/zotovici/">Andrea Zotovici</a>
- <a href="https://www.linkedin.com/in/camilanarantes/">Camila Arantes</a>
- <a href="https://www.linkedin.com/in/geraldo-magela-severino-vasconcelos-22b1b220/">Geraldo Magela</a>
- <a href="https://www.linkedin.com/in/natalia-k-37a62052/">Natália</a>

## 📜 Descrição

O C.R.I.S.I.S (Controle e Resposta Inteligente em Situações de Incidente e Segurança) é um projeto de Internet das Coisas desenvolvido pela equipe Synthetix, do Inteli, em parceria com a Unipar. Seu objetivo é apoiar a evacuação da fábrica de Cubatão em situações de emergência, com foco em vazamento de cloro. Atualmente, a confirmação da chegada das pessoas aos pontos de encontro depende de chamadas manuais, enquanto a liberação das catracas durante uma emergência dificulta saber quantas pessoas permanecem na planta. Isso atrasa a identificação de quem ainda pode precisar de ajuda.

A solução proposta combina três tipos de dispositivo. Sensores ultrassônicos junto às catracas das portarias contam passagens de entrada e saída para estimar, de forma anônima, quantas pessoas estão na fábrica; eles não leem crachás nem identificam quem passou. Leitores RFID nas passagens de zonas monitoradas registram a última área pela qual cada pessoa passou. Nos pontos de encontro, totens permitem que cada pessoa confirme sua chegada aproximando o crachá. Os leitores RC522 previstos para os protótipos exigem essa aproximação. Uma eventual leitura automática à distância nas zonas, em uma instalação industrial, dependeria da escolha e validação de outra tecnologia RFID. Uma aplicação web deverá reunir os dados para o Centro de Controle Operacional (CCO), exibindo as confirmações, as pendências e a última zona registrada de cada pessoa identificada, quando houver leitura. O CCO repassa pelo rádio as informações à equipe de Segurança, Saúde e Meio Ambiente (SSMA), que coordena agentes de segurança e brigadistas em campo. A SSMA decide quando a evacuação terminou; o CCO desliga oficialmente o alarme e registra o encerramento.

O desenvolvimento ocorre em sprints. O primeiro protótipo, feito com Arduino Uno e simulado no Wokwi, testou a contagem de entradas e saídas. O repositório também reúne os firmwares dos protótipos de monitoramento por crachá e de confirmação no totem, além da documentação e dos casos de teste. A integração dos dispositivos à aplicação e seus benefícios operacionais ainda dependem de validação nas próximas etapas. O vídeo de demonstração do funcionamento do projeto será incluído após a Sprint 5.

## 📁 Estrutura de pastas

Dentre os arquivos e pastas presentes na raiz do projeto, definem-se:

- <b>assets</b>: imagens e vídeos do projeto.

- <b>document</b>: aqui estão todos os documentos do projeto, incluindo o manual de instruções (se aplicável). Há também uma pasta denominada <b>outros</b> onde estão presentes outros documentos complementares.

- <b>src</b>: Todo o código-fonte criado para o desenvolvimento do projeto, incluindo firmware, notebooks, backend e frontend, se aplicáveis.

- <b>README.md</b>: arquivo que serve como guia e explicação geral sobre o projeto (o mesmo que você está lendo agora).

## 🔧 Instalação

Os protótipos e suas instruções de reprodução estão descritos na [documentação do projeto](document/documentacao.md). As integrações e dependências da solução final ainda estão em desenvolvimento.

O manual de instruções está previsto para a Sprint 4.

## 🗃 Histórico de lançamentos

| Versão | Sprint | Data       | Principais atualizações                                                                                                                                                                       |
| ------ | ------ | ---------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| 0.1.0  | 1      | 23/10/2026 | Protótipo inicial de contagem de pessoas no Wokwi com Arduino Uno, sensores HC-SR04, LCD, buzzer e LEDs; documentação dos requisitos, regras de negócio, riscos e casos de teste CT01 a CT10. |
| 0.2.0  | 2      | 06/11/2026 | Definição da solução com contagem nas portarias, monitoramento RFID por zonas e confirmação nos pontos de encontro; protótipo offline de monitoramento com ESP32 e RC522, incluindo firmware, circuito e montagem; testes simulados CT16 a CT23 da versão anterior com ressalvas; roteiros CT24 a CT32 da versão atual e do totem, ainda sem execução física; revisão dos requisitos funcionais e não funcionais, regras de negócio, rastreabilidade, privacidade e critérios de teste; jornadas futuras e storyboard de Maria revisados. A aplicação web e a integração entre dispositivos permanecem previstas para as próximas sprints. |

Os lançamentos das sprints 3 a 5 serão registrados após as respectivas entregas.

## 📋 Licença/License

O projeto C.R.I.S.I.S, desenvolvido pelo grupo Synthetix no **Inteli — Instituto de Tecnologia e Liderança**, é disponibilizado sob a licença [Creative Commons Attribution 4.0 International (CC BY 4.0)](https://creativecommons.org/licenses/by/4.0/).

Ao compartilhar ou adaptar o material, dê crédito ao grupo Synthetix e ao Inteli, inclua o link da licença e indique se foram feitas alterações.
