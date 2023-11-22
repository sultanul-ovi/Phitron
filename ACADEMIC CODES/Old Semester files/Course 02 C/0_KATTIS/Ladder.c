#include <stdio.h>
#include <math.h>
int main()
{
    int n1;
    double n2;
    scanf("%d %lf", &n1, &n2);
    int x = ceil((n1 / sin(n2*3.1415926/180)));

    printf("%d", x);
    return 0;
}