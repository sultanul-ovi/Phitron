/// Print fibonacci number using UDF.
/*
1. print first 10 fibonacci number
2. print 10th fiboncci number
3. print fibonacci series below 100
4. print sum of first 10 fibonacci numbers
5. print fibonacci numbers from 50 to 100.

*/
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..
#include<stdio.h>
void fibo(int);
int main()
{
    int N;
    printf("Enter Fibonacci Term:");
    scanf("%d", &N);
    fibo(N);
}

void fibo(int term)
{
    int a=0,b=1,c;
    printf("%d  %d  ",a,b);
    for(int i=1;i<=term-2;i++)
    {
        c = a + b;
        printf("%d  ",c);
        a = b;
        b = c;
    }

    //printf("%d  ",c);
}
