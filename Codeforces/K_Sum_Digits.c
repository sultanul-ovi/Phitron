// Written by Ovi
// Date: 2023-10-18
// This program calculates and prints the summation of N digits from an array.

#include <stdio.h>

int main() {
    int N, sum = 0;
    char digit;
    
    // Read the number of digits
    scanf("%d", &N);
    
    // Read and sum each digit
    for (int i = 0; i < N; ++i) {
        scanf(" %c", &digit);  // Read a single character
        sum += digit - '0';    // Convert character to integer and add to sum
    }

    // Print the sum
    printf("%d\n", sum);
    
    return 0;
}
