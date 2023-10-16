#include <stdio.h>
#include <string.h>

int main() {
    // Written by Ovi
    // Date: 2023-10-16
    // Program Summary: Replace commas with spaces and toggle case of characters.

    char S[100005];
    scanf("%s", S);

    int length = strlen(S);

    for (int i = 0; i < length; i++) {
        if (S[i] == ',') {
            // Replace comma with space
            printf(" ");
        } else if (S[i] >= 'a' && S[i] <= 'z') {
            // Convert lowercase to uppercase
            printf("%c", S[i] - 'a' + 'A');
        } else if (S[i] >= 'A' && S[i] <= 'Z') {
            // Convert uppercase to lowercase
            printf("%c", S[i] - 'A' + 'a');
        } else {
            // Leave other characters unchanged
            printf("%c", S[i]);
        }
    }

    return 0;
}
