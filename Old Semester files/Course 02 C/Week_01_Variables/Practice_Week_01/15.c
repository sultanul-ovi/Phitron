/*
Write a C program that takes a positive float number and outputs its integer part and real part.
Expected Input/Output:
Enter Number: 3.578
Integer part: 3
Real part: .578
Hint: To find the real part, you can subtract the integer part from the number.
*/
#include <stdio.h>

int main()
{
    float p;
    printf("Enter Number: ");
    scanf("%f", &p);
    int a = p;
    float b = p - a;
    printf("Intefger part = %d", a);
    printf("\nReal Part = %0.4f", b);

    return 0;
}