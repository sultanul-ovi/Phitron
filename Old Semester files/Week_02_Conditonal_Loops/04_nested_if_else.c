#include <stdio.h>

// 6 3 => 6 is divisible by 3
// 8 3 => 8 is not divisible by 3
// 7 0 => You can not divide by 0

int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    if (b != 0)
    {
        printf("Remainder is %d", a % b);
        if (a % b == 0)
            printf("%d is divisible by %d.\n", a, b);
        else
            printf("%d is not divisible by %d.\n", a, b);
    }
    else
    {
        printf("You can not divide by 0.\n");
    }

    return 0;
}