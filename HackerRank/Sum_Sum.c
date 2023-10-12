// Written by Ovi
// Date: 2023-10-12
// Program to calculate the sum of positive and negative numbers in an array

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    int sum_positive = 0, sum_negative = 0;
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0) {
            sum_positive += arr[i];
        } else if(arr[i] < 0) {
            sum_negative += arr[i];
        }
    }
    
    printf("%d %d\n", sum_positive, sum_negative);
    
    return 0;
}
