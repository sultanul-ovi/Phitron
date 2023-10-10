// Written by Ovi
// Date: 2023-10-09
// This C program determines the number of participants who will advance to the next round of a contest.

#include <stdio.h>

int main() {
    int n, k, i, count = 0;
    scanf("%d %d", &n, &k);  // Read n and k
    
    int scores[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &scores[i]);  // Read scores
    }
    
    for(i = 0; i < n; i++) {
        if(scores[i] >= scores[k-1] && scores[i] > 0) {
            count++;  // Increment count if conditions are met
        }
    }
    
    printf("%d\n", count);  // Output the count
    return 0;
}
