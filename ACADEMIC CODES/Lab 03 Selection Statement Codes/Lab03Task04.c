/// Write a C program to check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);

    if (number % 5 == 0)
    {
        if (number % 11 == 0)
            printf("%d is my favorite number.\n", number);
    }
    else
    {
        printf("%d is not my favorite number.\n", number);
    }

    return 0;
}
