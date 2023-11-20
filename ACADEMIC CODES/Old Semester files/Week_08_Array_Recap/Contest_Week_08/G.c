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
    int flag = 0, j = 0;
    int count = 5;
    char t[1001];
    char p[] = "heidi";
    gets(t);
    for (int i = 0; i < strlen(t) && count>0; i++)
    {
        if (t[i] == p[j])
        {
            j++;
            count--;
        }
    }
    //printf("%d\n",count);
    if (count)
        printf("NO");
    else
        printf("YES");

    return 0;
}
