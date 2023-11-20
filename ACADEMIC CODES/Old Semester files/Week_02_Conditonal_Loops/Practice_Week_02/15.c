/*
Write a C program that will first read an integer n, then read n integers. From those, it will find the sum of even integers.
Example:
Enter n: 5
Input 5 integers: 2 3 5 6 7
Sum of even integers = 8
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
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &m);
        if (m % 2 == 0)
            sum = sum + m;
    }
    printf("Sum of even integers = %d", sum);
    return 0;
}