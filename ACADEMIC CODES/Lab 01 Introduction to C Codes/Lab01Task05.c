/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
// write a c program to take input and print 4 types of data variables.

#include <stdio.h>

int main()
{
    // int (4 bytes) , float (4 bytes), double(8 bytes), char(1 bytes)

    //variable declaration
    int a;
    float b;
    double c;
    char d;

    //value assignment
    a = 10;
    b = 6.23;
    c = 5.23234234;
    d = 'a';

    //variable initialization
    int e =0;
    float f = 0;
    double g = 0;
    char h = 'z';



    //format specifier
    printf("%d %f %lf %c\n\n", a, b, c, d);
    //print function
    printf("%d %f %lf %c\n\n", e, f, g, h);


    //input taking
    scanf("%d %f %lf %c", &a, &b, &c, &d);


//value of variables
    printf("\nvalue of int: %d\n", a);
    printf("value of float: %f\n", b);
    printf("value of double: %lf\n", c);
    printf("value of char: %c\n\n", d);

    //size of variables
    printf("size of int: %d\n", sizeof(a));
    printf("size of float: %d\n", sizeof(b));
    printf("size of double: %d\n", sizeof(c));
    printf("size of char: %d\n\n", sizeof(d));

    //address of variables
    printf("address of int: %d\n", &a);
    printf("address of float: %d\n", &b);
    printf("address of double: %d\n", &c);
    printf("address of char: %d\n\n", &d);

    return 0;
}
