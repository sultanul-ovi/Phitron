#include <stdio.h>

int main()
{
    double radius;
    const double PI = 3.1416;

    printf("Enter radius: ");
    scanf("%lf", &radius);

    double area = radius * radius * PI;
    printf("Area of the circle: %.3lf\n", area);

    double perimeter = 2 * radius * PI;
    printf("Perimeter of the circle: %.3lf\n", perimeter);

    return 0;
}