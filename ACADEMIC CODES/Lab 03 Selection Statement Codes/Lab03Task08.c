#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);

    (n%2!=0) ? printf("%d is odd.",n) : printf("%d is even.",n);

    return 0;
}
