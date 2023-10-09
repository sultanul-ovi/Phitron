#include <stdio.h>

int main()
{
    int i, a;

    scanf("%d", &a);
    if (a % 2 == 0)
    {
        a++;
    }
    for (i = 0; i < 6; i++, a = a + 2)
    {

        printf("%d\n", a);
    }

    return 0;
}