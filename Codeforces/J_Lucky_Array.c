// Written by Ovi
// 2023-11-04
// Program to determine if an array is lucky (minimum element frequency is odd).

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Number of elements in the array

    int A[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }

    // Find the minimum element in the array
    int min = A[0];
    for (int i = 1; i < N; ++i) {
        if (A[i] < min) {
            min = A[i];
        }
    }

    // Count the frequency of the minimum element
    int freq = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] == min) {
            ++freq;
        }
    }

    // Determine if the array is lucky or not
    if (freq % 2 == 1) { // If the frequency is odd
        printf("Lucky\n");
    } else { // If the frequency is even
        printf("Unlucky\n");
    }

    return 0;
}
