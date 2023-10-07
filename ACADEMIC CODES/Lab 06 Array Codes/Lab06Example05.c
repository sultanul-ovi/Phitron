#include <stdio.h>
int main()
{
    int i, j;
    int r, c;
    scanf("%d %d", &r, &c);

    int marks[r][c]; /// marks is a 2D array with 3 row and 5 columns

    for (i = 0; i < r; i++) /// controls row
    {
        for (j = 0; j < c; j++) /// controls column
        {
            scanf("%d", &marks[i][j]);
        }
    }

    printf("\nElements of the 2D array: \n");
    for (i = 0; i < r; i++) /// controls row
    {
        for (j = 0; j < c; j++) /// controls column
        {
            printf("%d\t", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
