// Written by Ovi
// Date: 2023-10-09
// This C program takes a single letter as input and converts it to uppercase if it is lowercase, and to lowercase if it is uppercase.

#include <stdio.h>

int main() {
    char X;
    scanf("%c", &X);
    if (X >= 'a' && X <= 'z') {
        printf("%c\n", X - 32);
    } else {
        printf("%c\n", X + 32);
    }
    return 0;
}
