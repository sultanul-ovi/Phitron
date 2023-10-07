/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/

#include <stdio.h>

void input();

// the merge() function is used for merging two halves
void merge(int left, int center, int right);
// the merge_Sort() function recursively calls itself to divide the array till size becomes one.
void merge_Sort(int left, int right);
int array[100];

void input()
{

    printf("Enter your array size: ");
    int n;
    scanf("%d", &n);

    int i;
    printf("Enter your array elements: \n");
    for (i = 0; i < n; i++)
    {
        printf("Enter %d array elements: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("Your array elements: ");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", array[i]);
    }
    merge_Sort(0, n - 1);

    printf("\nAfter merge sort: ");
    for (i = 0; i < n; i++)
    {
        printf("%d    ", array[i]);
    }
    printf("\n");
}

void merge_Sort(int left, int right)
{

    if (left < right)
    {
        int center = (left + right) / 2;
        merge_Sort(left, center);
        merge_Sort(center + 1, right);
        merge(left, center, right);
    }
}

void merge(int left, int center, int right)
{
    int n1 = center - left + 1;
    int n2 = right - center;
    int array1[n1];
    int array2[n2];
    int i, j, k;
    for (i = 0; i < n1; i++)
    {
        array1[i] = array[left + i];
    }
    for (j = 0; j < n2; j++)
    {
        array2[j] = array[center + j + 1];
    }
    i = 0;
    j = 0;

    for (k = left; i < n1 && j < n2; k++)
    {
        if (array1[i] <= array2[j])
        {
            array[k] = array1[i];
            i++;
        }
        else
        {
            array[k] = array2[j];
            j++;
        }
    }
    // Copy the remaining elements of
    // left[], if there are any
    while (i < n1)
    {
        array[k] = array1[i];
        i++;
        k++;
    }
    // Copy the remaining elements of
    // right[], if there are any
    while (j < n2)
    {
        array[k] = array2[j];
        j++;
        k++;
    }
}

void main()
{
    input();
}
