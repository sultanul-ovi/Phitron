#include <stdio.h>

int main()
{
    int a = 0, b = 0;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a < b)
    {
        int i = 0;
        for (i = a+1; i < b; i++)
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
    }
    else
    {
        int i = 0;
        for (i = b+1; i < a; i++)
            if (i % 5 == 2 || i % 5 == 3)
                printf("%d\n", i);
    }

    return 0;
}
