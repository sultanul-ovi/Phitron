#include <stdio.h>

int main()
{
    int i, c = 0, d = 0, e = 0, f = 0;

    for (i = 0; i < 5; i++)
    {
        int a;
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            c++;
        }
        else
        {
            d++;
        }
        if (a > 0)
        {
            e++;
        }
        else if(a <0)
        {
            f++;
        }
    }
    printf("%d valor(es) par(es)\n", c);
    printf("%d valor(es) impar(es)\n", d);
    printf("%d valor(es) positivo(s)\n", e);
    printf("%d valor(es) negativo(s)\n", f);

    return 0;
}
