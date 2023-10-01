#include <stdio.h>

int main()
{
    int i, j;
    int n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2)
            printf("%d is odd\n", i);
        else
            printf("%d is even\n", i);
    }
}
