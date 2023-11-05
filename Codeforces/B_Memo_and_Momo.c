// Written by Ovi
// 2023-11-04
// Program to determine the winner based on divisibility by k.

#include <stdio.h>

int main() {
    long long a, b, k;
    scanf("%lld %lld %lld", &a, &b, &k);
    
    int a_divisible = (a % k == 0); // Check if a is divisible by k
    int b_divisible = (b % k == 0); // Check if b is divisible by k

    if (a_divisible && b_divisible) {
        printf("Both\n");
    } else if (a_divisible) {
        printf("Memo\n");
    } else if (b_divisible) {
        printf("Momo\n");
    } else {
        printf("No One\n");
    }

    return 0;
}
