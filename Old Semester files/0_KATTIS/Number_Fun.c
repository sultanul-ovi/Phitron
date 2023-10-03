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
int sum = 0, prod = 1, count = 0, flag = 0;
int rem;
int main()
{
    scanf("%d", &n);
    // scanf("%d %d", &n1, &n2);
    // scanf("%d %d", &m, &n);
    //
    for (i = 0; i < n; i++)
    {
        scanf("%d %d %d", &n1, &n2, &n3);
        if (n1 + n2 == n3 || n1 - n2 == n3 || n2 - n1 == n3 || n1 * n2 == n3)
            printf("Possible\n");
        else if ((n1 % n2 == 0 && n1 / n2 == n3) || (n2 % n1 == 0 && n2 / n1 == n3))
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
}
