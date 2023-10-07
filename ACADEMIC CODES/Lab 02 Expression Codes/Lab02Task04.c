/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
// Write a C Program to Calculate Area of a Rectangle, take height and width as user input
#include <stdio.h>

int main()
{

    int area, h, w;

    printf("\nEnter height: ");
    scanf("%d", &h);

    printf("\nEnter width: ");
    scanf("%d", &w);

    area = h * w;

    printf("\nArea: %d\n ", area);
    return 0;
}
