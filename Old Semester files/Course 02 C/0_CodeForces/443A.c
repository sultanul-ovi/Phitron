#include <stdio.h>
#include <string.h>
int num[26];
char s[1000];
int main()
{

    int sum = 0, i;
    gets(s);
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
    printf("%d", sum);
    return 0;
}