#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int l,r;
    scanf("%d %d",&l,&r);
    char str[100000];
    scanf(" %s",str);
    int len = strlen(str);
    char str2[len];
    strcpy(str2,str);
    for(int i=l-1,j=r-1;i<r;i++,j--)
        str2[i]= str[j];
    puts(str2);
    return 0;
}
