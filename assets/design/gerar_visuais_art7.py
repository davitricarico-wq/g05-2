"""Gera os diagramas vetoriais revisados do Artefato 7, sem dependências externas."""

from pathlib import Path
from textwrap import wrap
from xml.sax.saxutils import escape


BASE = Path(__file__).resolve().parent
INK = "#162433"
GREEN = "#08764f"
LIGHT = "#edf5f0"
LINE = "#cbd7d1"
MUTED = "#42536a"


def rect(x, y, w, h, fill, stroke="none", radius=0):
    return f'<rect x="{x}" y="{y}" width="{w}" height="{h}" rx="{radius}" fill="{fill}" stroke="{stroke}"/>'


def label(x, y, value, size=18, weight=400, color=INK):
    return f'<text x="{x}" y="{y}" font-family="Arial, sans-serif" font-size="{size}" font-weight="{weight}" fill="{color}">{escape(value)}</text>'


def lines(x, y, value, width=37, size=15, step=21, color=INK):
    return "".join(label(x, y + i * step, part, size, color=color)
                   for i, part in enumerate(wrap(value, width, break_long_words=False)))


def document(title, description, body, width, height):
    return (f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" height="{height}" '
            f'viewBox="0 0 {width} {height}" role="img" aria-label="{escape(title)}">'
            f'<title>{escape(title)}</title><desc>{escape(description)}</desc>'
            f'{rect(0, 0, width, height, "#ffffff")}{body}</svg>')


def journey(person, role, title, phases, rows, out):
    width, height = 1700, 1250
    body = rect(0, 0, width, 145, GREEN)
    body += label(45, 63, person, 36, 700, "#ffffff")
    body += label(45, 105, role, 20, 400, "#ffffff")
    body += label(730, 80, title, 27, 700, "#ffffff")
    x0, colw, gap = 180, 350, 20
    body += label(30, 211, "FASES", 18, 700, GREEN)
    for i, phase in enumerate(phases):
        x = x0 + i * (colw + gap)
        body += rect(x, 168, colw, 82, LIGHT, LINE, 12)
        body += label(x + 18, 198, f"{i + 1:02d}", 19, 700, GREEN)
        body += lines(x + 52, 198, phase, 27, 18, 23)
    y0, rowh = 278, 150
    for row_index, (heading, cells) in enumerate(rows):
        y = y0 + row_index * (rowh + 8)
        body += label(30, y + 34, heading, 18, 700, GREEN)
        for i, cell in enumerate(cells):
            x = x0 + i * (colw + gap)
            body += rect(x, y, colw, rowh, "#ffffff", LINE, 10)
            body += lines(x + 18, y + 31, cell, 37, 16, 23)
    body += label(30, 1230, "Cenário projetado; não representa sistema implantado nem validação física.", 15, color=MUTED)
    out.write_text(document(f"{title} — {person}", "Jornada futura em quatro fases, com ações, pensamentos, contatos, riscos, insights e oportunidades.", body, width, height), encoding="utf-8")


def storyboard(out, person, subtitle, scenes):
    width, height = 1600, 970
    body = rect(0, 0, width, 125, GREEN)
    body += label(38, 58, f"Storyboard — {person}", 34, 700, "#ffffff")
    body += label(38, 96, subtitle, 19, color="#ffffff")
    for i, (heading, action, response) in enumerate(scenes):
        col, row = i % 4, i // 4
        x, y = 28 + col * 392, 157 + row * 380
        body += rect(x, y, 370, 348, "#ffffff", LINE, 12)
        body += rect(x, y, 370, 60, LIGHT, radius=12)
        body += label(x + 18, y + 39, heading, 20, 700, GREEN)
        body += label(x + 18, y + 96, "AÇÃO", 14, 700, GREEN)
        body += lines(x + 18, y + 126, action, 36, 17, 24)
        body += label(x + 18, y + 226, "REAÇÃO DO SISTEMA", 14, 700, GREEN)
        body += lines(x + 18, y + 256, response, 36, 17, 24)
    body += label(1210, 618, "A última zona é uma pista", 18, 700, GREEN)
    body += label(1210, 645, "de passagem, não localização.", 16, color=MUTED)
    body += label(28, 946, "Números ilustrativos. O saldo zero isolado não comprova segurança nem encerra a emergência.", 16, color=MUTED)
    out.write_text(document(f"Storyboard de {person}", "Sete cenas que distinguem o CCO, a SSMA e as respostas da solução proposta.", body, width, height), encoding="utf-8")


journey(
    "Tuco Salamanca", "Gestor de SSMA",
    "Jornada futura · coordenação em campo",
    ["Alerta e ativação", "Evacuação e registros", "Pendências após 10 min", "Conferência e encerramento"],
    [
        ("AÇÕES", ["Recebe o alerta do CCO e orienta agentes e brigadistas em campo.", "Coordena a ida aos PEs e acompanha informes recebidos pelo rádio.", "Confere pendências com líderes dos PEs e orienta busca cautelosa.", "Após conferência humana, a SSMA decide o fim e avisa o CCO."]),
        ("PENSAMENTOS E SENTIMENTOS", ["Cautela: preciso confirmar o risco e proteger as equipes.", "Atenção: os registros ajudam, mas podem chegar atrasados.", "Tensão: a última zona é uma pista, não a posição atual.", "Alívio condicionado à conferência real das pessoas." ]),
        ("PONTOS DE CONTATO", ["Rádio, CCO, equipes de campo e procedimento da Unipar.", "Líderes dos PEs, brigadistas e informações repassadas pelo CCO.", "Rádio, lista nominal autorizada, horário e última zona registrada.", "Líderes, CCO e registro auditável da decisão." ]),
        ("DORES E RISCOS", ["Alarme ou fonte de dados pode estar incompleto.", "Filas, leituras ausentes e falha de rede atrasam confirmações.", "Zona antiga pode induzir busca no local errado.", "Saldo zero não comprova segurança individual." ]),
        ("INSIGHTS", ["O alarme da Unipar abre o evento integrado.", "Confirmação no totem registra chegada; não mede ocupação atual.", "Comparar fonte nominal e horários reduz conclusões precipitadas.", "A decisão é humana; o CCO executa o desligamento oficial." ]),
        ("OPORTUNIDADES", ["Mostrar fonte e validade do alerta desde o início.", "Indicar atraso, fila offline e confirmação local claramente.", "Destacar dados inconclusivos e histórico da última passagem.", "Registrar responsável, horário e justificativa do encerramento." ]),
    ],
    BASE / "jornada_usuario/futuro/jornadaUsuarioTucoFuturo-revisada.svg",
)

