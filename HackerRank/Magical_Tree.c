// Written by Ovi
// 2023-11-05
// Program to print a Christmas tree pattern based on input size.

#include <stdio.h>
#include <math.h>

int main() {
    int n;
    // Read the size of the tree from the user input
    scanf("%d", &n);

    // Initial number of spaces is calculated based on the input size
    int space = 5 + (int)floor(n/2.0);
    // The number of stars starts at 1 for the top of the tree
    int stars = 1;

    // Loop to create the upper part of the tree (pyramid shape)
    for (int i = 0; i < (5 + (int)floor(n/2.0) + 1); i++) {
        // Print the calculated number of spaces for the current row
        for (int j = 0; j < space; j++) 
            printf(" ");
        
        // Print the calculated number of stars for the current row
        for (int j = 0; j < stars; j++) 
            printf("*");

        // Decrement spaces and increment stars for the next row
        space--;
        stars += 2;
        // Move to the next line after printing the current row
        printf("\n");
    }

    // Loop to print the trunk of the tree, which consists of 5 rows
    for (int i = 0; i < 5; i++) { 
        // Print 5 spaces to align the trunk correctly under the tree
        for (int j = 0; j < 5; j++) 
            printf(" ");
        
        // Print a number of stars equal to the input size 'n' for the trunk
        for (int k = 0; k < n; k++) 
            printf("*");
        // Move to the next line after printing the trunk row
        printf("\n"); 
    }

    return 0; // End of the program
}
