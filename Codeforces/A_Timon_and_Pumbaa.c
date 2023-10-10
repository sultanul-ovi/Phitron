// Written by Ovi
// Date: 2023-10-09
// This C program calculates and prints a - b or 0 based on the condition.

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a - b >= 0 ? a - b : 0);
    return 0;
}
