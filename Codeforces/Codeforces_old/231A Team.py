

input_a = input()

i = int(0)
count = int(0)

while i < int(input_a):
    a,b,c = input().split()
    
    a = int(a)
    b = int(b)
    c = int(c)
    
    if (a+b+c > 1):
        count = count + 1
    i = i + 1
print(count)