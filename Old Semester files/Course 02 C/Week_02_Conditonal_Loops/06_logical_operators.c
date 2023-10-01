#include <stdio.h>
#include <stdbool.h>
/*
Logical operators: && || !
check if a number is between 0 to 10
*/
int main()
{
    int a, b;
    scanf("%d", &a);

    if (a >= 0 && a <= 10)
        printf("Number is in range\n");
    else
        printf("Not in range\n");

    if (!(a < 0 || a > 10))
        printf("Number is in range\n");
    else
        printf("Not in range\n");
}