#include <stdio.h>

int main()
{
    int i = 1;
    int n = 10;
    int sum = 0;
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum = %d\n", sum);

    int mul = 1;

    i = 1;
    do
    {

        mul = mul * i;
        i++;

    } while (i <= n);

    printf("Mul = %d\n", mul);

    return 0;
}