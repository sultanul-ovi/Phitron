#include <stdio.h>

int main()
{
    int i = 0;
    int j = 10;
    int n = 10;
    /*
        for (i = 1; i <= n; i = i + 2) // prints odd numbers
        {
            printf("%d\t", i);
        }
        printf("\n");
        for (i = 1; i != 20; i++) // prints odd numbers
        {
            printf("%d\t", i);
        }
        printf("\n");
        for (i = 1; i != 20; i += 2) // infinite loop
        {
            printf("%d\t", i);
        }
    */
    printf("\n");
    for (i = 1, j = 10; i < j; i++, j--)
    {
        printf("%d\t %d\n", i, j);
    }
    printf("\n\n");
    i = 0;
    j = 10;
    for (; i < j; i++, j--)
    {
        printf("%d\t %d\n", i, j);
    }
}