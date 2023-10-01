#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n = 0, sum = 0;
    char s[1010];
    scanf("%s", s);
    int a[10] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        if ((s[i]-48) >= 0 && (s[i]-48) <= 9)
            a[(s[i]-48)]++;
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
