// Written by Ovi
// Date: 2023-10-09
// This C program checks if A is greater than or equal to B and prints "Yes" or "No" accordingly.

#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);  
    printf(A >= B ? "Yes\n" : "No\n");  
    return 0;
}
