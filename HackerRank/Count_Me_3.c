// Written by Ovi
// Date: 2023-10-19
// Program: Count Capital Letters, Small Letters, and Digits

#include <stdio.h>
#include <ctype.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        char S[10001];
        scanf("%s", S);

        int capital_count = 0;
        int small_count = 0;
        int digit_count = 0;

        for (int i = 0; S[i] != '\0'; i++) {
            char ch = S[i];

            if (isupper(ch)) {
                capital_count++;
            } else if (islower(ch)) {
                small_count++;
            } else if (isdigit(ch)) {
                digit_count++;
            }
        }

        printf("%d %d %d\n", capital_count, small_count, digit_count);
    }

    return 0;
}
