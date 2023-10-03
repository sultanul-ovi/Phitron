#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define LL long long
#define ULL unsigned long long
#define PI acos(-1.0)

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

int max(int a, int b)
{
    return a > b ? a : b;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int main()
{
    int x = 4;

    // while (x < 4)
    // {
    //     scanf("%d", &x);
    //     printf("x is %d\n", x);
    // }

    // do
    // {
    //     scanf("%d", &x);
    //     printf("x is %d\n", x);
    // } while (x < 4);

    do
    {
        scanf("%d", &x);
    } while (x % 2 != 0);
    printf("x is %d\n", x);


    
    return 0;
}
