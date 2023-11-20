#include <stdio.h>

int main()
{
    int value;
    scanf("%d", &value);
    
    (value < 0) ? printf("%d\n", -value) : printf("%d\n", value);

    (value % 2 == 0) ? printf("Even\n") : printf("Odd\n");
}