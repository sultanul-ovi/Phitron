#include <stdio.h>

int main()
{
    int a = 0, b = 0, i = 0, sum = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    if (a < b)
    {
        for (i = a + 1; i < b; i++)
        {
            if (i % 2 != 0)
                sum = sum + i;
        }
    }
    else
    {
        for (i = b + 1; i < a; i++)
        {
            if (i % 2 != 0)
                sum = sum + i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
