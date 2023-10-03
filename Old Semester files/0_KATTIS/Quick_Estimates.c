#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int N;
    scanf("%d", &N);
    while (N--)
    {
        
        char s[105];
        scanf("%s",s);
        int l = strlen(s);
        printf("%d\n", l);
    }

    return 0;
}
