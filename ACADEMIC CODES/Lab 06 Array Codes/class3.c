
#include <stdio.h>

int main()
{

    int i=0,j;
    int a[10]={0};

    while(i<10)
    {
        //a[i++]= i*i;
        a[++i]= i*i;
        printf("%d\t%d\n", i,a[i]);
    }

    return 0;
}