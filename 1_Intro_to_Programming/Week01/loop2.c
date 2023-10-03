#include <stdio.h>

int main()
{
    int i = 1;

    for (i = 1; i <= 5; i++)
    {
        printf("%d\t", i);
    }

    printf("\n");

    for (i = 10; i > 0; i--)
    {
        printf("%d \t", i);
    }

    return 0;
}