#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int m, n, n1, n2, n3;
int i, j, k;
int sum, prod = 1, count = 0, flag = 0;
int rem, rev;
int main()
{
    scanf("%d", &n);

    while (n)
    {
        rem = n % 10;
        printf("%d\n", rem);
        n = n / 10;
        count++;
        sum = sum + rem;
        rev = rev * 10 + rem;
    }
    printf("Count: %d\n", count);
    printf("Sum: %d\n", sum);
    printf("Rev: %d\n", rev);

    return 0;
}