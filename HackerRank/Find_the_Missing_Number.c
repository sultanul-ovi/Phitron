// Written by Ovi, 2023-11-04
// Program to find the missing number from the product of four numbers given three of them.

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        // Handle the case where the product is 0 separately.
        if (M == 0) {
            printf("0\n");
            continue;
        }

        // Check if A, B, or C is 0, which means the missing number cannot be determined.
        if (A == 0 || B == 0 || C == 0) {
            printf("-1\n");
            continue;
        }

        // Calculate the missing number only if the product is divisible by A, B, and C.
        if (M % A == 0 && M % B == 0 && M % C == 0) {
            long long D = M / (A * B * C);
            // Check if the calculated number is an integer without a fraction.
            if (D * A * B * C == M) {
                printf("%lld\n", D);
            } else {
                printf("-1\n");
            }
        } else {
            printf("-1\n");
        }
    }

    return 0;
}
