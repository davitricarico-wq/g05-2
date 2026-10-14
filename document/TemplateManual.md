# MANUAL DE INSTRUÇÕES — [NOME DO PROJETO]
<br><br>
**Parceiro de Negócio:** [Nome do Parceiro]<br>
**Grupo:** [Nome do Grupo] <br>
**Instituição:** Inteli - Instituto de Tecnologia e Liderança
<br><br>
---

## 📋 Controle do Documento & Histórico de Revisões

> **Orientação:** Esta tabela deve ser atualizada ao longo de todo o módulo a cada revisão realizada pelo grupo.

| Data | Versão | Autor | Resumo da Atividade / Alterações |
| :---: | :---: | :--- | :--- |
| DD/MM/AAAA | 0.1 | [Nome] | Preenchimento inicial das seções preparatórias (Sprint 3) |
| DD/MM/AAAA | 1.0 | [Nome] | Primeira versão completa do manual (Sprint 4) |
| DD/MM/AAAA | 2.0 | [Nome] | Reversão/Refinamento final do manual pós-testes (Sprint 5) |

---

## 1. Componentes e Recursos

> 📌 **Cronograma de Preenchimento:**
> * **Rascunho / Planejamento:** Sprint 3 — Definição dos componentes, sensores e arquitetura de rede.
> * **Entrega Oficial e Consolidada:** Sprint 4.
> * **Refinamento Final:** Sprint 5.

### 1.1. Componentes Externos
*Liste e descreva todos os componentes físicos, hardware, dispositivos complementares (microcontroladores, computadores, tablets, smartphones) e serviços em nuvem / softwares / IDEs utilizados na solução.*

*Figura 1: Exemplo de representação gráfica dos componentes fornecidos no kit da solução.*
![Figura 1 - Componentes Incluídos no Kit](templates/M04/images/imagem1.JPG)
*Fonte: Exemplo, 2026.*

**Tabela de Componentes Incluídos no Kit (Exemplo de Preenchimento):**

| Item | Componente / Descrição | Quantidade | Observações / Especificações |
| :---: | :--- | :---: | :--- |
| **1** | Manual de Instruções (Guias A e B) | 1 conj. | Instruções de montagem e segurança. |
| **2** | Spot de Iluminação / Luminária IoT | 3x | Unidades principais de iluminação/sensoriamento. |
| **3** | Estaca de Fixação para Solo | 3x | Para instalação física no solo/jardim. |
| **4** | Base Circular para Suporte / Superfície | 3x | Para fixação em piso ou superfície plana. |
| **5** | Fonte de Alimentação / Transformador de Rede | 1x | Com cabo, tomada e conector rápido. |
| **6** | Cabo de Extensão / Conexão | 3x | Cabos de interconexão selados. |
| **7** | Conectores / Divisores T de Conexão Rápida | 2x | Para ramificação da rede de alimentação/sinal. |
| **8** | Adaptador de Plugs (UK / Swiss) | 1x | Adaptador de tomada específico para a região. |

### 1.2. Requisitos de Conectividade
*Liste as redes, protocolos de comunicação (ex.: Wi-Fi 2.4GHz, MQTT, ESP-NOW, Bluetooth, HTTP/REST), portas e especificações de back-end/broker necessários para o funcionamento contínuo da solução.*

* **Protocolos de Rede:** [ex.: Wi-Fi 802.11 b/g/n (2.4 GHz)]
* **Protocolos de Aplicação:** [ex.: MQTT, HTTP/REST]
* **Especificações do Back-end / Broker:** [ex.: Endereço/Porta do Broker MQTT HiveMQ/Mosquitto para envio e recebimento de dados]

---

## 2. Guia de Montagem

> 📌 **Cronograma de Preenchimento:**
> * **Entrega Oficial e Consolidada:** Sprint 4 — O protótipo físico estará montado e integrado.
> * **Refinamento Final:** Sprint 5.

Descreva passo a passo como montar fisicamente os dispositivos IoT de sua solução, mencionando os componentes listados na Seção 1. Utilize diagramas, esquemáticos elétricos (Fritzing/Wokwi) e fotografias para ilustrar o processo de montagem. Liste também todas as ferramentas necessárias.

*Figura 2: Exemplo de representação das ferramentas e insumos necessários para a montagem (Excl.).*
![Figura 2 - Ferramentas e Insumos Não Incluídos](templates/M04/images/imagem2.JPG)  
*Fonte: Exemplo, 2026.*

**Tabela de Ferramentas e Insumos Exclusos (Exemplo de Preenchimento):**

| Item | Ferramenta / Insumo | Quantidade Recomendada | Aplicação no Processo de Montagem |
| :---: | :--- | :---: | :--- |
| **1** | Furadeira Elétrica | 1x | Perfuração da superfície para fixação das bases. |
| **2** | Buchas de Fixação | Conforme necessidade | Suporte de fixação em paredes ou pisos rígidos. |
| **3** | Parafusos Phillips | Conforme necessidade | Fixação física do suporte. |
| **4** | Lápis de Marcação | 1x | Demarcação dos pontos de furação na superfície. |
| **5** | Chave de Fenda Plana ($\ominus$) | 1x | Ajuste e aperto de parafusos de fenda simples. |
| **6** | Chave de Fenda Cruzada ($\oplus$ / Phillips) | 1x | Ajuste de parafusos de cabeça cruzada. |
| **7** | Punção / Perfurador Guia | 1x | Marcação inicial de centro antes de furar. |

