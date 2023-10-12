// Written by Ovi
// Date: 2023-10-11
// Program: Calculate the absolute summation of an array of numbers

#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    long long int sum = 0, num;

    // Read the number of elements
    scanf("%d", &N);

    // Read and sum the elements
    for (int i = 0; i < N; ++i) {
        scanf("%lld", &num);
        sum += num;
    }

    // Output the absolute sum
    printf("%lld\n", llabs(sum));

    return 0;
}
