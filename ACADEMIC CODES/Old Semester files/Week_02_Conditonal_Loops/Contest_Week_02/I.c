#include <stdio.h>
#define min3(a, b, c) min(a, min(b, c))

int min(int a, int b)
{
    return a < b ? a : b;
}
int main()
{
    int n, m, c = 0;
    scanf("%d %d %d", &n, &m, &c);

    int s1 = m + n;
    int s2 = m + c;
    int s3 = n + c;

    int s = min3(s1, s2, s3);
    printf("%d", s);
    return 0;
}