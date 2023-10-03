#include <stdio.h>
int main()
{
    int n, m, c = 0;
    double n1, n2, prod = 1, sum = 0;
    scanf("%d", &n);
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%lf %lf", &n1, &n2);
        prod = n1 * n2;
        sum = sum + prod;
    }
    printf("%.3lf", sum);
    return 0;
}