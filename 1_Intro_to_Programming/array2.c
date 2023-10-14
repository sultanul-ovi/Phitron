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
    int n = 5;
    int m = 6;
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 2, 4, 6, 10, 12};
    int c[n + m];
    int i = 0;

    for (int i = 0, j = 0, k = 0; i < n + m; i++)
    {
        if (a[j] < b[k] && j < n)
        {
            c[i] = a[j];
            j++;
        }
        else
        {
            c[i] = b[k];
            k++;
        }
    }

    printArray(c, n + m);

    return 0;
}
