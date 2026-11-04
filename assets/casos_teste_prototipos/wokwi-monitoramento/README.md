# Evidências da execução online — Artefato 5

- Projeto: https://wokwi.com/projects/479252249534862337
- Data: 04/11/2026.
- Executor: Codex, por interação com o navegador no Wokwi.
- Firmware original preservado, sem alterações para os testes.
- Cartões simulados: Blue Card `01:02:03:04` e Green Card `11:22:33:44`.
- As capturas são da simulação online. Nenhuma comprova funcionamento do hardware físico.
- CT16–CT19 e CT23: comportamento visual/serial aprovado. CT20–CT22: leitura/LEDs verificados; resultado parcial por falta de medição do áudio.
- Pressão contínua: 6 s de relógio real, cobrindo mais de 2 s do tempo simulado; uma transição, seguida de retorno após nova pressão. O limiar exato do debounce não foi medido.
- `serial-sessao.txt` contém a árvore de acessibilidade da sessão, incluindo a saída serial anterior ao reinício. Capturas posteriores incluem repetição da bateria do botão com circuito ampliado.
- CT16 foi recapturado após reinício para melhor visibilidade; CT23 inclui antes e depois do reinício. Não houve gravação de vídeo ou áudio.

## Identificação da versão (SHA-256)

- `sketch-ensaiado.ino`: `e988fa520c5b99252a8d8bd44e39dbd25830bf7641dbd587b5af01fc5bc457e4`
- `diagram-ensaiado.json`: `893e3e5641153067f3d29dbe16abc18c73a84f5cc38c61e5229e6443d57190df`
- `libraries.txt`: `32b751952c7859d7f4d26f78255c88e3bffe0aa59668076f184ce7b859c4b4b7`
