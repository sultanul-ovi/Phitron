
n, k = input().split()

n = int(n)
k = int(k)

i = int(0)
count = int(0)

l = list(input().split())

while i<n:
    if( int(l[i])>= int(l[k-1]) and int(l[i]) > 0):
        count = count + 1
    i = i + 1

print(count)
