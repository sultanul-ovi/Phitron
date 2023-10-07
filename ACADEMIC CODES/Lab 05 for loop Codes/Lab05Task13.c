#include <stdio.h>
#include <math.h>

int main()
{

    int n = 5;
    long int sum = 0, fact;

    for (int i = 1; i <= n; i++)
    {
        fact = 1;
        for (int j = 1; j <= i; j++)
            fact = fact * j;
        sum = sum + fact;
        printf("%d\n",fact);
    }

    printf("Summation of the given series is: %ld\n", sum);

    return 0;
}
