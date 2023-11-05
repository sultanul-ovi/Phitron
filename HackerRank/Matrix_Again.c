// Written by Ovi, 2023-11-04
// Program to print the last row and the last column of a 2D matrix.

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int matrix[N][M];

    // Reading the matrix from the input
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Printing the last row
    for (int j = 0; j < M; ++j) {
        printf("%d ", matrix[N - 1][j]);
    }
    printf("\n");

    // Printing the last column
    for (int i = 0; i < N; ++i) {
        printf("%d ", matrix[i][M - 1]);
    }
    printf("\n");

    return 0;
}
