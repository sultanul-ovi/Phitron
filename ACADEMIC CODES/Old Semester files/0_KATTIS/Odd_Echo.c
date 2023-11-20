#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

long long rev(long long n)
{
    long long remainder = 0, reverse = 0;

    while (n != 0)
    {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    return reverse;
}

long long b_to_d(long long n)
{
    long long dec = 0, i = 0, rem;

    while (n != 0)
    {
        rem = n % 10;
        n /= 10;
        dec += rem * (long long)(pow(2, i));
        ++i;
    }

    return dec;
}

long long d_to_b(long long n)
{
    long long bin = 0;
    long long rem, i = 1;

    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}

int main()
{
    long long n = 0;
    scanf("%lld", &n);
    n = b_to_d(rev(d_to_b(n)));
    printf("%lld", n);

    return 0;
}
