#include <stdio.h>
int main()
{
    int n1, n2;
    char s1[1000];
    scanf("%d", &n1);
    n2 = n1 / 10000;
    if (n2 == 555)
        printf("1");
    else
        printf("0");
    return 0;
}