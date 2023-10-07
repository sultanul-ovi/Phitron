#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10], *p;

    p = &a[0]; // ==> p = a;

// *p will work as variable
// *p  te value assign korle array te assign hobe.

    return 0;
}