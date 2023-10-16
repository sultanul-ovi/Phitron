// Written by Ovi
// Date: 2023-10-15
// Program Summary: Concatenate two strings and print their lengths using strlen function.

#include <stdio.h>
#include <string.h>

int main() {
    char S[1001], T[1001];
    scanf("%s %s", S, T);

    printf("%ld %ld\n%s %s\n", strlen(S), strlen(T), S, T);

    return 0;
}
