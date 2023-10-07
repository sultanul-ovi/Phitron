#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    float average;

    printf("Number of Elements: ");
    scanf("%d", &n);

    int arr[n];

    for (i = 0; i < n; i++)
    {
        printf("Enter marks of Student %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    average = (float)sum / n;
    printf("sum = %d\n", sum);

    printf("Average = %.2f\n", average);
    return 0;

}
