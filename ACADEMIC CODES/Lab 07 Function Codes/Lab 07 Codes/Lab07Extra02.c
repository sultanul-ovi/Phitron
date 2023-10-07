/// No arguments passed but a return value
/// take a number from user and find odd/even using UDF.
#include <stdio.h>
int even_odd_checker();
int main()
{
    int x;
    x = even_odd_checker();
    if (x == 0)
        printf("Even.\n");
    else if (x == 1)
        printf("Odd.\n");

    return 0;
}

int even_odd_checker()
{
    int num;
    scanf("%d", &num);
    if (num % 2 == 0)
        return 0;
    else
        return 1;
}
