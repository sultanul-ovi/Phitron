#include <stdio.h>
int min(int a, int b)
{
    //return (a < b) ? a : b;
    if (a < b)
        return a;
    else
        return b;
}

int main()
{
    int m, n;
    int i, j;
    int min_danger = 9999;
    scanf("%d %d", &m, &n);

    int init_danger[m][n];
    int final_danger[m + 1][n + 2];

    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &init_danger[i][j]);

    for (i = 0; i < n + 2; i++)
        final_danger[0][i] = 0;

    for (i = 0; i < n; i++)
        final_danger[1][i + 1] = init_danger[0][i];

    for (i = 0; i < m + 1; i++)
        final_danger[i][0] = final_danger[i][n + 1] = 9999;

    for (i = 2; i < m + 1; i++)
        for (j = 1; j < n + 1; j++)
        {
            int a = min(final_danger[i - 1][j - 1], final_danger[i - 1][j]);
            int b = min(a, final_danger[i - 1][j + 1]);
            final_danger[i][j] = init_danger[i - 1][j - 1] + b;
        }
    printf("\n\n");
    for (i = 0; i < m + 1; i++)
    {
        for (j = 0; j < n + 2; j++)
        {
            printf("%d\t", final_danger[i][j]);
        }
        printf("\n");
    }

    

    for (i = 0; i < n + 2; i++)
        if (min_danger > final_danger[m][i])
            min_danger = final_danger[m][i];

    printf("\n%d\n", min_danger);

    return 0;
}
/*
4
5
3 2 5 4 8
5 7 5 6 1
4 4 6 2 3
2 8 9 5 8
*/