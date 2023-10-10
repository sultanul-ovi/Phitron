#include <iostream>
#define pi 3.14159
using namespace std;

int main()
{

    double a, area;
    scanf("%lf", &a);
    area = a*a*pi;
    printf("A=%.4lf\n",area);
    return 0;
}