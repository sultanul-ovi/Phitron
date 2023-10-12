// Written by Ovi
// Date: 2023-10-12
// Program to print "I Want More Assignments" N times along with numbers 1 to N

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        printf("%d. I Want More Assignments\n", i);
    }
    
    return 0;
}
