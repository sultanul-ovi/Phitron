// Written by Ovi
// Date: 2023-10-09
// This C program prints all the divisors of a given number N in ascending order.

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
