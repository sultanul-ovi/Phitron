#include <stdio.h>

int main()
{
    int i, j;
    int n, count = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            printf("%d is is a divisor of %d\n", i, n);
            count++;
        }
    }
    printf("Count of divisors: %d\n", count);
}
