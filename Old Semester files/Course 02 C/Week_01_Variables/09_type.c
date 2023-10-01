#include <stdio.h>

int main()
{
    int a = 10, b = 6;

    int div1 = a / b;
    float div2 = a / b;
    float div3 = (float)a / (float)b;

    printf("%d \n%f\n%f", div1, div2, div3);

    return 0;
}