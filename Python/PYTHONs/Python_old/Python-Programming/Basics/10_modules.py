import time
import os
import pandas

while True:
    if os.path.exists("Basics/files/fruits.txt"):
        with open("Basics/files/fruits.txt", "r") as myfile1:
            content1 = myfile1.read()
            print(content1)
    else:
        print("File does not exist\n")
    time.sleep(3)




while True:
    if os.path.exists("Basics/files/temps_today.csv"):
        data = pandas.read_csv("Basics/files/temps_today.csv")
        print(data.mean())
        #print(data.mean()["st1"])
    else:
        print("File does not exist\n")
    time.sleep(3)



import random
random.randint(1,10)

from random import *
randint(1, 10)