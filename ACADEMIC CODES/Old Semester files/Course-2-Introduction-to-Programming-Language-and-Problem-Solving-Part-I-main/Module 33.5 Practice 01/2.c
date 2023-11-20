#include<stdio.h>

int get_min(int a,int b)
{
    if(a<b) {
        return a;   // if a is less than b then you will return a
    }
    else {
        return b;   // else you will return b
    }
}
int main()
{
    printf("%d\n",get_min(10,4));
    return 0;
}
