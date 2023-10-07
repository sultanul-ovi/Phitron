/// manipulating with more than one Structure variable

/*
primary int float double char
secondary array string pointer bool
user defined data type: structure union

student er name, id, blood group, cgpa, number, address
employee info: id , name, salary, number, addresss

difference between array and structure
difference between union vs struct
difference between typedef struct vs struct



struct{

    int s_id;
    char s_name[30];
    float s_cgpa;
}s1; / s1,s2; / s[100];
*/

#include <stdio.h>
/*
struct rectangle
{
    float length;
    float breadth;
    float area;
}r1,r2;

*/
struct rectangle
{
    float length;
    float breadth;
    float area;
};
struct rectangle r1, r2; //global declaration
void main()
{
    printf("Enter the length of 1st rectangle: ");
    scanf("%f", &r1.length);
    printf("Enter the breadth of 1st rectangle: ");
    scanf("%f", &r1.breadth);

    r1.area = r1.length * r1.breadth;

    printf("Area of Rectangle 01: %.3f\n", r1.area);

    printf("Enter the length of 2nd rectangle: ");
    scanf("%f", &r2.length);
    printf("Enter the breadth of 2nd rectangle: ");
    scanf("%f", &r2.breadth);

    r2.area = r2.length * r2.breadth;

    printf("Area of Rectangle 02: %.3f\n", r2.area);

    if (r1.area > r2.area)
        printf("\nRectangle 01 is greater.\n");
    else if (r1.area < r2.area)
        printf("\nRectangle 02 is greater.\n");
    else
        printf("\nBoth equal.\n");
}
