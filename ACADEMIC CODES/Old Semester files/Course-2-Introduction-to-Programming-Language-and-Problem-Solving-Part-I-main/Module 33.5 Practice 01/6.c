#include<stdio.h>

void reverse_array(int *a,int n)
{
    int i=0,j=n-1;
    while(i<j)  // using two pointer's technique
    {
        int tmp=a[i];   // swapping value of left side's value and right side's value
        a[i]=a[j];
        a[j]=tmp;

        i++;    // left side increasing
        j--;    // right side decreasing
    }
}
int main()
{
    int ar[5]={10,20,30,40,50};
    reverse_array(ar,5);
    for(int i=0;i<5;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
