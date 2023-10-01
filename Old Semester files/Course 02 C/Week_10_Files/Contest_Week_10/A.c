#include <stdio.h>

int main()
{
    while (1)
    {
        int a;
        scanf("%d", &a);
        if (a == 42)
            break;
        printf("%d\n", a);
    }
}
