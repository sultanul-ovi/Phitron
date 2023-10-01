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
    int sum = 0, prod = 1, count = 1, flag = 0;


    gets(s);
    int l = strlen(s);

    for (i = 1; i < l; i++)
    {
        if(s[i] ==  s[i-1])
            count++;
        else
            count =1;
        if(count == 7)
            {
                printf("YES");
                exit(0);
            }
    }

    printf("NO");



    return 0;
}
