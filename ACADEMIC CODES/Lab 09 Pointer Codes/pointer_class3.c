
#include<stdio.h>

void example_pointer(int m,int n)
{
    m +=5;
    n +=5;
    printf("%d %d\n",m,n);
}

void example_pointer2(int *m,int *n)
{
    *m +=5;
    *n +=5;
    printf("%d %d\n",*m,*n);
}

int main()
{
    int a =10, b = 20;
    printf("%d %d\n",a,b);
    example_pointer(a,b); // call by value.
    printf("%d %d\n",a,b);

    printf("\n");

    printf("%d %d\n",a,b);
    example_pointer2(&a,&b); // call by reference
    printf("%d %d\n",a,b);
// benefit: chaile onekgulo man return korte parchi amra ekhon
}

