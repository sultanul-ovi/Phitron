#include <stdio.h>


int main()
{
    int n = 0, sum = 0;

    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }

    printf("%d",sum);


    return 0;
}
