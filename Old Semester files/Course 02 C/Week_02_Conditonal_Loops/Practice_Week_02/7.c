#include <stdio.h>


int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b?a:b;
}
int main()
{
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    printf("%d",max(n1,n2));
    /*
        if (n1 > n2)
            printf("%d is Max and %d is Min\n", n1, n2);
        else if (n1 == n2)
            printf("%d and %d are equal\n", n1, n2);
        else
            printf("%d is Max and %d is Min\n", n2, n1);
    */
    //(n1 > n2) ? printf("%d is Max and %d is Min\n", n1, n2) : printf("%d is Max and %d is Min\n", n2, n1);
    ;
}