// Written by Ovi
// Date: 2023-10-09
// This C program prints the digits of a given number N from right to left for each test case.

#include <stdio.h>

int main() {
    int T;
    unsigned int N;
    scanf("%d", &T);

    for(int i = 0; i < T; ++i) {
        scanf("%u", &N);

        if(N == 0) {
            printf("0\n");
            continue;
        }

        while(N > 0) {
            printf("%u ", N % 10);
            N /= 10;
        }
        printf("\n");
    }

    return 0;
}
