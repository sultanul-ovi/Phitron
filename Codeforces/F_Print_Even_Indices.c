// Written by Ovi
// 2023-11-04
// Program to print elements at even indices in reverse order using recursion.

#include <stdio.h>

void printEvenIndicesReverse(int arr[], int index) {
    if (index < 0) {
        return;
    }
    if (index % 2 == 0) {
        printf("%d ", arr[index]);
    }
    printEvenIndicesReverse(arr, index - 1);
}

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }
    
    printEvenIndicesReverse(A, N - 1);
    return 0;
}
