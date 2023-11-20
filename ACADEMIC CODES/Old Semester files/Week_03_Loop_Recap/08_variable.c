#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>

int main()
{
    /*
    const int price = 10;
    // price = 10; // error
    printf("%d", price);

    int hello = 20;
    printf("%d", price);
*/
    /*
        int p10 = 1;
        for (int i = 0; i <= 10; i++)
        {
            printf("%d\n", p10);
            p10 *= 10;
        }

        printf("%d\n", INT_MAX);
        printf("%d\n", INT_MIN);
    */
    /*
    float temp = 1e20;
    printf("%f\n", temp);

    double t2 = 1e20;
    printf("%lf\n", t2);
    double cube = pow(10, 3);
    printf("%lf\n", cube);
     // sqrt
     //  ceil
     //  floor
 */
    char ch = 'A';
    printf("%d %c\n", ch, ch);
    // for (int i = 32; i <= 126; i++)
    //     printf("%d %c\n", i, i);
    return 0;
}
/*
int: -2^31 to 2^31 - 1
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);
short: -2^15 to 2^15 - 1

long long: -2^63 to 2^63-1 lld
unsigned long long llu
*/