// Written by Ovi
// Date: 2023-10-15
// Program Summary: Print the string S from the beginning to the first '\' character.

#include <stdio.h>
#include <string.h>

int main() {
    char S[1000001];  // Assuming maximum input length
    fgets(S, sizeof(S), stdin);

    char *backslash_position = strchr(S, '\\');
    if (backslash_position != NULL) {
        *backslash_position = '\0';  // Replace the first backslash with null character
    }

    printf("%s\n", S);

    return 0;
}
