#include <stdio.h>

int main()
{
    int num1 = 20, num2 = 6;

    // scanf("%d %d", &num1, &num2);

    num1 = num1 + 10;
    printf("%d\t%d\n", num1, num2);
    num1 += 10;
    printf("%d\t%d\n", num1, num2);
    num1 -= 10;
    printf("%d\t%d\n", num1, num2);
    num2 *= 6;
    printf("%d\t%d\n", num1, num2);
    num2 /= 5;
    printf("%d\t%d\n", num1, num2);
    num2 %= 2;
    printf("%d\t%d\n", num1, num2);

    int a = 100;

    // increment operators.
    a = a + 1;
    printf("A: %d\n", a);
    a += 1;
    printf("A: %d\n", a);
    a++;
    printf("A: %d\n", a);
    ++a;
    printf("A: %d\n", a);

    int b = 100;
    // decrement operators.
    b = b - 1;
    printf("B: %d\n", b);
    b -= 1;
    printf("B: %d\n", b);
    b--;
    printf("B: %d\n", b);
    --b;
    printf("B: %d\n", b);

    return 0;
}