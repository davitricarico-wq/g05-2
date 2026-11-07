"""Mantém os PNGs ilustrados do artefato 7 e corrige textos em camadas SVG.

Os PNGs originais permanecem intactos. Cada SVG incorpora os pixels da figura
original, para que ilustrações, cores, enquadramento e numeração não mudem.
"""

from base64 import b64encode
from pathlib import Path
from textwrap import wrap
from xml.sax.saxutils import escape


BASE = Path(__file__).resolve().parent
INK = "#1d2651"


def rect(x, y, width, height, fill, radius=0):
    return (f'<rect x="{x}" y="{y}" width="{width}" height="{height}" '
            f'rx="{radius}" fill="{fill}"/>')


def text(x, y, value, size=12, color=INK, weight="bold", anchor="start"):
    return (f'<text x="{x}" y="{y}" fill="{color}" '
            f'font-family="Arial, Helvetica, sans-serif" font-size="{size}" '
            f'font-weight="{weight}" text-anchor="{anchor}">{escape(value)}</text>')


def paragraph(x, y, value, width, size=12, step=15, color=INK, weight="bold"):
    result = []
    for index, line in enumerate(wrap(value, width, break_long_words=False)):
        result.append(text(x, y + index * step, line, size, color, weight))
    return "".join(result)


def card(x, y, width, height, fill, bullets, size=12, chars=33, step=15):
    parts = [rect(x, y, width, height, fill, 12)]
    cursor = y + 19
    for bullet in bullets:
        lines = wrap(bullet, chars, break_long_words=False)
        for index, line in enumerate(lines):
            parts.append(text(x + 14, cursor, ("• " if index == 0 else "  ") + line,
                              size))
            cursor += step
        cursor += 3
    if cursor > y + height + 8:
        raise ValueError(f"Text overflows card at {x}, {y}: {bullets}")
    return "".join(parts)


def image_base(path, width, height):
    data = b64encode(path.read_bytes()).decode("ascii")
    return (f'<image x="0" y="0" width="{width}" height="{height}" '
            f'href="data:image/png;base64,{data}"/>')


def save(source, output, width, height, edits, title):
    svg = (f'<svg xmlns="http://www.w3.org/2000/svg" width="{width}" '
           f'height="{height}" viewBox="0 0 {width} {height}" role="img" '
           f'aria-label="{escape(title)}"><title>{escape(title)}</title>'
           f'{image_base(source, width, height)}{"".join(edits)}</svg>')
    output.write_text(svg, encoding="utf-8")


