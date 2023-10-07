/// take two numbers from user and find the maximum and minimum number using a user defined function.
#include<stdio.h>
#include<stdio.h>
int find_max(int ,int );
int find_min(int a,int b);

int main()
{
    int n1,n2,max,min;
    scanf("%d %d",&n1,&n2);

    max = find_max(n1,n2);
    min = find_min(n1,n2);

    printf("Max: %d\n",max);
    printf("Min: %d\n",min);
}

int find_max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}

int find_min(int a,int b)
{
    if(a<b)
        return a;
    else
        return b;
}
