#include <stdio.h>

int main()
{

    int t, n, a[1001], c1 = 0, c2 = 0, j, i;
    scanf("%d", &t);
    for (i = 0; i < t; ++i)
    {
        c1 = 0;
        c2 = 0;
        scanf("%d", &n);
        for (j = 0; j < n; ++j)
        {
            scanf("%d", &a[j]);
            if (j % 2 != a[j] % 2)
            {
                if (j % 2 == 0)
                    c1++;
                if (j % 2)
                    c2++;
            }
        }
        if (c1 == c2)
            printf("%d\n", c1);
        else
            printf("-1\n");
    }
    return 0;
}
