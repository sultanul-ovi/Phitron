// Written by Ovi
// 2023-11-04
// Program to print "I love Recursion" N times using recursion.

#include <stdio.h>

void printRecursion(int n) {
    if (n == 0) {
        return;
    }
    printf("I love Recursion\n");
    printRecursion(n - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    printRecursion(N);
    return 0;
}
