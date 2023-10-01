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
int c[100];
int main()
{
    scanf("%d %d", &m, &n);
    for (i = 1; i <= n; i++)
        for (j = 1; j <= m; j++)
            c[i + j]++;

    int ma = 0;
    for (i = 0; i < n + m; i++)
        ma = max(ma, c[i]);
    for (i = 0; i < n + m; i++)
        if (ma == c[i])
            printf("%d\n", i);

    return 0;
}
