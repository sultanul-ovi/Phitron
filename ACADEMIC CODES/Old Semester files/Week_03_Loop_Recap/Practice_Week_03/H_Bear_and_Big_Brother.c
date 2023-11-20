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
    int n = 0, n1 = 0, n2 = 0, n3 = 0;
    int m = 0, m1 = 0, m2 = 0, m3 = 0;
    int i = 0, j = 0, k = 0;

    int sum = 0, prod = 1, count = 0, flag = 0;
    int rem = 0, rev = 0;

    scanf("%d %d", &m, &n);


    for (i = 0;; i++)
    {
        count++;
        m = m * 3;
        n = n * 2;
        if (m > n)
            break;
    }


    printf("%d",count);

    return 0;
}

