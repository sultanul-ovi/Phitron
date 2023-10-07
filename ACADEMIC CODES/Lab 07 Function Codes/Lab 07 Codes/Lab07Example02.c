//No arguments passed and no return value
//No input and no output of a function
#include <stdio.h>
void checkPrime();

int main()
{
    checkPrime();
    return 0;
}


void checkPrime()
{
    int num = 0, i = 0, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for (i = 2; i <= num/2 ; i++)
    {
        if(num%i==0)
            flag = 1;
    }
    if(flag ==1)
        printf("%d is not a prime number\n",num);
    else
        printf("%d is a prime number.\n",num);
}