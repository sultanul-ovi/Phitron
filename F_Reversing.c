// Written by Ovi
// Date: 2023-10-11
// Program: Print the array in reversed order without using built-in functions

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int A[N];
    
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }
    
    for (int i = N - 1; i >= 0; --i) {
        printf("%d ", A[i]);
    }
    
    
    return 0;
}
