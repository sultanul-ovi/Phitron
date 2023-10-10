#include <stdio.h>

int main()
{
    int i, c = 0, d = 0, a = 0;
    int arr[20];

    for (i = 0; i < 20; i++)
    {
        scanf("%d", &arr[19-i]);
    }
    for (i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n", i,arr[i]);
    }

    return 0;
}
