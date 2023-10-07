#include<stdio.h>

void addition(int x,int y)
{
    int c = x+y;
    printf("Sum of %d and %d is %d\n",x,y,c);
}

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    addition(a,b);


    return 0;
}

