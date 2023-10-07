#include<stdio.h>

int addition(int x,int y)
{
    int c = x+y;
    return c;
    //return x+y;
}

int main()
{
    int a,b;
    while(1)
    {
        scanf("%d %d",&a,&b);
        //int c = addition(a,b);
        printf("Sum of %d and %d is %d\n",a,b,addition(a,b));
    }
    return 0;
}


