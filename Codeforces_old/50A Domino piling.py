n, m = input().split()

n = int(n)
m = int(m)

if(int(n*m)%2 == 1):
    size = int(n*m)-1
else:
    size = int(n*m)
    
print(int(size/2))