// Written by Ovi
// 2023-11-04
// Program to check if a string is a palindrome using recursion.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Recursive function to check if a string is a palindrome
bool isPalindromeRec(char *s, int start, int end) {
    // Base case 1: If the string is empty or has only one character
    if (start >= end) {
        return true;
    }
    // Base case 2: If the characters at the current positions do not match
    if (s[start] != s[end]) {
        return false;
    }
    // Recursive call to check the next pair of characters
    return isPalindromeRec(s, start + 1, end - 1);
}

// Wrapper function that initiates the recursive palindrome check
bool isPalindrome(char *s) {
    int length = strlen(s);
    return isPalindromeRec(s, 0, length - 1);
}

int main() {
    char s[1001];
    scanf("%s", s); // Reading the input string
    
    // Check if the string is a palindrome and print the result
    if (isPalindrome(s)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
