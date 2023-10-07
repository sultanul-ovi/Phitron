/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
//Write a C program to enter two numbers and perform all arithmetic operations.
#include<stdio.h>

int main()
{
    int a,b,output;

    scanf("%d %d", &a, &b);

    output = a+b;
    printf("Sum: %d\n", output);

    output = a-b;
    printf("Subtraction: %d\n", output);

    output = a*b;
    printf("Product: %d\n", output);

    output = a/b;
    printf("Division: %d\n", output);

    output = a%b;
    printf("Modulo: %d\n", output);




    return 0;
}
