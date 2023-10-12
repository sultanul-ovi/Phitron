// Written by Ovi
// Date: 2023-10-11
// Program: Capitalize the first letter of a given word

#include <stdio.h>
#include <ctype.h>

int main() {
    char word[1005];
    
    // Read the word
    scanf("%s", word);
    
    // Capitalize the first letter
    word[0] = toupper(word[0]);
    
    // Print the capitalized word
    printf("%s\n", word);
    
    return 0;
}
