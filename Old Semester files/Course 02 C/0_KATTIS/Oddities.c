#include <stdio.h>
int main()
{
    int n, m, c = 0;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        if (m % 2 == 0)
            printf("%d is even\n", m);
        else
            printf("%d is odd\n", m);
    }
    return 0;
}