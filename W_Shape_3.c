// Written by Ovi
// October 30, 2023
// This program reads a number N and prints a diamond shape with 2N rows.

#include <stdio.h>

// Function to print the diamond shape
void printDiamond(int n) {
    // Print the upper part of the diamond
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
    // Print the lower part of the diamond
    for (int i = n; i >= 1; i--) {
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

    // Printing the diamond using the function
    printDiamond(N);

    return 0;
}
