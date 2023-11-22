#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a, b, c, d;
    n++;
    while (1)
    {
        a = n % 10;
        b = n / 10;
        b = b % 10;
        c = n / 100;
        c = c % 10;
        d = n / 1000;
        if (a == b || a == c || a == d || b == c || c == d || b == d)
        {
            n++;
        }
        else
        {
            printf("%d", n);
            break;
        }
    }
}