/*
Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient 
and modulus of two given numbers.
Input
First number: 10
Second number: 5
Output
Sum = 15
Difference = 5
Product = 50
Quotient = 2
Modulus = 0
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);
    printf("Quotient = %d\n", num1 / num2);
    printf("Modulus = %d\n", num1 % num2);
    return 0;
}