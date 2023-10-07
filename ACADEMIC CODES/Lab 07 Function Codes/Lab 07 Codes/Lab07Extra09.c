/// Print fibonacci number using UDF.
/*
==> print fibonacci using recursive function
*/
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
#include <stdio.h>
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
int main()
{
    int N;
    printf("Enter Fibonacci Term:");
    scanf("%d", &N);
    printf("%d", fib(N-1));
    return 0;
}
