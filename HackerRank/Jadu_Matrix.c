// Written by Ovi, 2023-11-04
// Program to check if a given matrix is a Jadu Matrix.

#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    // A Jadu Matrix must be a square matrix.
    if (N != M) {
        printf("NO\n");
        return 0;
    }

    int value, isJadu = 1;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            scanf("%d", &value);

            // Check the condition for primary diagonal and secondary diagonal.
            if ((i == j || i + j == N - 1) && value != 1) {
                isJadu = 0;
            }
            // Check the condition for non-diagonal cells.
            else if (i != j && i + j != N - 1 && value != 0) {
                isJadu = 0;
            }
        }
    }

    printf("%s\n", isJadu ? "YES" : "NO");
    return 0;
}
