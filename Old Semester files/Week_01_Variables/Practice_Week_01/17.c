/*
Write a C program to input temperature in Centigrade and convert to Fahrenheit. Example
Input: Temperature in Celsius = 100
Output: Temperature in Fahrenheit = 212.0 F
Hint: Temperature conversion formula from degree Celsius to Fahrenheit is given by F = (C*9/5) + 32
*/
#include <stdio.h>
int main()
{
    float f, c;
    printf("Temperature in Celsius = ");
    scanf("%f", &c);
    printf("Temperature in Fahrenheit = %.2f F", (c * 9 / 5) + 32);
    return 0;
}