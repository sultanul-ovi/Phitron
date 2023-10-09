#include <stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (d < b)
    {
        d = d + 60;
        c = c - 1;
    }
    if ((c == a && d==b) || (c<a))
    {
        c = c +  24;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (c-a), (d-b));

    return 0;
}
