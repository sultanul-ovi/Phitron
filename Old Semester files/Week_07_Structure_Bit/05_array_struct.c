#include <stdio.h>

void makeNarray(int n, int out[])
{
}

int main()
{
    int n = 10;
    int a[n];

    makeNarray(n, a);

    for (int i = 0; i < n; i++)
        {
            printf("%d", a[i]);
        }
}