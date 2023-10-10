// Written by Ovi
// Date: 2023-10-09
// This C program checks if a two-digit number is lucky or not.

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int firstDigit = N / 10;
    int secondDigit = N % 10;

    if (secondDigit == 0 || (firstDigit % secondDigit == 0) || (secondDigit % firstDigit == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
