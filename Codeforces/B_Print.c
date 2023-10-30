// Written by Ovi
// October 30, 2023
// This program reads a number N from standard input and prints all numbers from 1 to N using a function.

#include <stdio.h>

// Function to print numbers from 1 to n
void printNumbers(int n) {
    for(int i = 1; i <= n; i++) {
        if (i != 1) {
            printf(" ");
        }
        printf("%d", i);
    }
    printf("\n");
}

int main() {
    int N;

    // Reading the input
    scanf("%d", &N);

    // Printing the numbers using the function
    printNumbers(N);

    return 0;
}
