#include<stdio.h>


/*
library / built in / ready made function
user defined function / custom made function
function = procedure , sub-routine, method
*/
/**
return_type function_name(parameters)
{
    code
    return something
}
*/
/**
Functions are off two types:
1. user defined function
2. library function/ built in function

no parameter and no return statement = no input and no output
no parameter and a return statement
parameters and no return statement
parameters and a return statement

6 =  1 2 3
take three numbers from the user and
find the maximum and minimum in two user defined functions.

take a number from the user and
check if the number is even or odd in an user defined function.

take a character from the user and check if the given character
is vowel/ consonant / digit/ special symbol in an user defined function.

take a number from the user and find the number of digits
of that number in an user defined function.


local variable vs global variable.
syntax error vs logical error.

*/
void f1()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int c = a+b;
    printf("Sum of %d and %d is %d\n",a,b,c);

}

int main()
{

    f1();
    printf("\n");
    f1();

    return 0;
}
