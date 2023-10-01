#include <stdio.h>
int main()
{
    int n, m, c = 0;
    char s[101];
    gets(s);
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            printf("%c", s[i]);
    }
    return 0;
}