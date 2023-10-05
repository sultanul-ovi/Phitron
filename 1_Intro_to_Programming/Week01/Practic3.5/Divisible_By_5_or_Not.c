#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    for (int i = 1; i <= a; i++)
    {
        if (i % 5)
            printf("%d No\n", i);
        else
            printf("%d Yes\n", i);
    }

    return 0;
}