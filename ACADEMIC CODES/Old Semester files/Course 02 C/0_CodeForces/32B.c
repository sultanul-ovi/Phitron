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
    int i, k, len;
    char s[200], num[200];
    scanf(" %s", s);
    memset(num, 0, sizeof(num));
    k = 0;
    len = strlen(s);
    for (i = 0; i < len; i++)
    {
        if (s[i] == '-')
        {
            if (s[i + 1] == '-')
            {
                num[k] = '2';
            }
            else if (s[i + 1] == '.')
            {
                num[k] = '1';
            }
            k++;
            i++;
        }
        else if (s[i] == '.')
        {
            num[k] = '0';
            k++;
        }
    }
    num[k] = '\0';
    printf("%s", num);
    return 0;
}