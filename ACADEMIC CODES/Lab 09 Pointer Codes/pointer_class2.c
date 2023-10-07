#include<stdio.h>

int main()
{
    int a =10, b = 20;
    int *p = &a; // initialization
    int *q; // declaration
    q = &b; // assignment


    printf("Sum: %d\n", *p + *q);
    printf("%d\n", a);





}

