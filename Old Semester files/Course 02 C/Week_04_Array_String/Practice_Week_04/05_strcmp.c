#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    char a[100];
    char b[100];
    char c[100];
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", a);
        if (i >= 1)
        {
            if (strcmp(a, b) >= 1)
                strcpy(c, b);
            else
                strcpy(c, a);
        }
        strcpy(b, a);
    }
    printf("\nLexicographycally smallest string is %s\n", c);

    return 0;
}