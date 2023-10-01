#include <stdio.h>
#include <stdlib.h>

void change_values(int a[], int n, int l, int r)
{
    for (int i = l; i <= r; i++)
    {
        a[i] = 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int l = 1, r = 3;
    change_values(a, n, l, r);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}
