/*
Write a C program that accepts two integers and prints true if either one is 5 or their sum or difference is 5.
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
    scanf("%d %d", &n1, &n2);

    if (n1 == 5 || n2 == 5 || (n1 + n2 == 5) || (n1 - n2 == 5) || (n2 - n1 == 5))
        printf("TRUE");

    return 0;
}