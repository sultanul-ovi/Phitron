/*
একটি প্রোগ্রাম লিখ যেটি কোন সংখ্যা জোড় না বিজোড় বলতে পারে।
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

    if (n % 2)
        printf("%d is Odd.\n", n);
    else
        printf("%d is Even.\n", n);
    return 0;
}