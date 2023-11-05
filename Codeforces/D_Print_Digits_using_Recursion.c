// Written by Ovi
// 2023-11-04
// Program to print digits of a number using recursion.

#include <stdio.h>

// Function to print digits of a number using recursion
void printDigits(int n) {
    if (n < 10) {  // Base case: if n is a single digit, print it.
        printf("%d ", n);
        return;
    }
    printDigits(n / 10);  // Recursive call with the first part of the number
    printf("%d ", n % 10);  // Print the last digit of the number
}

int main() {
    int T, N;
    scanf("%d", &T);  // Reading the number of test cases

    while (T--) {
        scanf("%d", &N);  // Reading the number for which digits need to be printed
        printDigits(N);
        printf("\n");  // Newline for the next test case
    }

    return 0;
}
