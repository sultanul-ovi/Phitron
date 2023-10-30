// Written by Ovi
// Date: 2023-10-12
// Program to update the value at a given index and then print the array in reverse order

#include <stdio.h>

int main() {
    int n, x, v;
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d %d", &x, &v);
    
    arr[x] = v;
    
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
