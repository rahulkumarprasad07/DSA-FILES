from moviepy import VideoClip
from PIL import Image, ImageDraw, ImageFont
import numpy as np
import math
import random

# =========================
# CHANGE THESE
# =========================
NAME = "Rahul"
AGE = 19

DURATION = 12
FPS = 30
WIDTH = 1080
HEIGHT = 1920

OUTPUT = "happy_birthday.mp4"

# =========================
# FONT
# =========================
def get_font(size, bold=False):
    paths = [
        "C:/Windows/Fonts/arialbd.ttf" if bold else "C:/Windows/Fonts/arial.ttf",
        "C:/Windows/Fonts/calibrib.ttf" if bold else "C:/Windows/Fonts/calibri.ttf"
    ]

    for path in paths:
        try:
            return ImageFont.truetype(path, size)
        except:
            pass

    return ImageFont.load_default()


font_title = get_font(105, True)
font_name = get_font(135, True)
font_small = get_font(52, False)
font_final = get_font(42, True)

# =========================
# CONFETTI
# =========================
random.seed(42)

confetti = []

for _ in range(100):
    confetti.append({
        "x": random.randint(0, WIDTH),
        "y": random.randint(-HEIGHT, HEIGHT),
        "speed": random.uniform(120, 350),
        "size": random.randint(5, 15),
        "phase": random.uniform(0, math.pi * 2),
        "color": random.choice([
            (255, 99, 132),
            (255, 205, 86),
            (91, 192, 235),
            (145, 234, 153),
            (190, 120, 255),
            (255, 145, 77)
        ])
    })

# =========================
# STARS
# =========================
stars = [
    (
        random.randint(40, WIDTH - 40),
        random.randint(50, HEIGHT - 50),
        random.randint(2, 6)
    )
    for _ in range(60)
]


# =========================
# CENTER TEXT
# =========================
def centered_text(draw, text, y, font, fill):
    box = draw.textbbox((0, 0), text, font=font)

    text_width = box[2] - box[0]
    x = (WIDTH - text_width) / 2

    draw.text(
        (x, y),
        text,
        font=font,
        fill=fill
    )


