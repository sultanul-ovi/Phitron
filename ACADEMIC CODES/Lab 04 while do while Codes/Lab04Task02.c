#include <stdio.h>

int main()
{

    int i = 0, n = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    printf("Even Numbers: \n");
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            printf("%d\t", i);
        }

        i++;
    }
    printf("\nOdd Numbers: \n");
    i=0;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            printf("%d\t", i);
        }

        i++;
    }
    return 0;
}

/*
100 to 1 even numbers and 100 to 1 odd numbers
*/