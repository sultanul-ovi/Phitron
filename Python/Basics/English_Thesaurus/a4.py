import json
from difflib import get_close_matches

data = json.load(open("A1_English_Thesaurus/data.json"))

def wordsDict(w):
    w = w.lower()
    if w in data:
        return data[w]
    elif len(get_close_matches(w, data.keys())) > 0:
        yn = input("Did you mean %s human? Enter Y if Yes or N if No:\nInput: " % get_close_matches(w, data.keys())[0])
        yn = yn.lower()
        if yn == "y":
            return data[get_close_matches(w,data.keys())[0]]
        elif yn == "n":
            return "Word doesn't exist please try again."
        else:
            return "I didn't understand your query."
    else:
        return "Word doesn't exist! Please try again."

while True:
    string = "Welcome to the Dictionary"
    mainMenu = input("Please Choose: \n1. Dictionary\n2. Quit\n")
    if mainMenu == "1":
        print("                               ", string)
        while True:
            loops = input("Enter a word to find: ")
            if loops == "/end":
                print("Thank you, See you!")
                break
            elif loops:
                print(' '.join(wordsDict(loops)))
            else:
                break
    elif mainMenu == "2":
        print("Bye, Bye")
        exit()
    else:
        print("Try again")