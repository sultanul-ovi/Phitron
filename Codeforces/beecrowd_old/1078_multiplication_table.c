#include <stdio.h>

int main()
{
    int i, c = 0, d = 0, a = 0;
    scanf("%d", &c);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i,c,i*c);
    }

    return 0;
}
