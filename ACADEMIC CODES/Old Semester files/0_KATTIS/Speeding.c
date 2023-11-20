#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int n, n1, n2, n3;
int m, m1, m2, m3;
int i, j, k;
char ch;
int sum = 0, prod = 1, count = 0, flag = 0;
int rem;
int main()
{
    scanf("%d", &n);
    // scanf("%c",&ch);
    // scanf("%d %d", &n1, &n2);
    //
    // scanf("%d %d %d", &n1, &n2, &n3);
    int t1 = 0, t2 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d %d", &m, &n1);
        if (m != 0)
        {
            t1 = m - t1;
            t2 = n1 - t2;
            int speed = (int)(((double)t2 / t1));
            flag = max(flag, speed);
            //printf(" %d %d %d\n", flag,t1,t2);
            t1 = m;
            t2 = n1;
        }
    }

    printf("%d", flag);

    return 0;
}
