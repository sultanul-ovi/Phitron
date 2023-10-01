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
int m, n, n1, n2, n3;
int i, j, k;
int sum = 0, prod = 1, count = 0, flag = 0;
int rem;
int main()
{

    char s[2500];
    gets(s);
    int l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (s[i] == '-')
        {
            sum = sum + s[i + 1] - s[i - 1] + 1;
        }
        // else if (s[i] == ';' && s[i + 1] == ')')
        //     printf("%d\n", i);
        // else if (s[i] == ';' && s[i + 1] == '-' && s[i + 2] == ')')
        //     printf("%d\n", i);
        // else if (s[i] == ':' && s[i + 1] == '-' && s[i + 2] == ')')
        //     printf("%d\n", i);
    }
    printf("%d", sum);
    return 0;
}
