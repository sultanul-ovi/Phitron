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
    char ch = 0;
    char s[2500];
    int sum = 0, prod = 1, count = 0, flag = 0;
    int rem = 0, rev = 0;
    // double x, x1, x2, x3;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &m);
        char a[m];
        flag = 0;
        int c[26] = {0};
        scanf(" %s", a);
        for (j = 0; j < strlen(a); j++)
        {
            if (a[j] == a[j + 1])
                continue;
            else
            {
                c[a[j] - 65]++;
                if (c[a[j] - 65] > 1)
                {
                    flag = 1;
                    break;
                }
            }
        }
        if (flag)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
