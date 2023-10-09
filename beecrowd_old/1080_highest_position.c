#include <stdio.h>

int main()
{
    int i, c = 0, d = 0, a = 0;
    int arr[100];

    for (i = 0; i < 100; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > c)
        {
            c = arr[i];
            d = i + 1;
        }
    }
    printf("%d\n%d\n", c,d);

    return 0;
}
