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

    // scanf("%c",&ch);
    // scanf("%d %d", &n1, &n2);
    // scanf("%d %d", &p, &q);
    // scanf("%d %d %d", &n1, &n2, &n3);
    // gets(s);
    // scanf(" %s",s1);
    // int l = strlen(s);
    while (n--)
    {
        scanf("%d", &m);
        int a[m];
        flag = 0;
        int count[m+1];
        for (i = 0; i <= m; i++)
        {
            count[i]=0;
        }
        for (i = 0; i < m; i++)
        {
            scanf("%d", &a[i]);
            count[a[i]]++;
        }
        for (i = 0; i <= m; i++)
        {
            if (count[i] >= 3)
            {
                printf("%d\n", i);
                flag = 1;
                break;
            }
        }
        if (flag != 1)
                printf("-1\n");
    }

    // for (j = 1; j <= n; j++)
    // {
    // }

    // printf("%d", printFibonacci(16));
    //  printf("%d", isprime(2));
    //  printf("%d",n);
    //  printf("%d",sum);
    //  printf("%d",count);

    // if (n1 * 6 < n2)
    // {
    //     printf("No");
    // }
    // else if (n1)
    // {
    //     printf("No");
    // }
    // else
    // {
    //     printf("Yes");
    // }

    return 0;
}
