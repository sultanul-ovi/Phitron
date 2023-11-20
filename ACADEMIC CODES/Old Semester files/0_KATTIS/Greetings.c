#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[1111];
    int flag = 0;
    scanf("%s", s);
    int l = strlen(s);

    for (int i = 0; i < l; i++)
    {
        if (s[i] == 'e')
            printf("e");
        printf("%c", s[i]);
    }
    return 0;
}
