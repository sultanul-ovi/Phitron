#include <stdio.h>
int main()
{
    int i, j;
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int b[r][c];
    int sum[r][c];

    printf("Enter the elements of 1st Matrix: \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the elements of 2nd Matrix: \n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nSum of two Matrices: \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}
