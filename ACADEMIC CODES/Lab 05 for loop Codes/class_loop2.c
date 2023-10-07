#include <stdio.h>

int main()
{

    int i = 0, n = 0, sum=0;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(i=0; i<=n; i=i+5)
    {
        printf("%d\t",i);
        sum = sum + i;
    }

    printf("\nSum: %d \n",sum);
    return 0;
}




