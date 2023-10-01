
#include <stdio.h>
#include <string.h>
char s[100005];

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int cnt = 0;
        scanf("%s", s);
        int len = strlen(s);
        for (int i = 0; i < (len + 1) / 2; i++)
        {
            if (s[i] == s[(len + 1) / 2 + i])
            {
                cnt++;
            }
        }
        if (cnt == (len + 1) / 2)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}