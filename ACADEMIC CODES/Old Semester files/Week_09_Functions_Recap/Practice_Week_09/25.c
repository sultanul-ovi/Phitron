#include <stdio.h>

void input(int n, int a[])
{
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
}

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];

    input(n, a);
    
    for (int i = 0; i < n; i++)
        printf("-> %d ", a[i]);

    return 0;
}
