// Written by Ovi
// Date: 2023-10-19
// Program: Calculate Fewer Days Required to Complete Work

#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int M1, M2, D;
        scanf("%d %d %d", &M1, &M2, &D);
        int ans = (D* M1/(M1+M2)) - D;


        printf("%d\n", ans > 0? ans : -ans);
    }

    return 0;
}
