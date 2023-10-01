#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>

int main()
{
    int n = 0, n1 = 0, n2 = 0, n3 = 0;
    int m = 0, m1 = 0, m2 = 0, m3 = 0;

    scanf("%d %d %d", &n1, &n2, &n3);
    scanf("%d %d %d", &m1, &m2, &m3);
    scanf("%d", &n);

    int s1 = n / (n1 + n3) * n1 + ((n % (n1 + n3) > n1) ? n1 : n % (n1 + n3));
    int s2 = n / (m1 + m3) * m1 + ((n % (m1 + m3) > m1) ? m1 : n % (m1 + m3));

    if (n2 * s1 < m2 * s2)
        printf("Aoki");
    else if (n2 * s1 > m2 * s2)
        printf("Takahashi");
    else
        printf("Draw");

    return 0;
}
