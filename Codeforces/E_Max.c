// Written by Ovi
// Date: 2023-10-09
// This C program finds the maximum number among N given numbers.

#include <stdio.h>

int main() {
    int N, i, num, maxNum = 0;
    scanf("%d", &N);
    for (i = 0; i < N; ++i) {
        scanf("%d", &num);
        if (i == 0 || num > maxNum) maxNum = num;
    }
    printf("%d\n", maxNum);
    return 0;
}
