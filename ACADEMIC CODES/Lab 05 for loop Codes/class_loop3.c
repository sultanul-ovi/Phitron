#include <stdio.h>
int main()
{

    int num = 0, count=0,digit = 0,sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &num);

    do{
        digit = num % 10;
        num /= 10;
        sum = sum + digit;
        count++;
    }while(num);

    printf("\nDigits: %d \n",count);
    printf("\nSum: %d \n",sum);
    return 0;
}





