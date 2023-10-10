// Written by Ovi
// Date: 2023-10-09
// This C program prints all even numbers between 1 and N inclusive, each on a separate line.

#include <stdio.h>

int main() {
    int N, i;
    scanf("%d", &N);

    if (N < 2) {
        printf("-1\n");
        return 0;
    }

    for (i = 2; i <= N; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}
