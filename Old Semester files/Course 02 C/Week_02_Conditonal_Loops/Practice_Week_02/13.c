/*
Write a C program to input sides of a triangle and check whether triangle is valid or not using if else.
Example
Input
Input first side: 7
Input second side: 10
Input third side: 5
Output
Triangle is valid
*/
#include <stdio.h>

int main()
{
    int side1, side2, side3;

    /* Input all three sides of a triangle */
    printf("Enter three sides of triangle: \n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}