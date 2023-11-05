// Written by Ovi
// 2023-11-04
// Program to print the mirrored version of a 2D array.

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int A[N][M];

    // Reading the array elements.
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &A[i][j]);
        }
    }

    // Printing the mirrored array.
    for (int i = 0; i < N; ++i) {
        for (int j = M - 1; j >= 0; --j) {
            printf("%d ", A[i][j]);
        }
        printf("\n"); // New line at the end of each row.
    }

    return 0;
}
