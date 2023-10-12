// Written by Ovi
// Date: 2023-10-11
// Program: Compare two strings lexicographically, ignoring case

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str1[105], str2[105];
    int result = 0;
    
    // Read the two strings
    scanf("%s", str1);
    scanf("%s", str2);
    
    // Compare the strings lexicographically, ignoring case
    for (int i = 0; i < strlen(str1); ++i) {
        char c1 = tolower(str1[i]);
        char c2 = tolower(str2[i]);
        
        if (c1 < c2) {
            result = -1;
            break;
        } else if (c1 > c2) {
            result = 1;
            break;
        }
    }
    
    // Print the result
    printf("%d\n", result);
    
    return 0;
}
