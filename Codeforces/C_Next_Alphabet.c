// Written by Ovi
// Date: 2023-10-09
// This C program takes a lowercase alphabet character as input and outputs the next character in the alphabet, considering 'z' wraps to 'a'.

#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    if(c == 'z') {
        printf("a\n");
    } else {
        printf("%c\n", c + 1);
    }

    return 0;
}
