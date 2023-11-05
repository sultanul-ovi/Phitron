// Written by Ovi
// 2023-11-04
// Program to find the maximum number in an array using recursion.

#include <stdio.h>

// Function to find the maximum value in an array recursively
int findMax(int A[], int N, int idx, int maxSoFar) {
    if (idx == N) { // Base case: Reached the end of the array
        return maxSoFar;
    }
    if (A[idx] > maxSoFar) { // If the current element is greater than maxSoFar, update maxSoFar
        maxSoFar = A[idx];
    }
    return findMax(A, N, idx + 1, maxSoFar); // Recursive call to continue with the next element
}

int main() {
    int N;
    scanf("%d", &N); // Reading the number of elements N

    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]); // Reading the array elements
    }

    // Calling the recursive function with initial index 0 and the first element as the initial max
    printf("%d\n", findMax(A, N, 0, A[0]));

    return 0;
}
