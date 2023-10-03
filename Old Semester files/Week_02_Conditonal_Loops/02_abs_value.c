#include <stdio.h>

int main()
{
    int value;
    scanf("%d", &value);

    if (value < 0)
    {
        value = -value;
    }
    printf("%d\n",value);
}