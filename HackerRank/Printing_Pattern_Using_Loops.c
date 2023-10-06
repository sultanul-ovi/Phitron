#include <stdio.h>

int max(int a, int b, int c, int d) {
    int max_ab = (a > b) ? a : b;
    int max_cd = (c > d) ? c : d;
    return (max_ab > max_cd) ? max_ab : max_cd;
}

void print_pattern(int n) {
    int size = 2*n-1;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            printf("%d ", max(i, j, size - i + 1, size - j + 1) + 1 - n);
        }
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    print_pattern(n);
    return 0;
}
