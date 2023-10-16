#include <stdio.h>
#include <string.h>

int main() {
    // Input
    char A[11], B[11];
    scanf("%s %s", A, B);

    // Calculate sizes of A and B
    int sizeA = strlen(A);
    int sizeB = strlen(B);

    // Concatenate A and B
    char concatenated[22];
    strcpy(concatenated, A);
    strcat(concatenated, B);

    // Swap the first characters of A and B
    char temp = A[0];
    A[0] = B[0];
    B[0] = temp;

    // Output
    printf("%d %d\n", sizeA, sizeB);
    printf("%s\n", concatenated);
    printf("%s %s\n", A, B);

    return 0;
}
