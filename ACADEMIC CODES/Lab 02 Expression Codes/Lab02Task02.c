/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
// Write a C Program to Calculate Area and Circumference of Circle.
#include <stdio.h>
#define pi 3.1416

int main()
{

    float area, circumference, radius;

    printf("\nEnter radius: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("\nArea: %f\n ", area);
    printf("\nCircumference: %f\n ", circumference);

    return 0;
}
