/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
// Write a C program to enter length in centimeter and convert it into meter and kilometer.
#include <stdio.h>

int main()
{

    float cm, m, km;

    printf("\nEnter length in centimeter: ");
    scanf("%f", &cm);

    m = cm / 100;
    km = m / 1000;

    printf("\nLength in meter: %f", m);
    printf("\nLength in kilometer: %f", km);

    return 0;
}
