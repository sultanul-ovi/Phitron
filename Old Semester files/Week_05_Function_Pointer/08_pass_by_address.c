#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Doubless(int *a)
{
    *a = *a * 2;
}
void Doubles(int a)
{
    a = a * 2;
}

int main()
{
    int x = 10;
    Doubles(x);
    printf("%d\n", x);
    Doubless(&x);
    printf("%d\n", x);
    int a = 10, b = 20;
    swap(&a, &b);
    printf("%d %d\n", a, b);
    return 0;
}