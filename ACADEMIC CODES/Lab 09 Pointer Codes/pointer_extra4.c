/// call by value and call by address example
#include <stdio.h>
void swap1(int* n1, int* n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    //printf("%d\n%d\n",*n1,*n2);
}

void swap2(int n1, int n2)
{
    int temp;
    temp = n1;
    n1 = n2;
    n2 = temp;
    //printf("%d\n%d\n",n1,n2);
}

void square(int *p)
{
    (*p) = (*p) * (*p);
}

int main()
{
    //int num1=5;
    //square(&num1);
    //printf("num1 = %d\n", num1);

    int a=10,b=15;

    //printf("%d\t%d\n",a,b);
    swap1(&a,&b);
    printf("%d\t%d\n",a,b);

    int x=5,y=7;

    //printf("%d\t%d\n",x,y);
    swap2(x,y);
    printf("%d\t%d\n",x,y);
    
    return 0;
}




