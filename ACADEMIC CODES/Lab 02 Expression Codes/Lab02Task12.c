#include <stdio.h>
int main()
{
    int a, b;
    a = 10;
    printf("Value of a: %d\n", a);                      /// a=10
    a++;                                                /// post increment of a
    printf("value of a after post increment: %d\n", a); /// a=11
    ++a;                                                /// pre increment of a
    printf("value of a after pre increment: %d\n", a);  /// a=12

    b = a++; /// b=12, a=13
    printf("value of a: %d and value of b: %d\n", a, b);
    b = ++a; /// a=14, b= 14
    printf("value of a: %d and value of b: %d\n", a, b);
}
