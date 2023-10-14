#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>

#define LL long long
#define ULL unsigned long long

#define min(a, b) (a < b ? a : b)
#define max(a, b) (a > b ? a : b)
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))
#define ABS(x) ((x) < 0 ? -(x) : (x))

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void array_rev(int a[], int a_n)
{
    for (int ia = 0; ia < a_n / 2; ia++)
        swap(&a[ia], &a[a_n - 1 - ia]);
}

void array_rrot(int a[], int a_n, int r)
{
    r = r % a_n;
    int ia = 0, ib = 0;
    for (ib = 0; ib < r; ib++)
    {
        int temp = a[a_n - 1];
        for (ia = a_n - 1; ia > 0; ia--)
        {
            a[ia] = a[ia - 1];
        }
        a[0] = temp;
    }
}

void array_lrot(int a[], int a_n, int r)
{
    r = r % a_n;
    int ia = 0, ib = 0;
    for (ib = 0; ib < r; ib++)
    {
        int temp = a[0];
        for (ia = 0; ia < a_n - 1; ia++)
        {
            a[ia] = a[ia + 1];
        }
        a[a_n - 1] = temp;
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d  ", array[i]);
    printf("\n");
}

int main()
{
    int n, i;
    scanf("%d", &n);

    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printArray(a, n);

    int sum = 0;
    int mul = 1;

    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
        mul = mul * a[i];
    }
    printf("\n\tsum: %d\n\tMul: %d\n\n",sum, mul);

    array_rev(a, n);
    printArray(a, n);

    array_rev(a, n);

    array_lrot(a, n, 2);
    printArray(a, n);
    array_rrot(a, n, 3);
    printArray(a, n);

    return 0;
}
