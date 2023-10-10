#include <stdio.h>

int main()
{
    int m = 0;
    int count = 0;

    scanf("%d", &m);
    while (m)
    {
        if (m & 1)
            count++;
        m = m / 2;
    }

    printf("%d", count);
    return 0;
}
