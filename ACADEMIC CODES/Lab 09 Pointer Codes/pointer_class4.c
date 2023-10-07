
#include<stdio.h>
#define SIZE 10

void max_min(int ar[],int n, int *max, int *min)
{
    *max = ar[0];
    *min = ar[0];
    for(int i =0; i<n; i++)
    {
        if(ar[i]>*max)
            *max = ar[i];
        if(ar[i]<*min)
            *min = ar[i];
    }
}
int main()
{
    int a[SIZE] = {45,1,4,66,-1,354,123,2,7,6};
    int maxn, minn;
    max_min(a,SIZE,&maxn,&minn);
    printf("%d %d", maxn,minn);
}


