s = input()

s = int(s)
a = int(0)
b = int(0)
c = int(0)
for i in range (0,s):
    x,y,z = input().split()
    
    
    a = int(x) + a
    b = int(y) + b
    c = int(z) + c

if ( a == b == c == 0):
    print("YES")
else:
    print("NO")