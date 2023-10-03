#include <stdio.h>

int array_rev(int a[], int a_n)
{
    for (int ia = 0; ia < a_n / 2; ia++)
    {
        int temp = a[ia];
        a[ia] = a[a_n - 1 - ia];
        a[a_n - 1 - ia] = temp;
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

    array_rev(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}