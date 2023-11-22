#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
int main()
{
    int n, ans = 0, a = 0;
    char s[110];
    scanf("%d", &n);
    scanf(" %s", s);

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            a++;
            if (a > 2)
                ans++;
        }
        else
            a = 0;
    }
    printf("%d", ans);
    return 0;
}