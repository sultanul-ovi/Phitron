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

int printFibonacci(int n)
{
    int f_a = 0, f_b = 1, f_c;

    // for (int f_i = 0; f_i < n; f_i++)
    {
        while (f_a < n)
        {
            printf("%d ", f_a);
            f_c = f_a + f_b;
            f_a = f_b;
            f_b = f_c;
        }
    }
    return (f_c - f_a);
}

unsigned long long find_factorial(int a)
{
    unsigned long long fact_f = 1;
    if (a < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
    else
    {
        for (int f_i = 1; f_i <= a; ++f_i)
        {
            fact_f *= f_i;
        }
    }
    return fact_f;
}

int isprime(int a)
{
    if (a == 2)
        return 1;
    else if (a % 2 == 0 || a == 0 || a == 1)
        return 0;
    for (int i = 3; i <= sqrt(a); i += 2)
        if (a % i == 0)
            return 0;
    return 1;
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

int lcm(int a, int b)
{
    int max_l = max(a, b) - 1;
    while (max_l++)
    {
        if (max_l % a == 0 && max_l % b == 0)
            break;
    }
    return max_l;
}

int digits(int a)
{
    int count_a = 0, sum_a = 0, prod_a = 1, rev_a = 0, rem_a = 0;
    int array_a[10] = {0};
    while (a)
    {
        rem_a = a % 10;
        a = a / 10;
        rev_a = rev_a * 10 + rem_a;
        sum_a = sum_a + rem_a;
        prod_a = prod_a * rem_a;
        count_a++;
        array_a[rem_a]++;
    }
    printf("%d\n", count_a);
    printf("%d\n", sum_a);
    printf("%d\n", prod_a);
    printf("%d\n", rev_a);
    for (int ia = 0; ia < 10; ia++)
        printf("%d occurs %d times.\n", ia, array_a[ia]);
}

int array_rev(int a[], int a_n)
{
    for (int ia = 0; ia < a_n / 2; ia++)
    {
        int temp = a[ia];
        a[ia] = a[a_n - 1 - ia];
        a[a_n - 1 - ia] = temp;
    }
}

int main()
{
    long long n = 0, n1 = 0, n2 = 0, n3 = 0;
    int m = 0, m1 = 0, m2 = 0, m3 = 0;
    int p = 0, q = 0;
    int i = 0, j = 0, k = 0;
    char ch = 0;
    char s[2500];
    int sum = 0, prod = 1, count = 0, flag = 0;
    int rem = 0, rev = 0;
    double x, x1, x2, x3;

    scanf("%lld", &n);
    // scanf("%d", &m);
    // scanf("%c",&ch);
    // scanf("%d %d", &n1, &n2);
    // scanf("%d %d", &p, &q);
    // scanf("%d %d %d", &n1, &n2, &n3);
    // gets(s);
    // scanf(" %s",s1);
    // int l = strlen(s);

    for (i = 0; i < n; i++)
    {
        x = pow(2, i);
        if ((long long)x > n)
            break;
    }

    // for (j = 1; j <= n; j++)
    // {
    // }

    // printf("%d", printFibonacci(16));
    //  printf("%d", isprime(2));
    printf("%d", i - 1);
    //  printf("%d",sum);
    //  printf("%d",count);

    return 0;
}
