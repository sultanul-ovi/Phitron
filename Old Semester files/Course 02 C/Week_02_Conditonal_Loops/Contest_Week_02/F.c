#include <stdio.h>
int main()
{
    int n, m, c = 0;
    scanf("%d %d %d", &n, &m, &c);

    if ((n == 5 && m == 5 && c == 7) || (n == 7 && m == 5 && c == 5) || (n == 5 && m == 7 && c == 5))
        printf("YES");
    else
        printf("NO");
    return 0;
}