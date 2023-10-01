#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>

#define LL long long
#define ULL unsigned long long

#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))
#define ABS(x) ((x) < 0 ? -(x) : (x))

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

int main()
{
    int n = 0, n1 = 0, n2 = 0, n3 = 0;
    int m = 0, m1 = 0, m2 = 0, m3 = 0;
    int i = 0, j = 0, k = 0;
    // char ch = 0;
    // char s[2500];
    int sum = 0, prod = 1, count = 0, flag = 0;
    int rem = 0, rev = 0;
    // scanf("%d", &n);
    // scanf("%c",&ch);
    // scanf("%d %d", &n1, &n2);
    // scanf("%d %d", &m, &n);
    scanf("%d %d %d", &n1, &n2, &n3);
    // gets(s);
    // scanf(" %s",s1);
    // int l = strlen(s);
    if ((n1 == n2 && n2 == n3) || (n1 != n2 && n1 != n3 && n2 != n3))
        printf("No\n");
    else
        printf("Yes\n");

    // for (i = 0; i < n; i++)
    // {
    // }

    // for (j = 1; j <= n; j++)
    // {
    // }

    // printf("%d",n);
    // printf("%d",sum);
    // printf("%d",count);

    return 0;
}

/*
int: -2^31 to 2^31 - 1
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
short: -2^15 to 2^15 - 1

long long: -2^63 to 2^63-1 lld
unsigned long long llu

5e100 = 5 * 10^100
1e20 = 10^20
*/