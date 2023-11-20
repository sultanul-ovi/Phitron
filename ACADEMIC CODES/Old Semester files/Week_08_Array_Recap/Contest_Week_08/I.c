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

    int sum = 0, prod = 1, count = 0, flag = 0;
    int rem = 0, rev = 0;
    scanf("%d",&n);
    char s[n];
    scanf(" %s",s);

    int l = strlen(s);
    for (i = 0; i < l; i++)
    {
        if (s[i] == 'n')
            count++;
        if(s[i]== 'z')
            flag++;
    }

    for (i = 0; i < count; i++)
    {
        printf("1 ");
    }
        for (i = 0; i < flag; i++)
    {
        printf("0 ");
    }
    

    return 0;
}
