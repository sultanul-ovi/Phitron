#include <stdio.h>
#include <string.h>

int find_lastIndex(char c, char s[])
{
    int l = strlen(s);
    int i;
    for (i = l - 1; i >= 0; i--)
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
    int x = find_lastIndex(c, s);

    printf("Last Index: %d", x);

    return 0;
}
