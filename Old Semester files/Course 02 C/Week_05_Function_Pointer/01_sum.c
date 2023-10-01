#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int sum(int a)
{
    int s;
    for (int i = 1; i <= a; i++)
    {
        s += i;
    }
    return s;
}

int main()
{
    int n;
    scanf("%d", &n);
    int s = sum(n);
    printf("%d", s);
}
