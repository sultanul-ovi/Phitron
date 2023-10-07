/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
// Write C Program to find the Volume of a Cylinder(take input from user).

#include <stdio.h>

int main()
{

    float volume,radius,height;

    printf("\nEnter radius: ");
    scanf("%f", &radius);

    printf("\nEnter height: ");
    scanf("%f", &height);

    //equation to calculate the volume
    volume = (22*radius*radius*height)/7;

    printf("\nVolume of the Cylinder: %f\n ", volume);
    return 0;
}
