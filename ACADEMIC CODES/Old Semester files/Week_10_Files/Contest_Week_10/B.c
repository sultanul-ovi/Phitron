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
    int i = 0;
    char ch = 'a';
    char s[100];
    int count = 0;
    scanf(" %s", s);
    int l = strlen(s);

    for (i = 0; i < l; i++)
    {
        if (s[i] == ch)
            count++;
    }
    if (count > (l - count))
        printf("%d", l);
    else
        printf("%d", count * 2 - 1);


    return 0;
}
