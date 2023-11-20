#include <stdio.h>
int main()
{
    int n, m, c = 0;
    scanf("%d %d %d", &n, &m, &c);

    if (c >= n && c <= m)
        printf("Yes");
    else
        printf("No");
    return 0;
}