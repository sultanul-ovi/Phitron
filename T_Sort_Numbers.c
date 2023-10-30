// Written by Ovi
// October 30, 2023
// This program reads three numbers A, B, C and sorts them in ascending order. It then prints the sorted numbers and the original sequence.

#include <stdio.h>

// Function to sort three integers in ascending order
void sortThreeNumbers(int *a, int *b, int *c) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*b > *c) {
        int temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int A, B, C;

    // Reading the input
    scanf("%d %d %d", &A, &B, &C);

    // Sorting the numbers using the function
    int sortedA = A, sortedB = B, sortedC = C;
    sortThreeNumbers(&sortedA, &sortedB, &sortedC);

    // Printing the sorted numbers
    printf("%d\n%d\n%d\n\n", sortedA, sortedB, sortedC);

    // Printing the original sequence
    printf("%d\n%d\n%d\n", A, B, C);

    return 0;
}