def journey_tuco():
    folder = BASE / "jornada_usuario" / "futuro"
    source = folder / "jornadaUsuarioTucoFuturo.png"
    edits = []

    # Cabeçalho: mantém o retrato e a faixa verde originais.
    edits.append(rect(246, 0, 429, 134, "#005d44"))
    edits.append(text(252, 29, "Cenário", 19, "#ffffff"))
    edits.append(paragraph(258, 49,
        "Portarias estimam ocupação; leitores RFID registram passagens por zonas.",
        62, 10.5, 13, "#ffffff"))
    edits.append(paragraph(258, 88,
        "Totens registram chegadas aos pontos de encontro, inclusive offline.",
        62, 10.5, 13, "#ffffff"))
    edits.append(rect(685, 0, 433, 134, "#005d44"))
    edits.append(text(688, 29, "Objetivo", 19, "#ffffff"))
    edits.append(paragraph(690, 49,
        "Apoiar a evacuação com estimativas e confirmações verificáveis.", 50,
        11, 14, "#ffffff"))
    edits.append(paragraph(690, 88,
        "Conferir pendências com os líderes; a SSMA decide o fim da operação.",
        50, 11, 14, "#ffffff"))

    # Mantém a linha emocional original; corrige duas afirmações sobre desempenho.
    edits.append(rect(320, 318, 257, 58, "#e7ebf1"))
    edits.append('<path d="M405 294 L665 351" fill="none" stroke="#000000" stroke-width="4"/>')
    edits.append(paragraph(332, 346,
        "Os registros ajudam, mas podem chegar atrasados; preciso conferir.",
        39, 10, 13, INK, "normal"))
    edits.append(rect(855, 320, 235, 57, "#e7ebf1"))
    edits.append(paragraph(867, 341,
        "O alívio vem após a conferência humana, não só pelo saldo da tela.",
        39, 10, 13, INK, "normal"))

    xs = [59, 318, 589, 856]
    widths = [244, 261, 255, 253]
    rows = [
        (425, 105, "#ffbd59", [
            ["Recebe o alerta do CCO e orienta as equipes em campo.",
             "O alarme da Unipar abre o evento integrado."],
            ["Coordena a ida aos pontos de encontro e recebe dados pelo rádio.",
             "Confirmações podem chegar com atraso."],
            ["Confere pendências com os líderes após dez minutos.",
             "Usa a última zona como pista histórica."],
            ["A SSMA decide após conferência humana.",
             "O CCO desliga o alarme e registra a decisão."],
        ]),
        (544, 124, "#ffe99a", [
            ["Rádio, CCO e equipes de campo.", "Procedimento de emergência da Unipar."],
            ["Líderes dos pontos de encontro e brigadistas.",
             "Dados dos totens repassados pelo CCO."],
            ["Rádio, lista nominal autorizada e horários.",
             "Última passagem RFID registrada."],
            ["Líderes, CCO e registro auditável.",
             "Decisão da SSMA e ação oficial do CCO."],
        ]),
        (687, 106, "#ffcece", [
            ["O alerta e as fontes podem estar incompletos.",
             "A contagem da portaria é estimada."],
            ["Filas, falhas de rede e leituras ausentes atrasam confirmações."],
            ["Zona antiga pode levar a busca no local errado.",
             "É preciso conferir horário e fonte."],
            ["Saldo zero não prova segurança individual.",
             "Encerramento exige verificação humana."],
        ]),
        (814, 107, "#c1ff72", [
            ["O alarme existente inicia o fluxo integrado.",
             "A origem do alerta deve ser visível."],
            ["Leitura no totem registra chegada.",
             "Não comprova segurança física."],
            ["Última zona indica passagem, não posição atual.",
             "Horários ajudam a interpretar dados."],
            ["A decisão é da SSMA.",
             "O CCO executa o desligamento oficial."],
        ]),
        (936, 116, "#c3dbff", [
            ["Mostrar origem e validade do alerta.",
             "Distinguir sinal ainda em verificação."],
            ["Indicar atrasos, fila offline e leitura local.",
             "Separar dados ainda não conciliados."],
            ["Destacar dados inconclusivos.",
             "Exibir horário da última passagem."],
            ["Registrar responsável, hora e justificativa.",
             "Guardar decisão e ação do CCO."],
        ]),
    ]
    for y, height, fill, cells in rows:
        for x, width, bullets in zip(xs, widths, cells):
            edits.append(card(x, y, width, height, fill, bullets, 11.5, 32, 13.5))
    save(source, folder / "jornadaUsuarioTucoFuturo-ilustrada.svg", 1118, 1078,
         edits, "Jornada futura ilustrada de Tuco Salamanca")


def journey_maria():
    folder = BASE / "jornada_usuario" / "futuro"
    source = folder / "jornadaUsuarioMariaFuturo.png"
    edits = [
        card(978, 503, 287, 123, "#ffbd59", [
            "Comunica pendências e fontes à SSMA.",
            "Após decisão da SSMA, desliga oficialmente o alarme e registra o fim."
        ], 12, 37, 15),
        card(978, 945, 287, 119, "#c1ff72", [
            "A SSMA decide após conferência humana.",
            "O CCO executa o desligamento oficial e mantém o registro."
        ], 12, 37, 15),
    ]
    save(source, folder / "jornadaUsuarioMariaFuturo-ilustrada.svg", 1289, 1253,
         edits, "Jornada futura ilustrada de Maria Schrader")


def storyboard_maria():
    folder = BASE / "storyboard"
    source = folder / "storyboardMaria.png"
    edits = [
        # O painel final deve fechar a conta ilustrativa: 320 confirmados, zero pendências.
        rect(1363, 694, 46, 34, "#f2f5f7"),
        text(1367, 719, "320", 21, "#111111"),
        # Ação da cena 7.
        rect(1019, 880, 415, 74, "#ffffff"),
        text(1026, 897, "Ação:", 16, "#111111"),
        paragraph(1026, 916,
            "Após decisão da SSMA, Maria desliga o alarme, registra o fim e informa o próximo turno.",
            53, 15, 18, "#111111", "normal"),
    ]
    save(source, folder / "storyboardMaria-ilustrado.svg", 1448, 1086,
         edits, "Storyboard ilustrado de Maria Schrader em sete cenas")


if __name__ == "__main__":
    journey_tuco()
    journey_maria()
    storyboard_maria()
