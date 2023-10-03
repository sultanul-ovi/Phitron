#include <stdio.h>
int main()
{
    int n, m, c = 0;
    scanf("%d %d", &n, &m);

    if (m + n >= 10)
        printf("error");
    else
        printf("%d", m + n);
    return 0;
}