// Written by Ovi
// October 30, 2023
// This program reads an array of N integers and sorts it using the Bubble Sort algorithm.

#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;

    // Reading the number of elements
    scanf("%d", &N);

    int arr[N];

    // Reading the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Sorting the array using the bubbleSort function
    bubbleSort(arr, N);

    // Printing the sorted array
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
