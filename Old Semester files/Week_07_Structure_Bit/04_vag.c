#include <stdio.h>
void divide(int x, int y, int *r, int *m)
{
    *r = x / y;
    *m = x % y;
}
struct Result
{
    int vagfol;
    int vagshesh;
};
struct Result div(int x, int y)
{
    return (struct Result){x / y, x % y};
}
int main()
{
    int a = 10, b = 3;

    int r, m;
    divide(a, b, &r, &m);
    printf("\n%d %d\n", r, m);

    struct Result result = div(a, b);
    printf("\n%d %d", result.vagfol, result.vagshesh);
}
