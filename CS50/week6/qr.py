import qrcode

img = qrcode.make("https://sports.qq.com/nba_public/duba_nba_index.htm")
img.save("qr.png", "PNG")

