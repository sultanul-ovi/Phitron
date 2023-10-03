#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n, n1, n2, n3;
int m, m1, m2, m3;
int i, j, k;
char c;
int sum = 0, prod = 1, count = 0, flag = 0;
int rem;
int main()
{
    scanf("%d", &n);
    char ch[1001];
    for (i = 0; i < n; i++)
    {
        //fflush(stdin);
        scanf(" %c", &c);
        ch[i] = c;
        if (i >= 1 && ch[i] == ch[i - 1])
            count++;
    }

    printf("%d", count);

    return 0;
}
