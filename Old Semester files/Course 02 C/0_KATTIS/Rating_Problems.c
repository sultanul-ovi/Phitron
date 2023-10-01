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
int m, n, n1, n2, n3;
int i, j, k;
int sum = 0, prod = 1, count = 0, flag = 0;
int rem;
int main()
{
    // scanf("%d", &n);
    // scanf("%d %d", &n1, &n2);
    scanf("%d %d", &m, &n);
    // scanf("%d %d %d", &n1, &n2, &n3);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &n1);
        sum = sum + n1;
    }
    double min_a = (double)(sum - (m - n) * 3) / m;
    double max_a = (double)(sum + (m - n) * 3) / m;
    printf("%lf %lf", min_a, max_a);
    // for (i = 1; i <= n; i++)
    // {
    // }

    return 0;
}