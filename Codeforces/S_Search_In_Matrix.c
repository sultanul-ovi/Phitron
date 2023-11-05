// Written by Ovi
// 2023-11-04
// Program to determine if a number X exists in an N x M matrix.

#include <stdio.h>

int main() {
    int N, M, X, exists = 0;
    scanf("%d %d", &N, &M);

    int A[N][M];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    scanf("%d", &X);
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (A[i][j] == X) {
                exists = 1;
                break;
            }
        }
        if (exists) break; // If X is found, no need to continue checking.
    }

    if (exists) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
    return 0;
}
