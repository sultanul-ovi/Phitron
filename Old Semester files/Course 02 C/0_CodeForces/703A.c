#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
int n;

int main()
{
    int t1, t2;
    int win1, win2;

    while (scanf("%d", &n) == 1)
    {
        win1 = 0;
        win2 = 0;
        for (int i = 1; i <= n; i++)
        {
            scanf("%d %d", &t1, &t2);
            if (t1 > t2)
                win1++;
            if (t2 > t1)
                win2++;
        }
        if (win1 > win2)
        {
            printf("Mishka\n");
        }
        else if (win1 < win2)
        {
            printf("Chris\n");
        }
        else
            printf("Friendship is magic!^^\n");
    }
    return 0;
}