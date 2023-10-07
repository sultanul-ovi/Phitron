// floating point mod not allowed
#include <stdio.h>

int main()
{
    float a = 5, b = 2, c, d;

    c = a / b;

    // will show error
    d = a % b;
    printf("%f %f", c, d);
    return 0;
}
