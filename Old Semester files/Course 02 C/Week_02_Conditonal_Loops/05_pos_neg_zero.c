#include <stdio.h>

// 2 => positive
// -5 => negative
// 0 => zero

int main()
{
    int a, b;
    scanf("%d", &a);
    if (a > 0)
        printf("Positive\n");
    else if (a == 0)
        printf("Zero\n");
    else if (a == -1)
        printf("-1\n");
    else
        printf("Negative\n");

    return 0;
}