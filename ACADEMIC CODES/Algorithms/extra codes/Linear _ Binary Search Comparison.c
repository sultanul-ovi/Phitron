#include<stdio.h>
#include<time.h>
#define REPEAT 10000

int main()
{
    int ar[100000], len, i, num, j, p;
    clock_t tstart, tstop;
    srand(time(NULL));
    printf("Enter the array length: ");
    scanf("%d", &len);
    for(i=0; i<len; i++)
        ar[i] = rand()%5000000+1;
    printf("\nEnter the number you want to search: %d", num= rand()%500000+1);
    //scanf("%d", &num);
    ////////////Linear Search

    tstart = clock();

    for(p=0; p<REPEAT; p++)
    {

    for(i=0; i<len & ar[i]!=num ; i++);
    }

    if(i==len) printf("\nNumber not found");
    else printf ("\n%d found at %d position", num, i);
    tstop = clock();

    printf("\n");
    printf("\nTime taken for linear search %d-%d=%d\n", tstop, tstart, tstop-tstart);

    ///////////////////Sort
    tstart = clock();
    int temp;
    for(i=0; i<len; i++)
    {
        for(j=0; j<len-i; j++)
        {
            if(ar[j]>ar[j+1])
            {
                temp = ar[j];
                ar[j] = ar[j+1];
                ar[j+1] = temp;
            }
        }
    }
    tstop = clock();
    printf("\nTime taken for Bubble Sort %d-%d=%d\n", tstop, tstart, tstop-tstart);
    //for(i=0; i<len; i++)
        //printf("%d ", ar[i]);

    /////////////////Binary Search


    int mid, start=0, end=len-1;

    tstart = clock();
    for(p=0; p<REPEAT; p++)
    {
    start =0;
    end = len-1;
    mid = (start+end)/2;
    while(start<=end && ar[mid]!=num)
    {

        if(num<ar[mid]) end = mid-1;
        else start = mid+1;

        mid = (start+end)/2;

    }
    }
    if(ar[mid]==num) printf("\nFound %d at %d position", num, mid);
    else printf("\nNumber not found");
    tstop = clock();

    printf("\nTime taken for binary search %d-%d=%d\n", tstop, tstart, tstop-tstart);
}
