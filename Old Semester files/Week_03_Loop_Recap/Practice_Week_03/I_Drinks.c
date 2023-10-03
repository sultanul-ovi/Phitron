#include <stdio.h>

int main()
{
    int n = 0, n1 = 0, n2 = 0, n3 = 0;
    float m = 0, m1 = 0, m2 = 0, m3 = 0;

    float sum = 0, prod = 1, count = 0, flag = 0;


    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &m);
        sum = sum + m;
    }
    sum = sum/n;
    printf("%f", sum);


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