/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
// Write C Program to use constant variables.

#include <stdio.h>
//one way of constant variable declaration
#define pi 3.1416

int main()
{

    //another way of constant variable declaration
    const float gravity = 9.81;


    printf("value of pi: %.4f\n", pi);
    printf("value of gravity: %.2f\n", gravity);

    //gravity = gravity +1; //it will give errors
    //printf("value of gravity: %.2f\n", gravity);
    //pi = pi +1; //it will give errors
    //printf("value of pi: %.4f\n", pi);

    return 0;
}
