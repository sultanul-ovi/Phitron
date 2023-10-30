#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s) {
    int i = n - 1;

    // Find the first pair s[i] and s[i-1] such that s[i] > s[i-1]
    while (i > 0 && strcmp(s[i], s[i-1]) <= 0)
        i--;

    if (i == 0)
        return 0; // This is the last permutation

    int j = n - 1;

    // Find the smallest s[j] such that s[j] > s[i-1]
    while (strcmp(s[j], s[i-1]) <= 0)
        j--;

    // Swap s[j] and s[i-1]
    char *temp = s[i-1];
    s[i-1] = s[j];
    s[j] = temp;

    // Reverse s[i..n-1]
    int l = i, r = n - 1;
    while (l < r) {
        temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }

    return 1;
}

int main() {
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char*));
    for (int i = 0; i < n; i++) {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }
    do {
        for (int i = 0; i < n; i++)
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));
    for (int i = 0; i < n; i++)
        free(s[i]);
    free(s);
    return 0;
}
