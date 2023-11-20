#include <stdio.h>
int main()
{
    int n, m, c = 0;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        if (m < 0)
            c++;
    }
    printf("%d", c);
    return 0;
}