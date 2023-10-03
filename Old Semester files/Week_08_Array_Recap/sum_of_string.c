#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char a[100], b[100], result[50];;
    scanf("%s %s", &a, &b);

    int aa = atoi(a);
    int bb = atoi(b);
    
    int sum = aa+bb;
    sprintf(result, "%d", sum);

    printf("%s %s %s\n",a,b,result);
    printf("%d %d %d\n", aa, bb,sum);
    return 0;
}
