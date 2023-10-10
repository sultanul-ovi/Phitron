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
    // scanf("%d", &m);
    // scanf("%c",&ch);
    // scanf("%d %d", &n1, &n2);
    // scanf("%d %d", &p, &q);
    // scanf("%d %d %d", &n1, &n2, &n3);
    // gets(s);
    // scanf(" %s",s1);
    // int l = strlen(s);

    char a[110];
    for (i = 0; i < n; i++)
    {
        scanf(" %s", a);
        for (j = 0; j < strlen(a); j++)
        {
            if (j == 0 || j == strlen(a) - 1)
                printf("%c", a[j]);
            else
            {
                printf("%c", a[j]);
                j++;
            }
        }
        printf("\n");
    }



    return 0;
}
