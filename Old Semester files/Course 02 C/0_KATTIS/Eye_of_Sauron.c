#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[111];
    scanf("%s", s);
    int l = strlen(s);
    // printf("%d\n\n", l);
    for (int i = 0; i < l; i++)
    {
        if (s[i] == '(' && s[l - i - 1] == ')')
        {
            break;
        }
        if (s[i] != s[l - i - 1])
        {
            //printf("%c %c\n", s[i], s[l - i - 1]);
            printf("fix");
            exit(0);
        }
    }
    printf("correct");
    return 0;
}
