/*
Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade.Example
Input: Temperature in fahrenheit = 205
Output: Temperature in celsius = 96.11 C
Hint: Formula to convert from degree Fahrenheit to degree Celsius is given by C = (F-32)*5/9
*/

#include <stdio.h>
int main()
{
    float f, c;
    printf("Temperature in fahrenheit = ");
    scanf("%f", &f);
    printf("Temperature in celsius = %.2f C", (f - 32) * 5 / 9);
    return 0;
}