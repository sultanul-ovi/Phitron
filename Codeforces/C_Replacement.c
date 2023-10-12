// Written by Ovi
// Date: 2023-10-11
// Program: Replace every positive number by 1 and every negative number by 2 in an array A

#include <stdio.h>

int main() {
    int N;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int A[N];
    
    // Read the elements into array A
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }
    
    // Replace and print the elements
    for (int i = 0; i < N; ++i) {
        if (A[i] > 0) {
            printf("1 ");
        } else if (A[i] < 0) {
            printf("2 ");
        } else {
            printf("0 ");
        }
    }
    
    printf("\n");
    
    return 0;
}
