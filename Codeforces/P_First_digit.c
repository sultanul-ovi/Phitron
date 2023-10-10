// Written by Ovi
// Date: 2023-10-09
// This C program checks if the first digit of a 4-digit number is even or odd.

#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);  // Read the 4-digit number
    if((x / 1000) % 2 == 0) {  // Check if the first digit is even
        printf("EVEN\n");
    } else {
        printf("ODD\n");
    }
    return 0;
}
