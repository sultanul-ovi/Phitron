// Written by Ovi
// 2023-11-04
// Program to calculate the sum of array elements from the beginning using recursion.

#include <stdio.h>

long long int sumArray(int arr[], int index) {
    if (index < 0) {
        return 0;
    } else {
        return arr[index] + sumArray(arr, index - 1);
    }
}

int main() {
    int N;
    scanf("%d", &N);
    
    int A[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("%lld\n", sumArray(A, N - 1));
    return 0;
}