# =========================
# FRAME GENERATOR
# =========================
def make_frame(t):

    img = Image.new(
        "RGB",
        (WIDTH, HEIGHT),
        (15, 10, 45)
    )

    draw = ImageDraw.Draw(img)

    # -------------------------
    # Background
    # -------------------------
    pulse = (math.sin(t * 1.8) + 1) / 2

    for y in range(HEIGHT):

        r = int(20 + 35 * y / HEIGHT + 15 * pulse)
        g = int(12 + 15 * y / HEIGHT)
        b = int(55 + 55 * (1 - y / HEIGHT))

        draw.line(
            (0, y, WIDTH, y),
            fill=(r, g, b)
        )

    # -------------------------
    # Glow
    # -------------------------
    glow_x = WIDTH // 2 + int(
        math.sin(t * 0.8) * 120
    )

    glow_y = 550 + int(
        math.cos(t * 0.7) * 70
    )

    for radius in range(350, 20, -15):

        factor = radius / 350

        color = (
            int(120 * factor + 25),
            int(70 * factor + 20),
            int(255 * factor + 30)
        )

        draw.ellipse(
            (
                glow_x - radius,
                glow_y - radius,
                glow_x + radius,
                glow_y + radius
            ),
            outline=color,
            width=8
        )

    # -------------------------
    # Stars
    # -------------------------
    for x, y, size in stars:

        twinkle = (
            math.sin(t * 4 + x) + 1
        ) / 2

        s = int(size * (0.5 + twinkle))

        draw.ellipse(
            (x - s, y - s, x + s, y + s),
            fill=(255, 255, 240)
        )

    # -------------------------
    # Confetti
    # -------------------------
    for c in confetti:

        y = (
            c["y"] + c["speed"] * t
        ) % (HEIGHT + 100) - 50

        x = (
            c["x"]
            + math.sin(t * 2 + c["phase"]) * 35
        )

        size = c["size"]

        draw.rounded_rectangle(
            (
                x,
                y,
                x + size,
                y + size * 1.8
            ),
            radius=3,
            fill=c["color"]
        )

    # -------------------------
    # HAPPY BIRTHDAY
    # -------------------------
    title_y = (
        310
        + int(math.sin(t * 1.2) * 8)
    )

    centered_text(
        draw,
        "HAPPY",
        title_y,
        font_title,
        (255, 210, 245)
    )

    centered_text(
        draw,
        "BIRTHDAY!",
        title_y + 115,
        font_title,
        (255, 235, 130)
    )

    # -------------------------
    # NAME
    # -------------------------
    name_y = (
        780
        + int(math.sin(t * 2) * 12)
    )

    box = draw.textbbox(
        (0, 0),
        NAME,
        font=font_name
    )

    name_width = box[2] - box[0]

    name_x = (
        WIDTH - name_width
    ) / 2

    # Shadow
    draw.text(
        (
            name_x + 7,
            name_y + 7
        ),
        NAME,
        font=font_name,
        fill=(0, 0, 0)
    )

    # Main name
    draw.text(
        (name_x, name_y),
        NAME,
        font=font_name,
        fill=(255, 255, 255)
    )

    # -------------------------
    # AGE
    # -------------------------
    centered_text(
        draw,
        f"✨ {AGE} YEARS OF AWESOME ✨",
        960,
        font_small,
        (255, 220, 160)
    )

    # -------------------------
    # MESSAGE
    # -------------------------
    centered_text(
        draw,
        "May your day be filled with",
        1190,
        font_small,
        (240, 240, 255)
    )

    centered_text(
        draw,
        "smiles, memories & magic ✨",
        1260,
        font_small,
        (240, 240, 255)
    )

    # -------------------------
    # CAKE
    # -------------------------
    cake_y = (
        1450
        + int(math.sin(t * 2.2) * 8)
    )

    # Plate
    draw.ellipse(
        (
            250,
            cake_y + 220,
            830,
            cake_y + 275
        ),
        fill=(220, 220, 240)
    )

    # Bottom cake
    draw.rounded_rectangle(
        (
            320,
            cake_y + 90,
            760,
            cake_y + 225
        ),
        radius=25,
        fill=(255, 155, 190)
    )

    # Top cake
    draw.rounded_rectangle(
        (
            360,
            cake_y,
            720,
            cake_y + 105
        ),
        radius=25,
        fill=(255, 205, 225)
    )

    # Cream
    for x in range(375, 720, 70):

        draw.ellipse(
            (
                x,
                cake_y + 70,
                x + 45,
                cake_y + 115
            ),
            fill=(255, 245, 250)
        )

    # -------------------------
    # CANDLES
    # -------------------------
    candle_xs = [455, 525, 595]

    for i, x in enumerate(candle_xs):

        draw.rectangle(
            (
                x,
                cake_y - 80,
                x + 28,
                cake_y + 5
            ),
            fill=random.choice([
                (255, 100, 120),
                (100, 200, 255),
                (255, 220, 80)
            ])
        )

        flame_size = (
            12
            + int(
                4 * math.sin(t * 8 + i)
            )
        )

        draw.ellipse(
            (
                x + 3,
                cake_y - 80 - flame_size,
                x + 25,
                cake_y - 80
            ),
            fill=(255, 180, 50)
        )

    # -------------------------
    # FINAL MESSAGE
    # -------------------------
    if t > DURATION - 3:

        centered_text(
            draw,
            "HAVE AN AMAZING YEAR AHEAD ❤️",
            1740,
            font_final,
            (255, 230, 230)
        )

    return np.array(img)


# =========================
# CREATE VIDEO
# =========================
clip = VideoClip(
    make_frame,
    duration=DURATION
)

clip.write_videofile(
    OUTPUT,
    fps=FPS,
    codec="libx264",
    audio_codec="aac"
)

print("Birthday video created successfully!")
print("Saved as:", OUTPUT)