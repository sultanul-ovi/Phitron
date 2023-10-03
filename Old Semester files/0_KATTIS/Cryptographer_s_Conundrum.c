
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[1111];
    gets(s);
    int c = 0;
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (i % 3 == 0 && s[i] != 'P')
            c++;
        else if (i % 3 == 1 && s[i] != 'E')
            c++;
        else if (i % 3 == 2 && s[i] != 'R')
            c++;
    }
    printf("%d", c);

    return 0;
}
