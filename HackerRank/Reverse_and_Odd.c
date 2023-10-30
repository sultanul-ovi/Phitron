// Written by Ovi
// Date: 2023-10-12
// Program to print array elements at odd indexes in reverse order

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for(int i = n - 1; i >= 0; i--) {
        if(i % 2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    
    return 0;
}
