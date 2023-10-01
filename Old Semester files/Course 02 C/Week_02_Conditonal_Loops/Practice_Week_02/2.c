/*
A = 5, B = 6, C = 10. এই মান গুলোর জন্য নিচের কোনগুলো সত্য আর কোনগুলো মিথ্যা যাচাই কর।
A < 5
A+B == 11
(A*C)%5 == 0
A>=B
!(A>B)
(A<B) && (B<C)
(A<B) || (B<C)
(A>=B) || (B<C)
(A>B) && (B<C)
!(A%5==0 && B%5==0)
(A<B && B%4==0) || (C%5==0)
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int m, n, n1, n2, n3;
int i, j, k;
int sum = 0, prod = 1, count = 0, flag = 0;

int main()
{
    int A = 5, B = 6, C = 10;

    int c = (A < 5);
    printf("%d\n", c);
    c = (A + B == 11);
    printf("%d\n", c);
    c = ((A * C) % 5 == 0);
    printf("%d\n", c);
    c = (A >= B);
    printf("%d\n", c);
    c = (!(A > B));
    printf("%d\n", c);
    c = ((A < B) && (B < C));
    printf("%d\n", c);
    c = ((A < B) || (B < C));
    printf("%d\n", c);
    c = ((A >= B) || (B < C));
    printf("%d\n", c);
    c = ((A > B) && (B < C));
    printf("%d\n", c);
    c = (!(A % 5 == 0 && B % 5 == 0));
    printf("%d\n", c);
    c = ((A < B && B % 4 == 0) || (C % 5 == 0));
    printf("%d\n", c);

    return 0;
}