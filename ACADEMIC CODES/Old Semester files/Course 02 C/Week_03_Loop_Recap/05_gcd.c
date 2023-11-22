#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

#define LL long long
#define ULL unsigned long long
#define PI acos(-1.0)

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))
#define ABS(x) ((x) < 0 ? -(x) : (x))

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int gcd(int a, int b)
{
    while (a)
    {
        int rem_g = b % a;
        b = a;
        a = rem_g;
    }
    return b;
}
int n, n1, n2, n3;
int m, m1, m2, m3;
int i, j, k;
char ch;
int sum = 0, prod = 1, count = 0, flag = 0;
int rem, rev;
int main()
{
    // scanf("%d", &n);
    // scanf("%c",&ch);
    // scanf("%d %d", &n1, &n2);
    scanf("%d %d", &m, &n);
    int x = gcd(m, n);
    // scanf("%d %d %d", &n1, &n2, &n3);
    // for (i = 0; i < n; i++)
    // {
    // }
    // for (j = 1; j <= n; j++)
    // {
    // }

    // char s[2500];
    // gets(s);
    // scanf(" %s",s1);
    // int l = strlen(s);
    printf("%d", x);
    // printf("%d",sum);
    // printf("%d",count);

    return 0;
}
