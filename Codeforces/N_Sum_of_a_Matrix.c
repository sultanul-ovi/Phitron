// Written by Ovi
// 2023-11-04
// Program to sum two matrices using recursion.

#include <stdio.h>

#define MAX 100

void readMatrix(int matrix[MAX][MAX], int R, int C) {
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            scanf("%d", &matrix[i][j]);
}

void printSumRecursively(int A[MAX][MAX], int B[MAX][MAX], int R, int C, int r, int c) {
    if (r >= R)  // Base case: If we have reached the end of rows, return.
        return;
    if (c >= C) {  // End of columns in this row, go to the next row.
        printf("\n");
        printSumRecursively(A, B, R, C, r + 1, 0);
        return;
    }

    // Summing and printing the element at current position.
    printf("%d ", A[r][c] + B[r][c]);

    // Recursive call for the next element in the row.
    printSumRecursively(A, B, R, C, r, c + 1);
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int A[MAX][MAX], B[MAX][MAX];

    // Reading matrices A and B.
    readMatrix(A, R, C);
    readMatrix(B, R, C);

    // Printing the sum of matrices A and B using recursion.
    printSumRecursively(A, B, R, C, 0, 0);

    return 0;
}
