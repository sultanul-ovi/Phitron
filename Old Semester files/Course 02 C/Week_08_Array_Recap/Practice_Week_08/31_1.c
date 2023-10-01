#include <stdio.h>
int b[101];
int main()
{
    int a[50], i, n, large, small, count = 0;
    printf("How many elements:");
    scanf("%d", &n);
    printf("Enter the Array:");

    for (i = 0; i < n; ++i)
    {
        scanf("%d", &a[i]);
        b[a[i]]++;
    }

    for (i = 1; i <= 100; ++i)
        if (b[i] == 0)
            printf("%d ", i);
    return 0;
}