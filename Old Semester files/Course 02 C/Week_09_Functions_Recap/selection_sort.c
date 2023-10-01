#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int count_swaps(int array[], int size)
{
    int count = 0;
    for (int step = 0; step < size - 1; step++)
    {
        int min_idx = step;
        for (int i = step + 1; i < size; i++)
            // To sort in descending order, change > to < in this line.
            if (array[i] < array[min_idx])
            {
                min_idx = i;
                swap(&array[min_idx], &array[step]);
                count++;
            }
    }
    return count;
}

int main()
{
    int a[5] = {2, 3, 1, 5, 4};
    int c = selectionSort(a, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\n\t%d ", c);
}