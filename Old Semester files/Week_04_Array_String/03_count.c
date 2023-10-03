#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Number of users: ");
    scanf("%d", &n);

    int a[n];
    int b[6] = {0};
    printf("Provide ratings among 0 to 5\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
        b[a[i]]++;
    }
    double average = (double)sum / n;
    printf("Average: %.3lf\n", average);
    for (int i = 0; i < 6; i++)
    {
        printf("%d value comes %d times\n", i, b[i]);
    }
    return 0;
}