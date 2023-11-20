#include <stdio.h>

int main()
{
    int to[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &to[i]);
    }

    int current = 0;
    current = to[current];
    current = to[current];
    current = to[current];
    printf("%d", current);
}