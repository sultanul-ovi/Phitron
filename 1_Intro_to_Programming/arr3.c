#include <stdio.h>

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

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
        printf("%d  ", array[i]);
    printf("\n");
}

int main()
{
    int a[100];

    int sz = sizeof(a) / sizeof(int);
    printf("%d %d", sz, sizeof(a));

    return 0;
}
