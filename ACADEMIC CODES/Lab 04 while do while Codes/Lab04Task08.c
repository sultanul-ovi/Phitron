#include <stdio.h>
#include <math.h>

int main()
{

    int num = 0, count=0,digit = 0,sum = 0,rev=0;
    printf("Enter the value of N: ");
    scanf("%d", &num);

    do{
        digit = num % 10;
        rev = rev*10 + digit;
        num /= 10;
        sum = sum + digit;
        count++;
    }while(num);

    printf("\nDigits: %d \n",count);
    printf("\nSum: %d \n",sum);
    printf("\nReverse Number: %d \n",rev);
    return 0;
}
