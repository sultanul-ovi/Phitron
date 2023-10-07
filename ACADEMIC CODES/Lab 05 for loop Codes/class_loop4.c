#include <stdio.h>
int main()
{

    int i = 0, j = 0 , sum = 0, num = 0;
    printf("Enter the value of N: ");
    scanf("%d", &num);

    for(i=1,j=num-1; (i<num || j>0);i++,j--)
    {
        sum = i + j;
        printf("\tSum: %d \n",sum);

    }
    return 0;
}






