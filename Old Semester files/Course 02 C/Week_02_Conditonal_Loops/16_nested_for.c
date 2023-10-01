#include <stdio.h>

int main()
{
    int i, j;
    int height, width;

    scanf("%d %d", &height, &width);

    for (i = 0; i < width; i++)
        printf("*");
    printf("\n");
    for (i = 0; i < height - 2; i++)
    {
        printf("*");
        for (j = 0; j < width - 2; j++)
            printf(" ");
        printf("*");
        printf("\n");
    }
    for (i = 0; i < width; i++)
        printf("*");
    printf("\n");
}
