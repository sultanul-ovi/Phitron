#include <stdio.h>
#include <string.h>

int find_firstIndex(char c, char s[])
{
    int l = strlen(s);
    int i;
    for (i = 0; i < l; i++)
        if (s[i] == c)
            break;
    if (i == l)
        return -1;
    else
        return i;
}

int main()
{
    char s[100];
    gets(s);
    char c;
    scanf(" %c", &c);
    int x = find_firstIndex(c, s);

    printf("First Index: %d", x);

    return 0;
}
