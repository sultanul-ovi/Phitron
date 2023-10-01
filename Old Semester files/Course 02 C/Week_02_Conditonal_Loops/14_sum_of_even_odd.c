#include <stdio.h>

int main()
{
    int i, n;
    int sum_even = 0;
    int prod_even = 1;
    int sum_odd = 0;
    int prod_odd = 1;
    scanf("%d", &n);
    printf("i\tsum\tproduct\n");
    printf("-------------------\n");
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += i;
            prod_even *= i;
            printf("%d\t%d\t%d\n", i, sum_even, prod_even);
        }
        else
        {
            sum_odd += i;
            prod_odd *= i;
            printf("%d\t%d\t%d\n", i, sum_odd, prod_odd);
        }
    }
    printf("-------------------\n");
    printf("Sum: %d\n", sum_even);
    printf("Product: %d\n", prod_even);
    printf("Sum: %d\n", sum_odd);
    printf("Product: %d\n", prod_odd);
    printf("-------------------\n");
}
