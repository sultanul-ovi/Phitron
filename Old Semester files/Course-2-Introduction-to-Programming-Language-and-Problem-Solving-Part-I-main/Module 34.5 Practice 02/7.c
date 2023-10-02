#include<stdio.h>
#include<string.h>

void ultra_sum(int a,int b,int *sum,int *mul)
{
    *sum=a+b;
    *mul=a*b;
}
int main()
{
    int a=4,b=5,summation,multiply;
    ultra_sum(a,b,&summation,&multiply);
    printf("%d %d\n",summation,multiply);
    return 0;
}
