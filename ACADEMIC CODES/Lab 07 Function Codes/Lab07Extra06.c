/// Passing an array as function argument.
/// Take 5 numbers in an array and find how many of them are even/odd using UDF.

#include<stdio.h>
#define max 5
int even_odd_checker(int a[]);
int main()
{
    int num[max]= {1,7,3,4,50};
    int even = even_odd_checker(num);
    int odd = max - even;
    printf("Even value: %d\nOdd value: %d",even,odd);
    return 0;
}
int even_odd_checker(int a[])
{
    int e=0,o=0;
    for(int x=0;x<max;x++)
    {
        if(a[x]%2==0) e++;
        else o++;
    }
     ///printf("Even value: %d\nOdd value: %d",e,o);

    return e;
}
