
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[111];
    gets(s);
    int l = strlen(s);
    for (int i = 0; i < l; i++)
    {
        if (s[i] == 's' && s[i + 1] == 's')
        {
            printf("hiss");
            exit(0);
        }
    }
    printf("no hiss");

    return 0;
}
