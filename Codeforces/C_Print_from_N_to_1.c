// Written by Ovi
// 2023-11-04
// Program to print numbers from N to 1 using recursion.

#include <stdio.h>

void printNumbersDescending(int N) {
    if (N == 0) {
        return;
    }
    printf("%d", N);
    if (N > 1) {
        printf(" "); // Print a space after the number if it is not the last one.
    }
    printNumbersDescending(N - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    printNumbersDescending(N);
    return 0;
}
