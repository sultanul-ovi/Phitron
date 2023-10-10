// Written by Ovi
// Date: 2023-10-09
// This C program counts the number of even, odd, positive, and negative numbers among N given numbers.

#include <stdio.h>

int main() {
    int N, i, num;
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    scanf("%d", &N);

    for (i = 0; i < N; ++i) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            ++evenCount;
        } else {
            ++oddCount;
        }

        if (num > 0) {
            ++positiveCount;
        } else if (num < 0) {
            ++negativeCount;
        }
    }

    printf("Even: %d\n", evenCount);
    printf("Odd: %d\n", oddCount);
    printf("Positive: %d\n", positiveCount);
    printf("Negative: %d\n", negativeCount);

    return 0;
}
