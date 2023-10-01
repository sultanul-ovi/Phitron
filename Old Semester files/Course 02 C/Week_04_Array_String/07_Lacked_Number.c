#include <stdio.h>

int main()
{
    char a[10];
    int b[10] = {0};
    scanf("%s", a);

    for (int i = 0; i < 9; i++)
    {
        b[a[i] - '0']++;
    }
    for (int i = 0; i <= 9; i++)
    {
        if (b[i] == 0)
            printf("%d", i);
    }
}