// Written by Ovi
// Date: 2023-10-11
// Program: Search for a number X in an array A and print its position

#include <stdio.h>

int main() {
    int N, X, found = -1;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int A[N];
    
    // Read the elements into array A
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }
    
    // Read the number X to search for
    scanf("%d", &X);
    
    // Search for X in array A
    for (int i = 0; i < N; ++i) {
        if (A[i] == X) {
            found = i;
            break;
        }
    }
    
    // Output the position of X or -1 if not found
    printf("%d\n", found);
    
    return 0;
}
