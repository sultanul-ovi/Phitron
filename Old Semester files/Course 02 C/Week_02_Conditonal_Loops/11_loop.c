#include <stdio.h>

int main()
{
    int i = 0;
    int n = 5;

    for (i = 1; i <= n; i++)
    {
        printf("%d\t", i);
    }
    printf("\n");
    for (i = 10; i < 20; i++)
    {
        printf("%d\t", i);
    }
}