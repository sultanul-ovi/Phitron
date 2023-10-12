// Written by Ovi
// Date: 2023-10-12
// Program to print numbers from 1 to N if N is positive, or from N to 0 if N is non-positive

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if(n > 0) {
        for(int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
    } else {
        for(int i = n; i <= 0; i++) {
            printf("%d ", i);
        }
    }
    printf("\n");
    
    return 0;
}
