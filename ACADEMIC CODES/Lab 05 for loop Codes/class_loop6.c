#include <stdio.h>
int main()
{

    int i = 0, j = 0, sum = 0, num = 0,fact=1;
    printf("Enter the value of N: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        fact=1;
        for(j=1; j<=i; j++)
            fact = fact*j;
        printf("\t%d\n",fact);
        sum = sum + fact;
    }
    printf("\n\tSum: %d\n",sum);
    return 0;
}

