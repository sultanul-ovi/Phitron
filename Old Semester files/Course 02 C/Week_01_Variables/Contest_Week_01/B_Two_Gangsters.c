#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d %d",(a-a+b-1),(a-1+b-b));
    return 0;
}