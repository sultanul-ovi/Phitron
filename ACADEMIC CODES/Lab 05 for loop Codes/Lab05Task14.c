/// take a number from user and print it's prime digits.

#include<stdio.h>
int main()
{
    int number,rem,i,count;
    scanf("%d", &number);

    while(number!=0)
    {
        rem = number%10; /// whether rem is a prime digit or not
        count=0;
        for(i=1;i<=rem;i++)
        {
            if(rem%i==0) count++;
        }

        if(count==2) printf("%d\n",rem);

        number = number/10;
    }
}
