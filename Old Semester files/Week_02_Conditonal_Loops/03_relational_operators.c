#include <stdio.h>
#include <stdbool.h>
/*
Relational operators: >   <   >=    <=    !=  ==
true = everything except 0
false = 0
stdbool header file
*/
int main()
{
    int a = 8, b = 10;

    int c = (a > b);
    printf("Compare value = %d\n", c);
    bool d = (a < b);
    printf("Compare value = %d\n", d);
    bool e = 0;
    printf("Compare value = %d\n", e);
    bool f = true;
    printf("Compare value = %d\n", f);
    /*
    if (a < b)
    {
        printf("a is less than b\n");
    }
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    if (a <= b)
    {
        printf("a is less than or equal to b\n");
    }
    if (a >= b)
    {
        printf("a is greater than or equal to b\n");
    }
    if (a == b)
    {
        printf("a is equal to b\n");
    }
    if (a != b)
    {
        printf("a is not equal to b\n");
    }
    */
}