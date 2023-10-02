#include<stdio.h>
#include<string.h>

void take_input(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
int main()
{
    int ar[5];
    take_input(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    return 0;
}
