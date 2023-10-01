#include <stdio.h>

int main()
{
    int i, n;
    int sum = 0;
    int prod = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum += i;
        prod *= i;
    }
    printf("\n");
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", prod);
}
