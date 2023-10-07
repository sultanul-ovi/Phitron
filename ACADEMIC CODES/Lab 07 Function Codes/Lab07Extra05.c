/// Passing a single element of an array as function argument.
/// Take 5 numbers in an array and find how many of them are even/odd using UDF.

#include<stdio.h>
#define max 5
int even_odd_checker(int);
int main()
{
    int num[max]= {1,7,3,4,5},x,odd=0,even=0;
    for(x=0; x<max; x++)
    {
        if(even_odd_checker(num[x]))
            odd++;
        else
            even++;
    }
    printf("Even value: %d\nOdd value: %d",even,odd);
    return 0;
}
int even_odd_checker(int a)
{
    if(a%2==0)
        return 0;
    else
        return 1;
}
