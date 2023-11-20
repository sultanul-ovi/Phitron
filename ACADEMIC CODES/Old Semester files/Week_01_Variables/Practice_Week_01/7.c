#include <stdio.h>

int main()
{
    int x;

    printf("Enter height in inches: ");
    scanf("%d",&x);

    int f = x/12;
    int i = x%12;

    printf("Your height is %d feet %d inches.",f,i);

    return 0;
}