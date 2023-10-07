#include<stdio.h>

int main()
{
   int n, i, j, x, count=0;

    //starting of input taking section
    FILE *fp;
    fp = fopen("input.txt", "r");
    if(!fp)
    {
        printf("Input file not found\n");
        return 0;
    }
    fscanf(fp, "%d", &n);
    int matrix[n][n];

    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            fscanf(fp, "%d", &matrix[i][j]);

    printf("   ");
    for(i=0; i<n; i++) printf("%d  ", i);
    printf("\n");

    for(i=0; i<n; i++)
    {
        printf("%d  ", i);
        for(j=0; j<n; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");

}
