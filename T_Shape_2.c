// Written by Ovi
// October 30, 2023
// This program reads a number N and prints a pyramid with N rows.

#include <stdio.h>

// Function to print the pyramid
void printPyramid(int n) {
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }
}

int main() {
    int N;

    // Reading the input
    scanf("%d", &N);

    // Printing the pyramid using the function
    printPyramid(N);

    return 0;
}
