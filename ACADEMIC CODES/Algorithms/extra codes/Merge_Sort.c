#include <stdio.h>
#include<time.h>
#define N 25


int Arr[N+1];


int Merge(int A[],int p,int q,int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1];
    int R[n2];
    int i,j,k;

    for(i=0; i<n1; i++)
        L[i] = A[p+i];
    for(i=0; i<n2; i++)
        R[i] = A[q+i+1];

    L[n1] = 15000;
    R[n2] = 15000;

    i=0;
    j=0;

    for(k=p; k<=r; k++)
    {
        if(L[i]<=R[j])
        {
            A[k] = L[i];
            i = i+1;
        }
        else
        {
            A[k] = R[j];
            j = j+1;
        }
    }

}

int MergeSort(int A[],int p,int r)
{

    int x, y, z;
    if(p<r)
    {
        int q = (p+r)/2;
        //Explanation of "divide" part
/*
        for(x=p; x<=q; x++)
        {
            printf("%d ", A[x]);
        }
        printf("\t\t");
        for(x=q+1; x<=r; x++)
        {
            printf("%d ", A[x]);
        }
        printf("\n\n");
*/

        MergeSort(A,p,q);
        MergeSort(A,q+1,r);
        //printf("\n");
        Merge(A,p,q,r);
    }
    else
        return 0;
}

int main()
{
    int i;
    srand(time(NULL));
    for(i=0; i<N; i++)
    {
        Arr[i] = rand()%100+1;
        printf("%d ",Arr[i]);
    }
    printf("\n");
    //printf("\n\t\tDIVIDE\n");
    MergeSort(Arr,0,N-1);
    printf("\n------------------SORTED ARRAY---------------------\n");
    for(i=0; i<N; i++)
        printf("%d ",Arr[i]);
}
