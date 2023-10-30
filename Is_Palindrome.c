// Written by Ovi
// October 30, 2023
// This program reads a string and checks whether it is a palindrome or not.

#include <stdio.h>
#include <string.h>

// Function to check if the string is a palindrome
int is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char S[1001];

    // Reading the string
    scanf("%s", S);

    // Checking if the string is a palindrome
    if (is_palindrome(S)) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
