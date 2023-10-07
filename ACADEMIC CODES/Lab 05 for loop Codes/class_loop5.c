#include <stdio.h>
int main()
{

    int i = 0, j = 0, sum = 0, num = 0;
    printf("Enter the value of N: ");
    scanf("%d", &num);

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
            printf("\t%d",j);
        printf("\n");
    }
    return 0;
}

