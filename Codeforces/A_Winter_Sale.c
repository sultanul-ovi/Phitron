// Written by Ovi
// 2023-11-04
// Program to calculate the original price of a T-shirt before discount.

#include <stdio.h>

int main() {
    int X; // Discount percentage
    float P; // Price after discount
    scanf("%d %f", &X, &P);

    // Calculate original price using the formula
    double originalPrice = P / (1 - (X / 100.0));
    
    // Print the original price formatted to 2 decimal places
    printf("%.2f\n", originalPrice);
    
    return 0;
}
