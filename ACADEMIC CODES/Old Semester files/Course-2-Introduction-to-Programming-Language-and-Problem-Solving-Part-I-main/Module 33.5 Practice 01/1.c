#include<stdio.h>

int get_max(int a,int b)
{
    if(a>b) {
        return a;   // if a is greater than b then you will return a
    }
    else {
        return b;   // else you will return b
    }
}
int main()
{
    printf("%d\n",get_max(4,10));
    return 0;
}