journey(
    "Maria Schrader", "Operadora de CCO",
    "Jornada futura · acompanhamento no CCO",
    ["Monitoramento", "Verificação e ativação", "Acompanhamento", "Conferência e registro"],
    [
        ("AÇÕES", ["Acompanha indicadores e relatos das equipes.", "Confirma a ocorrência e segue o fluxo autorizado do alarme.", "Consulta estimativas, confirmações e horários no painel.", "Comunica pendências à SSMA; registra o fim após decisão dela." ]),
        ("PENSAMENTOS E SENTIMENTOS", ["Atenção: preciso distinguir sinais relevantes.", "Cautela: a ocorrência e as fontes devem ser validadas.", "Preocupação: dados ausentes não significam zero pendências.", "Alívio após conferência humana e registro completo." ]),
        ("PONTOS DE CONTATO", ["Painéis operacionais, câmeras e rádio.", "Procedimentos da Unipar, SSMA e sistema de alarme.", "Aplicação web, portarias, leitores de zona e totens.", "SSMA, líderes dos PEs e trilha de auditoria." ]),
        ("DORES E RISCOS", ["Muitos alarmes dificultam a triagem.", "Falha de conexão pode exigir ativação local do totem.", "Leitura repetida ou tardia pode distorcer o balanço.", "Fontes divergentes exigem investigação, não encerramento automático." ]),
        ("INSIGHTS", ["Visibilidade da origem dos alertas melhora a decisão.", "Ativação integrada depende do alarme existente.", "Última zona indica passagem, não localização atual.", "A SSMA decide; o CCO desliga oficialmente o alarme." ]),
        ("OPORTUNIDADES", ["Destacar alertas críticos e seus horários.", "Registrar contingência e estado dos totens.", "Exibir atualização, inconclusão e origem de cada indicador.", "Guardar decisão, operador, horário e justificativa." ]),
    ],
    BASE / "jornada_usuario/futuro/jornadaUsuarioMariaFuturo-revisada.svg",
)

storyboard(
    BASE / "storyboard/storyboardMaria-revisado.svg",
    "Maria Schrader", "Evacuação acompanhada pelo CCO · cenário futuro",
    [
        ("1 · Monitoramento", "Maria acompanha alarmes e indicadores da planta.", "Sistemas operacionais mostram condições e horários."),
        ("2 · Verificação", "Maria confirma a ocorrência conforme o procedimento da unidade.", "O alerta segue em validação; a SSMA é informada."),
        ("3 · Acionamento", "O alarme existente é acionado pelo fluxo autorizado da Unipar.", "A integração abre o evento e ativa os totens designados."),
        ("4 · Evacuação", "Pessoas saem das áreas e aproximam crachás dos totens.", "Portarias contam passagens; zonas e PEs enviam registros."),
        ("5 · Painel do CCO", "Maria consulta B₀=320, M=298 e 22 pendências a conferir.", "A tela separa estimativa, confirmações e validade dos dados."),
        ("6 · Dez minutos", "Após novas confirmações, restam duas pendências; Maria avisa a SSMA.", "O painel mostra horários e última zona, sem indicar posição atual."),
        ("7 · Encerramento", "Líderes conferem as pessoas; a SSMA decide o fim da operação.", "O CCO desliga o alarme e registra decisão, hora e justificativa."),
    ],
)

storyboard(
    BASE / "storyboard/storyboardTuco-revisado.svg",
    "Tuco Salamanca", "Coordenação da SSMA em campo · cenário futuro",
    [
        ("1 · Coordenação", "Tuco organiza as equipes em campo e mantém contato com o CCO.", "O CCO acompanha os indicadores e repassa alertas pelo rádio."),
        ("2 · Verificação", "Tuco confirma a ocorrência com líderes e agentes da planta.", "O alerta permanece em validação até o fluxo autorizado da Unipar."),
        ("3 · Alarme", "O alarme existente é acionado; Tuco orienta a evacuação.", "A integração abre o evento e ativa os totens designados."),
        ("4 · Pontos de encontro", "Tuco orienta brigadistas e líderes durante a saída das pessoas.", "Portarias, zonas e totens registram dados separados."),
        ("5 · Balanço", "O CCO informa B₀=320, M=298 e 22 pendências a conferir.", "O painel mostra fontes e horários; não conclui segurança."),
        ("6 · Dez minutos", "Após novas confirmações, restam duas pendências; Tuco confere com líderes.", "O CCO informa a última zona como pista histórica de passagem."),
        ("7 · Decisão", "Líderes verificam as pessoas; a SSMA decide encerrar.", "O CCO desliga o alarme e registra decisão e justificativa."),
    ],
)
