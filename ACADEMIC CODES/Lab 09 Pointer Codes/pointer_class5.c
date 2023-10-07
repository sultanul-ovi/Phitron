//pointer as return value
#include<stdio.h>
int* max(int *a, int *b)
{
    if(*a>*b)
        return a;
    else
        return b;

}
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int *mx=max(&m,&n);
    printf("Max: %d\n",*mx);

    return 0;
}

