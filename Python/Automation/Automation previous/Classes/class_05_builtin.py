import random
import sys
import os
import math
import pyperclip

# in the python location C:/Users/asus/AppData/Local/Programs/Python/Python311/python.exe
#  > pip.exe install pyperclip
# import pyperclip
# pyperclip.copy('Hello')
# pyperclip.paste()

# from random import *
# randint(1,10)

r = random.randint(1,10)
print(r)
pyperclip.copy('Hello words')
pyperclip.paste()
sys.exit() # stops program mid way