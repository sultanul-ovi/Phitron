n, m, a = input().split()

n = int(n)
m = int(m)
a = int(a)
count_n = int(n/a)
count_m = int(m/a)

if( a >= n and a >= m):
    print(int(1))
else:
    if n%a != 0:
        count_n = int(n/a) + 1

    if m%a != 0:
        count_m = int(m/a) + 1


    flagstones = count_m*count_n


    print(int(flagstones))