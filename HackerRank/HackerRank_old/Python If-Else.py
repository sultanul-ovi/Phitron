s = input()

s= int(s)

if(s%2 == 1):
    print("Weird")
    exit()
if(s%2 == 0 and s> 5 and s<21):
    print("Weird")
    exit()

print("Not Weird")