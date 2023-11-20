#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int n = 1, i = 1;
int main()
{

    char s1[5];
    char s2[5];
    scanf(" %s", s1);
    scanf(" %s", s2);
    for (i = 0; i < 4; i++)
    {
        if (s1[i] == s2[i])
            n = n * 1;
        else
            n = n * 2;
    }
    printf("%d", n);

    return 0;
}
