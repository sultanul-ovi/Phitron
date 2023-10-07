/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/

#include <stdio.h>

int partition(int array[], int start, int end)
{

  int pivot = array[start], p1 = start + 1, i, temp;

  for (i = start + 1; i <= end; i++)
  {

    if (array[i] < pivot)
    {
      if (i != p1)
      {
        temp = array[p1];
        array[p1] = array[i];
        array[i] = temp;
      }
      p1++;
    }
  }

  array[start] = array[p1 - 1];
  array[p1 - 1] = pivot;

  return p1 - 1;
}

void quickSort(int array[], int low, int high)
{
  if (low < high)
  {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size)
{
  for (int i = 0; i < size; ++i)
  {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main()
{
  printf("Enter number of elements: ");
  int n;
  scanf("%d", &n);
  int data1[n];

  int i;

  printf("Enter: \n");
  for (i = 0; i < n; i++)
    scanf("%d", &data1[i]);

  //printf("Unsorted Array\n");
  //printArray(data1, n);

  // perform quicksort on data
  quickSort(data1, 0, n - 1);

  printf("\n");

  printf("Sorted: ");
  printArray(data1, n);

  int m;
  scanf("%d", &m);
  while (m--)
  {
    int a;
    scanf("%d", &a);

    for (int k = n - 1; k > 0; k--)
      if ((a - 1) < data1[k] && (a - 1) != data1[k - 1])
      {
        printf("%d", a - 1);
        break;
      }
    printf("\n");
  }
}
