// Written by Ovi
// October 30, 2023
// This program reads a positive integer N and prints a specific pattern of '#' and '-' characters.

#include <stdio.h>

void print_pattern(int N) {
    for (int i = 1; i <= N; i++) {
        // Print spaces
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }

        // Print characters: # or -
        if (i % 2 == 1) {
            for (int j = 1; j <= (2 * i - 1); j++) {
                printf("#");
            }
        } else {
            for (int j = 1; j <= (2 * i - 1); j++) {
                printf("-");
            }
        }
        
        printf("\n");
    }

    // Print the reversed pattern except for the last line
    for (int i = N - 1; i >= 1; i--) {
        // Print spaces
        for (int j = 0; j < N - i; j++) {
            printf(" ");
        }

        // Print characters: # or -
        if (i % 2 == 1) {
            for (int j = 1; j <= (2 * i - 1); j++) {
                printf("#");
            }
        } else {
            for (int j = 1; j <= (2 * i - 1); j++) {
                printf("-");
            }
        }
        
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
