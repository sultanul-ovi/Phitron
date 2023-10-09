

a = input()

a = int(a)

i = int(0)

count = int(0)
while i<a:
    x = input()
    
    if(x == '++X' or x == 'X++'):
        count = count + 1
    if(x == '--X' or x == 'X--'):
        count = count - 1
    i = i+1

print(count)