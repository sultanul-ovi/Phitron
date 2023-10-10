#include <stdio.h>
#include <string.h>


int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        char s[110];
        scanf("%d", &n);
        scanf(" %s", s);
        int c = -1;
        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] == '8')
            {
                c = i;
                break;
            }
        }
        if (c == -1)
            printf("NO\n");
        else if (strlen(s) - c < 11)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}