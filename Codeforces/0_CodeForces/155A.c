#include <stdio.h>

int main()
{
    int n, max, min, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (i == 0)
        {
            max = a[i];
            min = a[i];
        }
        else
        {
            if (a[i] > max)
            {
                max = a[i];
                count++;
            }
            if (a[i] < min)
            {
                min = a[i];
                count++;
            }
        }
    }

    printf("%d", count);
}