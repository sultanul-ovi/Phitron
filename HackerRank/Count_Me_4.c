// Written by Ovi
// Date: 2023-10-19
// Program: Count Occurrences of Alphabets from 'a' to 'z'

#include <stdio.h>
#include <string.h>

int main() {
    char S[10001];
    scanf("%s", S);

    int counts[26] = {0};  // Initialize an array to store the counts for each alphabet

    int len = strlen(S);

    for (int i = 0; i < len; i++) {
        char ch = S[i];

        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++;  // Increment the count for the respective alphabet
        }
    }

    for (int i = 0; i < 26; i++) {
        if (counts[i] > 0) {
            printf("%c - %d\n", 'a' + i, counts[i]);
        }
    }

    return 0;
}
