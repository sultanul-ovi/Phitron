#include <stdio.h>
#include <string.h>

int main() {
    // Initialize an array of size 10 to count the occurrences of each digit
    int count[10] = {0};
    char str[1005];
    scanf("%s", str);  // Input the string

    // Iterate over the string
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') { // Check if the current character is a digit
            count[str[i] - '0']++;  // Increment the count of the digit
        }
    }

    // Print the counts
    for (int i = 0; i < 10; i++) {
        printf("%d ", count[i]);
    }
    printf("\n");

    return 0;
}
