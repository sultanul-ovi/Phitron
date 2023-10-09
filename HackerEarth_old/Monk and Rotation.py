

test = int(input())

for i in range(0, test):
    n, k = input().split()
    n = int(n)
    k = int(k)
    k = int(k % n)
    
    arr = []
    arr = list(input().split())
    # print(arr)
    arr = arr[n-k:] + arr[:n-k]
    for j in range(0,n):
        print(arr[j],end =' ')
    print('\n')
