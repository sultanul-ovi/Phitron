// Written by Ovi
// October 30, 2023
// This program reads an array of N integers and counts the number of elements before the first occurrence of '1'.

#include <stdio.h>

// Function to count the number of elements before the first '1'
int count_before_one(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            return i;
        }
    }
    return -1;  // '1' not found in the array
}

int main() {
    int N;

    // Reading the size of the array
    scanf("%d", &N);

    int arr[N];

    // Reading the array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    // Counting the elements before the first '1' and printing the count
    int count = count_before_one(arr, N);

    if (count != -1) {
        printf("%d\n", count);
    } else {
        printf("%d\n",N);
    }

    return 0;
}
