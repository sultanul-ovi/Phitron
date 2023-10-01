#include <stdio.h>

int main()
{
    int a = 10;
    printf("%d %d %lld %p\n", a, &a, &a, &a);

    int *p;
    p = &a;

    printf("%d %d %d\n", p, &p, *p);

    return 0;
}