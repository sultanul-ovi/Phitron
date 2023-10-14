#include <stdio.h>

int main()
{
    int i = 0;
    int n = 0;

    for (i = 1; i <= 20; i++)
    {
        if (i == 11)
            break;
        if (i % 2)
            continue;
        else
            printf("%d is even.\n", i);
    }

    return 0;
}