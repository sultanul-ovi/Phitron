#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n, i, m = 0, sum = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        sum = sum + m;
    }
    printf("%d", sum - n + 1);
    return 0;
}
