#include <stdio.h>
#include <math.h>
int main()
{
    int n1;
    scanf("%d", &n1);
    n1 = (int)(pow(2, (double)n1)) + 1;
    printf("%d", n1*n1);
    return 0;
}
