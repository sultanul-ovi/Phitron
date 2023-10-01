#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>

struct name{
    char fname[25];
    char lname[25];
};

int main()
{
    int n;
    scanf("%d", &n);
    struct name names[n];
    char s1[25],s2[25];
    fflush(stdin);
    for(int i=0;i<n;i++)
    {
        scanf(" %s %s",s1,s2);
        strcpy(names[i].fname,s1);
        strcpy(names[i].lname,s2);
        for(int j=0;j<i;j++)
            {
                if(strcmp(names[i].fname,names[j].fname)==0 && strcmp(names[i].lname,names[j].lname)==0)
                {
                    printf("Yes");
                    return 0;
                }
            }
    }
    printf("No");
    return 0;
}
