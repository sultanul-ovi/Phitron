// Written by Ovi
// October 30, 2023
// This program reads an array of integers and finds the minimum and maximum elements using a function.

#include <stdio.h>

// Function to find the minimum and maximum elements in the array
void findMinMax(int arr[], int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int N;
    int min, max;

    // Reading the number of elements
    scanf("%d", &N);

    int arr[N];

    // Reading the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Finding the minimum and maximum using the function
    findMinMax(arr, N, &min, &max);

    // Printing the minimum and maximum
    printf("%d %d\n", min, max);

    return 0;
}
