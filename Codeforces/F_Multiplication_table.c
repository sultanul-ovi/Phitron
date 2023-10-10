// Written by Ovi
// Date: 2023-10-09
// This C program prints the multiplication table of a given number N from 1 to 12.

#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);
    for(i = 1; i <= 12; ++i) {
        printf("%d * %d = %d\n", N, i, N * i);
    }
    return 0;
}
