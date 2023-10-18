// Written by Ovi
// Date: 2023-10-18
// This program counts and prints the frequency of each number from 1 to M in an array A of N numbers.

#include <stdio.h>

int main() {
    int N, M, num;
    int freq[100001] = {0}; // Initialize frequency array to 0
    
    // Read the values of N and M
    scanf("%d %d", &N, &M);
    
    // Read N numbers and update the frequency array
    for (int i = 0; i < N; ++i) {
        scanf("%d", &num);
        freq[num]++;
    }
    
    // Print the frequency of each number from 1 to M
    for (int i = 1; i <= M; ++i) {
        printf("%d\n", freq[i]);
    }

    return 0;
}
