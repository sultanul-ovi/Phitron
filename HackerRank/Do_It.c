// Written by Ovi
// Date: 2023-10-19
// Program: Print Numbers from 1 to K N Times

#include <stdio.h>

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= K; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
