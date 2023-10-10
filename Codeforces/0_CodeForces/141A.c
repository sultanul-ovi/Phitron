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
    int n = 0, n1 = 0, n2 = 0, n3 = 0;
    int m = 0, m1 = 0, m2 = 0, m3 = 0;
    int p = 0, q = 0;
    int i = 0, j = 0, k = 0;
    int flag = 0;
    char a[110];
    char b[110];
    char c[110];

    int d[26] = {0};
    scanf(" %s", a);
    scanf(" %s", b);
    scanf(" %s", c);

    for (i = 0; i < strlen(a); i++)
    {
        d[a[i] - 65]++;
    }
    for (i = 0; i < strlen(b); i++)
    {
        d[b[i] - 65]++;
    }
    for (i = 0; i < strlen(c); i++)
    {
        d[c[i] - 65]--;
    }
    for (i = 0; i < 26; i++)
    {
        if (d[i] !=0 )
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("NO");
    }

    else
    {
        printf("YES");
    }


    return 0;
}
