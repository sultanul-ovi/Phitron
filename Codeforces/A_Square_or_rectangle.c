// Written by Ovi
// 2023-11-04
// Program to determine whether a shape is a square or a rectangle.

#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t); // Number of test cases

    while (t--) {
        int w, h;
        scanf("%d %d", &w, &h); // Read width and height for each test case

        if (w == h) {
            printf("Square\n");
        } else {
            printf("Rectangle\n");
        }
    }

    return 0;
}
