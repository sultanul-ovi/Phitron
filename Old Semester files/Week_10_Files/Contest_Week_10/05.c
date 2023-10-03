#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int c[10] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            c[s[i] - 48]++;
    }
    for (int i = 0; i < 10; i++)
        if (c[i] == 0)
        {
            printf("NO");
            return 0;
        }
    printf("YES");
}