### Passo a Passo para Montagem Física:
1. **Etapa 1:** Marque o local de fixação utilizando o lápis de marcação.
2. **Etapa 2:** Realize a perfuração na superfície com a furadeira e insira as buchas de fixação.
3. **Etapa 3:** Fixe a base circular alinhando os parafusos e utilizando a chave de fenda adequada ($\oplus$ ou $\ominus$).
4. **Etapa 4:** Faça as conexões elétricas e encaixe os módulos nos divisores de sinal/alimentação.

---

## 3. Guia de Instalação

> 📌 **Cronograma de Preenchimento:**
> * **Entrega Oficial e Consolidada:** Sprint 4.
> * **Refinamento Final:** Sprint 5.

Descreva passo a passo como instalar os dispositivos IoT no espaço físico adequado, conectando-os à rede, de acordo com o que foi levantado com seu parceiro de projeto.

* **Posicionamento e Alcance:** Especifique propriedades, limites e alcance do dispositivo em relação ao espaço destinado (ex.: distância máxima do roteador, altura de fixação).
* **Grau de Proteção e Ambiente:** Especificações de proteção elétrica/invólucro (ex.: grau IP contra água e poeira em ambiente externo).
* **Instalação do Firmware/Software:** Especifique como gravar ou atualizar os softwares no microcontrolador/dispositivo.

---

## 4. Guia de Configuração

> 📌 **Cronograma de Preenchimento:**
> * **Entrega Oficial e Consolidada:** Sprint 4.
> * **Refinamento Final:** Sprint 5.

Descreva passo a passo como configurar os dispositivos IoT utilizando os equipamentos devidos (ex.: smartphone/computador acessando o servidor embarcado ou a página na nuvem). Utilize fotografias, prints de tela e/ou desenhos técnicos para ilustrar o processo de configuração.

1. **Passo 1:** Energizar o dispositivo no local de instalação.
2. **Passo 2:** Conectar-se ao Access Point gerado pelo dispositivo (ex.: via Wi-Fi Manager).
3. **Passo 3:** Inserir credenciais da rede local Wi-Fi e configurações do Broker MQTT (Endereço, Porta, Tópicos).
4. **Passo 4:** Validar o recebimento dos primeiros pacotes no Dashboard/Servidor NUVEM.

---

## 5. Guia de Operação

> 📌 **Cronograma de Preenchimento:**
> * **Entrega Oficial e Consolidada:** Sprint 4.
> * **Refinamento Final:** Sprint 5.

Descreva os fluxos de operação entre interface e dispositivos IoT. Utilize fotografias, prints de tela e/ou desenhos técnicos para ilustrar os processos.

* **Leitura de Sensores:** Indique o funcionamento das telas e como fazer a leitura dos dados coletados pelos sensores em tempo real.
* **Acionamento de Atuadores:** Descreva como disparar ações no ambiente através dos atuadores (ex.: botões no dashboard, regras automáticas).
* **Reconhecimento de Estados do Sistema:** Explique os sinalizadores do sistema (ex.: LEDs de status indicando conexão Wi-Fi, erros ou transmissão de dados).
* **Tratamento de Imprecisões e Erros:** Indique informações relacionadas à imprecisão de leituras/localizações e como o usuário deve contornar tais situações.

---

## 6. Como Descartar Este Dispositivo

> 📌 **Cronograma de Preenchimento:**
> * **Rascunho / Planejamento:** Sprint 3.
> * **Entrega Oficial e Consolidada:** Sprint 4 — Alinhado com os conteúdos de sustentabilidade e impacto ambiental da tecnologia (Semana 7).
> * **Refinamento Final:** Sprint 5.

Posicione aqui seu plano de descarte, relacionando instruções, cuidados ao manipular e listando cada grupo de componentes com uma maneira adequada de descarte consciente.

| Grupo de Componentes | Tipo de Material | Instrução de Descarte Consciente |
| :--- | :--- | :--- |
| **Placas Eletrônicas / ESP32 / Sensores** | Lixo Eletrônico (E-lixo) | Encaminhar a pontos de coleta específicos (Ecopontos) para reciclagem de placas eletrônicas. |
| **Baterias / Acumuladores / Pilhas** | Resíduo Químico / Perigoso | Entrega em postos de logística reversa de pilhas e baterias conforme legislação ambiental. |
| **Estrutura / Case 3D / Cabos** | Plásticos / Polímeros | Separar conforme a resina sintética utilizada (ex.: PLA, ABS, PVC) e encaminhar para reciclagem plástica. |

---

## 7. Troubleshooting

> 📌 **Cronograma de Preenchimento:**
> * **Entrega Oficial e Consolidada:** Sprint 4.
> * **Refinamento Final:** Sprint 5 — Atualização com base nos problemas encontrados durante os testes de guerrilha com usuários.

Liste as situações de falha mais comuns da sua solução (tais como falta de conectividade, falta de bateria, componente inoperante etc.) e indique ações para solução desses problemas.

| # | Problema | Possível Solução |
| :---: | :--- | :--- |
| **1** | Falta de conectividade com a rede Wi-Fi | Verificar se as credenciais cadastradas estão corretas e aproximar o dispositivo do roteador. |
| **2** | Perda de comunicação com o Broker MQTT | Checar o endereço e porta do servidor broker na Seção 4 e reiniciar o microcontrolador. |
| **3** | Sensor apresentando dados zerados ou inconsistentes | Verificar se há jumpers soltos no circuito conforme o Guia de Montagem (Seção 2). |
| **4** | Atuador não responde aos comandos da interface | Confirmar se a alimentação do módulo atuador está ligada e se os tópicos MQTT estão alinhados. |
| **5** | Dispositivo não liga / Ausência de energia | Verificar a integridade dos cabos de alimentação, tomada ou nível de carga da bateria. |

<br><br>