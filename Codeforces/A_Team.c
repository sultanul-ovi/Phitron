// Written by Ovi
// Date: 2023-10-09
// This C program calculates the number of problems that three friends will solve in a contest.

#include <stdio.h>

int main() {
    int n, i, p, v, t, count = 0;
    scanf("%d", &n);  // Read the number of problems
    
    for(i = 0; i < n; i++) {
        scanf("%d %d %d", &p, &v, &t);  // Read the confidence level for each friend for each problem
        if(p + v + t >= 2) {  // Check if at least two of them are sure about the solution
            count++;  // Increment the count
        }
    }
    
    printf("%d\n", count);  // Output the count
    return 0;
}
