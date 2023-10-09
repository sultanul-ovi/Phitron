#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char word[101];

    scanf("%d", &n);

    while (n--)
    {
        scanf("%s", word);
        int len = strlen(word);

        if (len > 10)
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        else
            printf("%s\n", word);
    }

    return 0;
}
