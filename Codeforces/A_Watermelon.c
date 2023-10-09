#include <stdio.h>

int main() {
    int w;
    scanf("%d", &w);
    printf(w > 2 && w % 2 == 0 ? "YES\n" : "NO\n");
    return 0;
}