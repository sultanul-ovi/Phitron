#include<stdio.h>
#define con 4.0/3
#define pi 3.14159

int main(){

    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c)
    {
        printf("%d eh o maior\n",a);
    }

    else if(c>b && c>b)
    {
        printf("%d eh o maior\n",c);
    }
    else
    {
        printf("%d eh o maior\n",b);
    }
    ;
    return 0;
}