// Written by Ovi
// Date: 2023-10-09
// This C program reads multiple lines of input each containing a number, and checks if the password is correct (1999) or not.

#include <stdio.h>

int main() {
    int X;
    
    while (scanf("%d", &X) != EOF) { // Continue reading until end of file
        if (X == 1999) {
            printf("Correct\n");
            break; // Terminate the program if the correct password is entered
        } else {
            printf("Wrong\n");
        }
    }
    
    return 0;
}
