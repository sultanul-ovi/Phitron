#include <stdio.h>
int digits(int a)
{
    int count_a = 0, sum_a = 0, prod_a = 1, rev_a = 0, rem_a = 0;
    int array_a[10] = {0};
    while (a)
    {
        rem_a = a % 10;
        a = a / 10;
        rev_a = rev_a * 10 + rem_a;
        sum_a = sum_a + rem_a;
        prod_a = prod_a * rem_a;
        count_a++;
        array_a[rem_a]++;
    }
    return sum_a;
}


int main()
{
    int n = 0, sum = 0;
    scanf("%d", &n);
    printf("%d",digits(n));
    return 0;
}