#include <stdio.h>

int main()
{
    // implicit conversion
    
    int a = 10;
    double b = a;

    printf("%d\t\t%lf\n", a, b);

    double c = 10.5;
    int d = c;

    printf("%lf\t\t%d", c, d);
    

   //explicit conversion
    double a = 10.5;

    printf("%lf %d\n", a, a);
    printf("%lf %d\n", a, (int)a);

    return 0;
}