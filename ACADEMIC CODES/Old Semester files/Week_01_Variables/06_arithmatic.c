#include <stdio.h>

int main()
{
    int num1, num2;

    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;
    printf("%d + %d = %d\n", num1, num2, sum);

    int sub = num1 - num2;
    printf("%d - %d = %d\n", num1, num2, sub);

    int prod = num1 * num2;
    printf("%d * %d = %d\n", num1, num2, prod);

    int div = num1 / num2;
    printf("%d / %d = %d\n", num1, num2, div);

    int mod = num1 % num2;
    printf("%d %% %d = %d\n", num1, num2, mod);

    float a = 20, b = 6;

    float div2 = a / b;
    printf("%.2f / %.2f = %.2f\n", a, b, div2);

/*  ==> not allowed. Mod(%) only works with integers.
    float mod2 = a % b;
    printf("%f %% %f = %f\n", a, b, mod2);
*/
    return 0;
}