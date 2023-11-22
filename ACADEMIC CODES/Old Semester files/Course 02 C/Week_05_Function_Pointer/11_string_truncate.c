#include <stdio.h>
#include <string.h>

void Truncate(char s[], int k)
{
    if (k >= strlen(s) || k < 0)
        return;

    s[k] = '\0';
}

int main()
{
    char s[100];
    gets(s);

    int k;
    scanf("%d", &k);

    Truncate(s, k);
    printf("%s", s);
}