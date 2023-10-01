#include <stdio.h>
int main()
{
    int n, m, c = 0;
    scanf("%d %d %d", &n, &m, &c);
    int i;
    for (i = 1; i <= c; i++)
    {
        if (i % n == 0 && i % m == 0)
            printf("FizzBuzz\n");
        else if (i % n == 0)
            printf("Fizz\n");
        else if (i % m == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}