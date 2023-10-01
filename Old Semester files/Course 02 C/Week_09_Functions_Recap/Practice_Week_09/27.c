#include <stdio.h>

void ultra_sum(int a, int b, int *x, int *y)
{
    *x = a + b;
    *y = a * b;
}

int main()
{
    int a = 10, b = 20, sum, mul;
    ultra_sum(a, b, &sum, &mul);
    printf("%d %d", sum, mul);
    return 0;
}
