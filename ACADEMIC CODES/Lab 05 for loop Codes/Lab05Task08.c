#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, sq;
    printf("\nHow many numbers you want to enter: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("\nEnter a number: ");
        scanf("%d", &a);

        if (a < 0)
            continue;

        sq = a * a;
        printf("\nSquare = %d\n", sq);
    }

    return 0;
}
