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
int n1, n2, n3;
int i, j, k;
int sum = 0, prod = 1, count = 0, flag = 0;

int main()
{
    for (i = 1; i <= 10; i++)
    {
        sum = sum + i;
        printf("Add %d:\t\tNew sum: %d\n", i, sum);
    }
    printf("\nSum: %d\n\n", sum);
    sum = 0;
    for (i = 1; i <= 29; i = i + 2)
    {
        sum = sum + i;
        printf("Add %d:\t\tNew sum: %d\n", i, sum);
    }
    printf("\nSum: %d\n\n", sum);
    sum = 0;
    for (i = 50, j = 1; j <= 20; i--, j++)
    {
        sum = sum + i;
        printf("Add %d:\t\tNew sum: %d\n", i, sum);
    }
    printf("\nSum: %d\n\n", sum);
    sum = 0;
    for (i = 2, j = 1; j <= 10; i = i + 3, j++)
    {
        sum = sum + i;
        printf("Add %d:\t\tNew sum: %d\n", i, sum);
    }
    printf("\nSum: %d\n\n", sum);
    sum = 0;
    for (i = 100; i > 0; i = i - 3)
    {
        sum = sum + i;
        printf("Add %d:\t\tNew sum: %d\n", i, sum);
    }
    printf("\nSum: %d\n\n", sum);
    return 0;
}