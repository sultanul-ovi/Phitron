// Written by Ovi
// Date: 2023-10-19
// Program Summary: Count the number of elements divided by 2 and 3 in an integer array.

#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Input the size of the array

    int count_by_2 = 0, count_by_3 = 0;
    for (int i = 0; i < N; i++) {
        int num;
        scanf("%d", &num); // Input array elements
        
        if (num % 2 == 0) {
            count_by_2++; // Increment count if divisible by 2
            
        }
        else if (num % 3 == 0) {
            count_by_3++; // Increment count if divisible by 3
        }
    }

    printf("%d %d\n", count_by_2, count_by_3); // Output the counts

    return 0;
}
