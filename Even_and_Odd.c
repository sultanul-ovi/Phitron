// Written by Ovi
// October 30, 2023
// This program reads an array of N integers and counts the number of even and odd elements.

#include <stdio.h>

// Function to count and print the number of even and odd elements
void odd_even() {
    int N;

    // Reading the number of elements
    scanf("%d", &N);

    int arr[N];
    int evenCount = 0;
    int oddCount = 0;

    // Reading the array elements and counting even and odd numbers
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    // Printing the count of even and odd elements
    printf("%d %d\n", evenCount, oddCount);
}

int main() {
    // Calling the odd_even function
    odd_even();

    return 0;
}
