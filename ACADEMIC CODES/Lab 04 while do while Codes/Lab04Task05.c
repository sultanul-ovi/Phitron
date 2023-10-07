#include <stdio.h>

int main()
{

    int sum = 0, number = 0, n = 0;

    printf("Enter the number:  ");
    scanf("%d", &number);

    do
    {
        n = number%10;
        sum = sum + n;
        number = number/10;
        //printf("\n%d\t%d\t%d\n", n,sum,number);
    } while (number!=0);
    printf("Sum of all the digits of a given number is = %d\n", sum);

    return 0;
}

/*
sum of digits of a single number
1234 = 1+2+3+4 = 10

*/