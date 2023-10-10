// Written by Ovi
// Date: 2023-10-09
// This C program calculates the largest number of Katryoshkas that can be made given n eyes, m mouths, and k bodies.

#include <stdio.h>

long long min(long long a, long long b) {
    return a < b ? a : b;
}

int main() {
    long long n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    
    long long total = 0;

    // First try to make Katryoshkas with "one eye, one mouth, one body"
    long long option1 = min(n, min(m, k));
    total += option1;
    n -= option1;
    m -= option1;
    k -= option1;
    
    // Then try to make Katryoshkas with "two eyes and one body"
    long long option2 = min(n / 2, k);
    total += option2;
    n -= 2 * option2;
    k -= option2;

    // Finally try to make Katryoshkas with "two eyes, one mouth, one body"
    long long option3 = min(n / 2, min(m, k));
    total += option3;
    
    printf("%lld\n", total);
    return 0;
}
