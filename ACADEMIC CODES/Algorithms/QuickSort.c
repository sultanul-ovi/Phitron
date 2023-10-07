/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/

#include <stdio.h>

int partition(int array[], int low, int high) {

  int pivot = array[high];
  int i = (low-1);

  // traverse each element of the array
  // compare them with the pivot
  for (int j = low; j < high; j++) {
    if (array[j] <= pivot) {

      i++;
      int temp1 = array[i];
      array[i] = array[j];
      array[j] = temp1;
    }

  }

  // swap the pivot element with the greater element at i

  int temp2 = array[i+1];
   array[i+1] = array[high];
   array[high] = temp2;

  // return the partition point
  return (i + 1);
}

void quickSort(int array[], int low, int high) {
  if (low < high) {
    int pi = partition(array, low, high);
    quickSort(array, low, pi - 1);
    quickSort(array, pi + 1, high);
  }
}

// function to print array elements
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

// main function
int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};

  int n = sizeof(data) / sizeof(data[0]);

  printf("Unsorted Array\n");
  printArray(data, n);

  // perform quicksort on data
  quickSort(data, 0, n - 1);

  printf("Sorted array: \n");
  printArray(data, n);
}
