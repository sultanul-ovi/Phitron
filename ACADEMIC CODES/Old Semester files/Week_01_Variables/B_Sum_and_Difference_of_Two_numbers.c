#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float c, d;
    scanf("%f %f", &c, &d);
    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f", c+d, c-d);
    return 0;
}