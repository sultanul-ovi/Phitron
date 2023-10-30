// Written by Ovi
// October 30, 2023
// This program reads a positive integer N and prints a specific pattern of integers.

#include <stdio.h>

void print_pattern(int N) {
    for (int i = 1; i <= N; i++) {
        // Printing leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf(" ");
        }

        // Printing numbers in reverse order starting from i
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        
        // New line for the next row
        printf("\n");
    }
}

int main() {
    int N;

    // Reading the positive integer N
    scanf("%d", &N);

    // Printing the pattern
    print_pattern(N);

    return 0;
}
