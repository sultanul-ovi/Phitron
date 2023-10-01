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
    int i = 0, j = 0, k = 0;
    char a[110];
    char b[110];

    scanf(" %s", a);
    scanf(" %s", b);
    strlwr(a);
    strlwr(b);
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] > b[i])
        {
            j = 1;
            break;
        }
        else if (a[i] < b[i])
        {
            j = -1;
            break;
        }
    }

    printf("%d", j);

    return 0;
}
