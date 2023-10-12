// Written by Ovi
// Date: 2023-10-11
// Program: Execute a Bit++ program and find the final value of x

#include <stdio.h>

int main() {
    int n, x = 0;
    char statement[4];
    
    // Read the number of statements
    scanf("%d", &n);
    
    // Execute each statement
    for (int i = 0; i < n; ++i) {
        scanf("%s", statement);
        
        if (statement[1] == '+') {
            ++x;
        } else if (statement[1] == '-') {
            --x;
        }
    }
    
    // Print the final value of x
    printf("%d\n", x);
    
    return 0;
}
