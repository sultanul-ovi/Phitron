#include <stdio.h>
int array_rrot(int a[], int a_n, int r)
{
    r = r % a_n;
    int ia = 0, ib = 0;
    for (ib = 0; ib < r; ib++)
    {
        int temp = a[a_n-1];
        for (ia = a_n - 1; ia >0 ; ia--)
        {
            a[ia] = a[ia - 1];
        }
        a[0] = temp;
    }
}
int array_lrot(int a[], int a_n, int r)
{
    r = r % a_n;
    int ia = 0, ib = 0;
    for (ib = 0; ib < r; ib++)
    {
        int temp = a[0];
        for (ia = 0; ia < a_n - 1; ia++)
        {
            a[ia] = a[ia + 1];
        }
        a[a_n - 1] = temp;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    array_rrot(a, n, 2);
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
}