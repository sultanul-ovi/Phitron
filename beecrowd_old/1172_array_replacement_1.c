#include <stdio.h>

int main()
{
    int i, c = 0, d = 0, a = 0;
    int arr[10];

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] <= 0)
        {
            arr[i] = 1;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("X[%d] = %d\n", i,arr[i]);
    }

    return 0;
}
