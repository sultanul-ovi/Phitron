#include <stdio.h>
#define max 0
#define min 9999999999
int main()
{
    int i, n, sum = 0, large = 0, lowest = 99999999;

    printf("Number of Elements: ");
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter marks of Student %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] > large)
            large = arr[i];

        if (arr[i] < lowest)
            lowest = arr[i];
    }

    printf("Lowest Element = %d\n", lowest);
    printf("Largest Element = %d\n", large);

    return 0;
}
