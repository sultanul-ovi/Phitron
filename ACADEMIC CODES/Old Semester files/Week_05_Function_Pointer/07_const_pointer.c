#include <stdio.h>

int main()
{
    // const int n = 20;
    // int *pn = &n;
    // *pn = 10;
    // printf("%d", n);

    // const int n = 20;
    // const int *pn = &n; // it makes the value  part constant
    // *pn = 10;
    // printf("%d", n);

    const int n = 20;
    int m = 30;
    int *const pn = &n; // it makes the address part constant
    pn = &m;
    printf("%d", n);

    // const int *const pn = &n; // it makes both part constant

    return 0;
}