#include <stdio.h>
int m, n, n1;
int i, j, k;
int sum = 0;

int main()
{
    scanf("%d", &m);
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &n1);
        sum = sum + n1;
    }
    printf("%d", m * n - sum + m);
    return 0;
}