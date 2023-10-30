// Written by Ovi
// October 30, 2023
// This program reads two numbers X and Y from the standard input and prints their summation using a function.

#include <stdio.h>

// Function to return the sum of two integers.
int sum(int a, int b) {
    return a + b;
}

int main() {
    int X, Y;

    // Reading the input
    scanf("%d %d", &X, &Y);

    // Calculating the sum using the sum function
    int result = sum(X, Y);

    // Printing the sum
    printf("%d\n", result);

    return 0;
}
