#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    while (m--)
    {
        int x = 0;
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i] != a[i + 1] && a[i] != a[i + 2])
                x = i;
            if (a[i] != a[i + 1] && a[i + 1] != a[i + 2])
                x = i + 1;
            if (a[i] != a[i + 2] && a[i + 1] != a[i + 2])
                x = i + 2;
        }

        printf("%d\n", x+1);
    }
}