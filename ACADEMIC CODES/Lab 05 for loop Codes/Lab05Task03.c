#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n = 0;

    //printf("Enter the value of n: ");

    for ( ; ; )
    {
        scanf("%d", &n);
        printf("Hello world\n");
        /*
        if (n==0) exit(0);
        if (n==0) break;
        */
    }

    printf("\nValue of i after end of loop: %d\n", n);

    return 0;
}
