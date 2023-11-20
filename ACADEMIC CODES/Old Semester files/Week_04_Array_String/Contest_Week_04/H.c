#include <stdio.h>

int main()
{

    int p = 0, q = 0;
    int i = 0, j = 0;

    scanf("%d %d", &p, &q);

    int a[p];
    for (i = 0; i < p; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < p; i++)
    {
        printf("%d ", a[(i + q) % p]);
    }

    return 0;
}
