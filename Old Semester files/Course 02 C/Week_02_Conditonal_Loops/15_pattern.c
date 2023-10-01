#include <stdio.h>

int main()
{
    int i, n;

    scanf("%d", &n);

    printf("***********************\n");
    for (i = 0; i < n - 2; i++)
    {
        printf("*                     *\n");
    }
    printf("***********************\n\n");

    printf("***********************\n");
    for (i = n - 2; i > 0; i--)
    {
        printf("*                     *\n");
    }
    printf("***********************\n\n");
}
