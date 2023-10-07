// write a c program that checks if the input number is positive, negative or neutral.
#include <stdio.h>
/***
 + - * / %
> < >= <=
== !=
AND OR NOT
&&  ||  !

T && T = T
T && F = F
F && T = F
F && F = F

T || T = T
F || T = T
T || F = T
F || F = F


False: 0
True: non zero 1 2 3 -2 -3

*/



int main()
{
    /*
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("This is a positive number. \n");
    }

    printf("we are learning if else type 1. \n");
    */
    /*
        if (num > 0)
        {
            printf("This is a positive number. \n");
        }
        else
        {
            printf("This is a negative number. \n");
        }

        printf("we are learning if else type 1. \n");
    */
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    if(num>0)
    {
        printf("This is a positive number. \n");
    }
    else if(num == 0)
    {
        printf("This is a neutral number.\n");
    }
    else
    {
        printf("This is a negative number. \n");
    }

    //printf("we are learning if else type 1. \n");

    return 0;
}