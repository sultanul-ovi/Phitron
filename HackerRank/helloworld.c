#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char s[100]; // Declare a char array to hold our string
    gets(s);     // Use the gets() function to take the string input

    /* Print Hello, World! */
    printf("Hello, World!\n");

    /* Print the input string */
    printf("%s", s);

    return 0;
}
