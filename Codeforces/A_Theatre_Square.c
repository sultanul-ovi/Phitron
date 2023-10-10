#include <stdio.h>

int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    
    long long flagstones_n = (n + a - 1) / a;
    long long flagstones_m = (m + a - 1) / a;

    printf("%lld\n", flagstones_n * flagstones_m);

    return 0;
}
