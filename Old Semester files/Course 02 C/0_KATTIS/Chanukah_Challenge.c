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
int main()
{
    scanf("%d", &n);
    // scanf("%c",&ch);
    //
    // scanf("%d %d", &m, &n);
    // scanf("%d %d %d", &n1, &n2, &n3);
    for (i = 0; i < n; i++)
    {
        sum = 0;
        scanf("%d %d", &n1, &n2);
        for (j = 1; j <= n2; j++)
        {
            sum = sum + j;
        }
        printf("%d %d\n", n1, sum + n2);
    }

    // char s[2500];
    // gets(s);
    // scanf(" %s",s1);
    // int l = strlen(s);
    // printf("%d",n);
    // printf("%d",sum);
    // printf("%d",count);

    return 0;
}
