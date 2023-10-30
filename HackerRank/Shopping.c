

#include <stdio.h>

int main()
{
    long long n;
    int bp = 0, bs = 0;

    scanf("%lld", &n);

    if (n > 1000)
    {
        printf("I will buy Punjabi\n");
        n = n - 1000;
        bp = 1;
    }

    if (bp && n >= 500)
    {
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
        bs = 1;
    }

    if (!bp && !bs)
    {
        printf("Bad luck!\n");
    }

    return 0;
}
