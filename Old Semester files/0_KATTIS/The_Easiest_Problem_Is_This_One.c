#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int n, n1, n2, n3;
int m, m1, m2, m3;
int i, j, k;
char ch;
int sum = 0, prod = 1, count = 0, flag = 0;
int rem;
int s(int r)
{
    int c = 0, x = 0;
    while (r)
    {
        c = r % 10;
        x = x + c;
        r = r / 10;
    }
    return x;
}
int main()
{
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 11;; i++)
        {
            m = n * i;
            int c = s(n);
            int d = s(m);
            if (c == d)
            {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
