// Written by Ovi
// Date: 2023-10-19
// Program: Count Consonants in a String

#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];
    int consonants = 0;

    scanf("%s", str);

    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        char ch = str[i];

        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            consonants++;
        }
    }

    printf("%d\n", consonants);

    return 0;
}
