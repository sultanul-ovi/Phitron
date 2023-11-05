// Written by Ovi
// 2023-11-04
// Program to print numbers from 1 to N using recursion.

#include <stdio.h>

void printNumbers(int current, int N) {
    if (current > N) {
        return;
    }
    printf("%d\n", current);
    printNumbers(current + 1, N);
}

int main() {
    int N;
    scanf("%d", &N);
    printNumbers(1, N);
    return 0;
}
