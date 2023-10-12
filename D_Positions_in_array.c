// Written by Ovi
// Date: 2023-10-11
// Program: Print all array positions that store a number less than or equal to 10 and the number stored in that position

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
    
    // Check and print the elements and their positions
    for (int i = 0; i < N; ++i) {
        if (A[i] <= 10) {
            printf("A[%d] = %d\n", i, A[i]);
        }
    }
    
    return 0;
}
