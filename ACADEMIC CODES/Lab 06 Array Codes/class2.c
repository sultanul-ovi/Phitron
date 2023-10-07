
#include <stdio.h>

int main()
{

    int i=2,j=3;
    int a[10]={0};

    a[i+j*2]=3;
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}