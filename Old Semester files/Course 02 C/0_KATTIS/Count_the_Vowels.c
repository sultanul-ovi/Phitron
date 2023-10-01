
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
        if (s[i] == 'A' || s[i] == 'a' || s[i] == 'E' || s[i] == 'e' || s[i] == 'I' || s[i] == 'i' || s[i] == 'O' || s[i] == 'o' || s[i] == 'U' || s[i] == 'u')
            c++;
    }
    printf("%d", c);

    return 0;
}
