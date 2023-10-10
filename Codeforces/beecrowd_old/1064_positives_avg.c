#include <stdio.h>

int main()
{
    int i, c = 0;
    double sum = 0;

    for (i = 0; i < 6; i++)
    {
        double a;
        scanf("%lf", &a);
        if (a > 0)
        {
            c++;
            sum = sum + a;
        }
    }
    printf("%d valores positivos\n", c);
    double avg = sum/c;
    printf("%.1lf\n", avg);

    return 0;
}
