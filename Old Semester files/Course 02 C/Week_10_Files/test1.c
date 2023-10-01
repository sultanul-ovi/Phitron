#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        scanf("%d", &a);
        sum = sum + a;
    }
    printf("Sum -> %d", sum);
}

// test1.exe < input.txt > output.txt