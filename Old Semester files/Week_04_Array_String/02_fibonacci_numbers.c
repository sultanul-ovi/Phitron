#include <stdio.h>

int main()
{
    int n;
    printf("How many fibonacci numbers do you want? ");

    scanf("%d", &n);

    long long fib[n];

    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%dth fib value %lld\n", i + 1, fib[i]);
    }
    return 0;
}