/*
Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.  For example: inputs 7, 3, 6, 14 should output yes. Inputting 21, 42 should output no.
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
    scanf("%d", &n1);
    if (n1 % 3 == 0 && n1 % 7 == 0)
        printf("NO");
    else if (n1 % 3 == 0 || n1 % 7 == 0)
        printf("YES");
    else
        printf("NO");

    return 0;
}