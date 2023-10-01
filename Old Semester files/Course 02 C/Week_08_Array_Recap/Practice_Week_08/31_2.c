#include <stdio.h>

int main()
{
    int a[50], i, n, large, small, count = 0;
    printf("How many elements:");
    scanf("%d", &n);
    printf("Enter the Array:");

    for (i = 0; i < n; ++i)
        scanf("%d", &a[i]);

    for (i = 1; i < n; ++i)
    {
        for (int j = i; j < n; j++)
            if (a[i] == a[j + 1])
            {
                printf("%d ", a[i]);
                count++;
            }
    }
    if (count)
        printf("\nTotal duplicates: %d", count);
    else
        printf("No duplicates.");
    return 0;
}