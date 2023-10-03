#include <stdio.h>
int main()
{
    int n1;

    scanf("%d", &n1);

    int rem1, rem2;
    rem1 = n1 % 10;
    rem2 = n1 / 10;
    int m1 = rem1 * 10 + rem2;

    printf("%d", m1);

    return 0;
}