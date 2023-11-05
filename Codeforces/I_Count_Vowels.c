// Written by Ovi
// 2023-11-04
// Program to count the number of vowels in a string using recursion.

#include <stdio.h>
#include <string.h>
#include <ctype.h> // for tolower function

// Helper function to check if a character is a vowel
int isVowel(char ch) {
    ch = tolower(ch); // Convert character to lowercase
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

// Recursive function to count vowels
int countVowels(char *s, int index, int len) {
    if (index == len) { // Base case: end of string
        return 0;
    }
    // Check if the current character is a vowel, then add the result of the recursive call
    return isVowel(s[index]) + countVowels(s, index + 1, len);
}

int main() {
    char S[201]; // Assuming string size will not exceed 200
    fgets(S, 201, stdin); // Reading the string with spaces

    // Remove the newline character at the end of the string if present
    S[strcspn(S, "\n")] = 0;

    int len = strlen(S); // Get the length of the string

    // Call the recursive function and print the number of vowels
    printf("%d\n", countVowels(S, 0, len));

    return 0;
}
