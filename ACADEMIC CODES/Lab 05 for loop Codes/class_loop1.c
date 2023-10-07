#include <stdio.h>
#include <math.h>

int main()
{

    int i = 1, n = 0,sq=0;

    printf("Enter the value of N: ");
    scanf("%d", &n);
    printf("\n\t i\t | \tsquare\n");
    printf("\t-----------------------\n");
    for(i=1; i<=n; i++)
    {
        sq= pow(i,2);
        printf("\t %d\t | \t%d\n", i,sq);
    }
    printf("\t-----------------------\n");
    printf("\nValue of i after end of loop: %d\n",i);

    return 0;
}



