#include <stdio.h>
int main()
{
    int n1, n2;

    scanf("%d %d", &n1, &n2);

    int rem1, rem2, rem3;
    rem1 = n1 % 10;
    rem2 = (n1 / 10) % 10;
    rem3 = n1 / 100;
    int m1 = rem1 * 100 + rem2 * 10 + rem3;
    rem1 = n2 % 10;
    rem2 = (n2 / 10) % 10;
    rem3 = n2 / 100;
    int m2 = rem1 * 100 + rem2 * 10 + rem3;
    if (m1 > m2)
        printf("%d", m1);
    else
        printf("%d", m2);
    return 0;
}