#include <stdio.h>

void print_oneToN(int n)
{
    for (int i = 1; i <= n; i++)
        printf("%d \t", i);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    print_oneToN(n);
    return 0;
}
