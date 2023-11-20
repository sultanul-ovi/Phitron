#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>
void swap(char *x, char *y)
{
    char temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(char array[], int size)
{
    for (int step = 0; step < size - 1; step=step+2)
    {
        int min_idx = step;
        for (int i = step + 2; i < size; i=i+2)
            // To sort in descending order, change > to < in this line.
            if (array[i] < array[min_idx])
                min_idx = i;
        swap(&array[min_idx], &array[step]);
    }
}
int main()
{
    char str[100];
    scanf("%s",str);
    int l = strlen(str);

    selectionSort(str,l);
    puts(str);
    return 0;
}
