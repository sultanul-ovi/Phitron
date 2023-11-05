// Written by Ovi
// 2023-11-04
// Program to calculate the factorial of a number using recursion.

#include <stdio.h>

// Recursive function to calculate factorial
unsigned long long factorial(int N) {
    if (N == 0 || N == 1) { // Base case: factorial of 0 or 1 is 1
        return 1;
    }
    return N * factorial(N - 1); // Recursive step: N * factorial of N-1
}

int main() {
    int N;
    scanf("%d", &N); // Reading the number N

    // Call the recursive function and print the factorial of N
    printf("%llu\n", factorial(N));

    return 0;
}
