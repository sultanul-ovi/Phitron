#include <stdio.h>

int main()
{
    int i, j;
    int height, width;

    scanf("%d %d", &height, &width);

    for (i = 1; i <= height; i++)
    {

        for (j = 1; j <= width; j++)
            printf("%d\t", i * j);
        printf("\n");
    }
}
