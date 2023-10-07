#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0, n;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter a number (0 to stop): ");
        scanf("%d", &n);
        if (n == 0)
            break;
        sum += n;
    }
    printf("Sum = %d", sum);
    return 0;
}
