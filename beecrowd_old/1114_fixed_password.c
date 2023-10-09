#include <stdio.h>

int main()
{
    int i, c = 0, d = 0, a = 0;

    while (1)
    {
        scanf("%d", &c);
        if (c == 2002)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else
        {
            printf("Senha Invalida\n");
        }
    }

    return 0;
}
