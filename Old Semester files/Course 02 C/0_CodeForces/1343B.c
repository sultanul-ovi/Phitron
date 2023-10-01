#include <stdio.h>


int main()
{
    int n = 0, n1 = 0, n2 = 0, n3 = 0;
    int m = 0, m1 = 0, m2 = 0, m3 = 0;
    int p = 0, q = 0;
    int i = 0, j = 0, k = 0;
    char ch = 0;
    char s[110];
    int sum = 0, prod = 1, count = 0, flag = 0;
    int rem = 0, rev = 0;

    scanf("%d", &m);
    while (m--)
    {
        scanf("%d", &n);
        if (((n / 2 - 1) + n) % 2 == 0)
            printf("NO\n");
        else
        {
            printf("YES\n");
            for (i = 1; i <= n / 2; i++)
                printf("%d ", 2 * i);
            for (i = 1; i <= n / 2 - 1; i++)
                printf("%d ", 2 * i - 1);
            printf("%d ", (n / 2 - 1) + n);
        }
    }

    return 0;
}
