#include <stdio.h>


int arr(int a[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);

}
int main()
{
    int x[5] ={1,2,3,4,5};
    arr(x,5);
}
