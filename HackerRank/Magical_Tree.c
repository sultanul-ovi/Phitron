#include <stdio.h>
#include <math.h>


int main() {
    int n;
    scanf("%d", &n);
    int space = 5 + (int)floor(n/2.0);
    int stars = 1;
    for (int i = 0; i < (5 + (int)floor(n/2.0) + 1); i++) {
        for (int j = 0; j < space; j++) 
            printf(" ");
        for (int j = 0; j < stars; j++) 
            printf("*");
        space--;
        stars++;
        stars++;
        printf("\n");
    }

    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) 
            printf(" ");
        for (int k = 0; k < n; k++) 
            printf("*");
        printf("\n"); 
    }

    return 0;
}
