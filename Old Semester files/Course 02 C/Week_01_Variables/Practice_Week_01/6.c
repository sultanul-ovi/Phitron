#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y); // 5 0
    printf("%d", x / y); //runtime error
    return 0;
}