#include <stdio.h>
#include <math.h>
int main()
{
    int n1, i, m;
    scanf("%d", &n1);
    double sum = 0;

    for (i = 0; i < n1; i++)
    {
        scanf("%d", &m);
        int rem = m % 10;
        int m1 = m / 10;
        sum = sum + pow(m1, rem);
    }
    printf("%.0lf", sum);

    return 0;
}