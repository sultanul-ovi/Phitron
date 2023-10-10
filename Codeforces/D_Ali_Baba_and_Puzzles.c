// Written by Ovi
// Date: 2023-10-09
// This C program solves Ali Baba's puzzle by checking if the fourth number can be obtained by using the arithmetic operators (+, -, *) on the first three numbers in the order a, b, c.

#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    if (a + b - c == d || a + b * c == d ||
        a - b + c == d|| a - b * c == d ||
        a * b + c == d || a * b - c == d) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
