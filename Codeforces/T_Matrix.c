// Written by Ovi
// 2023-11-04
// Program to compute the absolute difference between the sums of the diagonals of an N x N matrix.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, primarySum = 0, secondarySum = 0;
    scanf("%d", &N);

    int A[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            scanf("%d", &A[i][j]);
            if (i == j) {
                primarySum += A[i][j];
            }
            if (i == N - j - 1) {
                secondarySum += A[i][j];
            }
        }
    }

    printf("%d\n", abs(primarySum - secondarySum));
    return 0;
}
