#include<stdio.h>
#include<string.h>

void swap(int *a,int *b)
{
    int tmp=*a;
    *a=*b;
    *b=tmp;
}
int main()
{
    int a=10,b=20;
    swap(&a,&b);
    printf("%d %d\n",a,b);
    return 0;
}
