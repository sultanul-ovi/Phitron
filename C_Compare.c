// Written by Ovi
// Date: 2023-10-18
// This program reads two strings and prints the one that is lexicographically smaller.
 
#include <stdio.h>
#include <string.h>
 
int main() {
    char X[21], Y[21];
    
    // Read the two strings
    scanf("%s %s", X, Y);
 
    // Compare the strings and print the smaller one
    if (strcmp(X, Y) < 0) {
        printf("%s\n", X);
    } else {
        printf("%s\n", Y);
    }
 
    return 0;
}