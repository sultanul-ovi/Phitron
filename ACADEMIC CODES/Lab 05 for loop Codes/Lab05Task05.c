#include <stdio.h>

int main()
{
    int n;
    int fact = 1;
    printf("Enter n value: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
        //printf("%d\t%d\n",i,fact);
    }

    printf("Factorial of %d is %d", n, fact);
    return 0;
}
