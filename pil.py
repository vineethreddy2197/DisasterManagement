﻿import PIL
import random
from PIL import ImageFont
from PIL import Image
from PIL import ImageDraw
te=open('victim.txt','r')
s=te.read()
font = ImageFont.truetype("arial.ttf", 30)
# Opening the file gg.png
imageFile = "white.jpg"
im1=Image.open(imageFile)
# Drawing the text on the picture
try:
    draw = ImageDraw.Draw(im1)
    draw.text((60, 30),"~Victims~",fill=(0,0,0),font=font)
    draw.text((100,100),s.strip(),fill=(0,0,0),font=font)
    draw = ImageDraw.Draw(im1)
except:
    print('Report error')
a=random.random()
# Save the image with a new name
im1.save("%s.jpg" % str(a))
img = Image.open("%s.jpg" % str(a))
img.show()
