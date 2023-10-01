#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n + 1];
    int temp;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &temp);
        a[temp] = i;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
}