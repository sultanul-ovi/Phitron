#include <stdio.h>

// Recursive function to find the nth term
int findTerm(int n, int a, int b, int c) {
    if(n == 1)
        return a;
    else if(n == 2)
        return b;
    else if(n == 3)
        return c;
    else
        return findTerm(n-1, b, c, a+b+c);
}

int main() {
    int n, a, b, c;
    
    // Reading input
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    
    // Printing the nth term
    printf("%d\n", findTerm(n, a, b, c));
    
    return 0;
}
