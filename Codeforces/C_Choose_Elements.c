// Written by Ovi
// 2023-11-04
// Program to find the maximum summation of at most k elements in an array, considering negative numbers.

#include <stdio.h>
#include <stdlib.h>

// Function to compare two elements - used for qsort.
int compare(const void *a, const void *b) {
    // Sorting in descending order.
    return (*(int*)b - *(int*)a);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int a[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    // Sort the array in descending order
    qsort(a, n, sizeof(int), compare);

    long long max_sum = 0; // To handle the summation of large numbers
    // Sum up to k largest non-negative elements
    for (int i = 0; i < k && i < n && a[i] > 0; ++i) {
        max_sum += a[i];
    }

    printf("%lld\n", max_sum); // Print the maximum summation

    return 0;
}
