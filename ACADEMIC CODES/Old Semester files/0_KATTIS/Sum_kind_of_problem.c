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
int m1, m2, m3;
int i = 1, j = 1, k;
int sum = 0, prod = 1, count = 0, flag = 0;
int rem;
int main()
{

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        int s1 = 0, s2 = 0, s3 = 0, j = 1;
        scanf("%d %d", &n1, &n2);

        while (n2)
        {
            s1 = s1 + j;
            s2 = s2 + 2 * j - 1;
            s3 = s3 + 2 * j;
            j++;
            n2--;
            // printf("%d %d %d %d\n", n1, s1, s2, s3);
        }
        printf("%d %d %d %d\n", n1, s1, s2, s3);
    }

    return 0;
}
