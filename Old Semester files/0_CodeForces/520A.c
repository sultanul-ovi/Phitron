#include <stdio.h>
#include <string.h>
int num[26];
char s[1000];
int main()
{

    int n, sum = 0, i;
    scanf("%d", &n);
    scanf("%s", s);
    strlwr(s);
    int len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            num[s[i] - 'a'] = 1;
    }
    for (i = 0; i < 26; i++)
    {
        if (num[i] == 1)
            sum++;
    }
    if (sum == 26)
        printf("YES");
    else
        printf("NO");
    return 0;
}