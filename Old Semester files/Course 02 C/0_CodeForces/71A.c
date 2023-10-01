#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char b[110];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf(" %s", b);
        if (strlen(b) <= 10)
            printf("%s\n", b);
        else
            printf("%c%d%c\n", b[0], strlen(b) - 2, b[strlen(b) - 1]);
    }
}