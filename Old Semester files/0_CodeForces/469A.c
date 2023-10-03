#include <stdio.h>

int main()
{

    int a, n, x, y, ar[1000] = {0};
    scanf("%d", &n);
    scanf("%d", &x);
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a);
        ar[a] = 1;
    }
    scanf("%d", &y);
    for (int i = 0; i < y; i++)
    {
        scanf("%d", &a);
        ar[a] = 1;
    }
    int OK = 1;
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] != 1)
        {
            OK = 0;
            break;
        }
    }
    if (OK)
        printf("I become the guy.");
    else
        printf("Oh, my keyboard!");
    return 0;
}