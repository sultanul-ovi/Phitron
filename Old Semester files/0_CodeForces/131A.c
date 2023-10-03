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
    int n = 0;
    int i = 0, j = 0, k = 0;
    char ch = 0;
    char s[2500];
    int sum = 0, prod = 1, count = 0, flag = 0;
    int rem = 0, rev = 0;

    gets(s);

    int l = strlen(s);
    int b = 32;
    for (i = 1; i < l; i++)
    {
        if (s[i] >= 'a')
            b = 0;
    }

    for (i = 0; i < l; i++)
    {
        if (s[i] >= 97)
            s[i] = s[i] - b;
        else
            s[i] = s[i] + b;
    }
    printf("%s", s);

    return 0;
}
