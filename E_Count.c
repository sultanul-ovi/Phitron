// Written by Ovi
// Date: 2023-10-15
// Program Summary: Calculate and print the summation of the digits in a string.

#include <stdio.h>

int main() {
    char S[1000001];  // Assuming maximum input length
    scanf("%s", S);

    int sum = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        sum += S[i] - '0'; // Convert character to integer and add to sum
    }

    printf("%d\n", sum);

    return 0;
}
