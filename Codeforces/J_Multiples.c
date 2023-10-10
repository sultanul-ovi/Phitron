// Written by Ovi
// Date: 2023-10-09
// This C program checks if A is a multiple of B or B is a multiple of A and prints "Multiples" or "No Multiples" accordingly.

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if(A % B == 0 || B % A == 0) {
        printf("Multiples\n");
    } else {
        printf("No Multiples\n");
    }
    return 0;
}
