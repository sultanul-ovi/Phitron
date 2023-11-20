#include <stdio.h>

int main()
{
    // int value = 12;
    // int *pvalue;
    // pvalue = &value;
    // printf("%d\n", &pvalue);
    // printf("%p\n", pvalue);
    // printf("%p\n", &value);
    // printf("%d\n", *pvalue);
    // printf("%d\n", value);

    //////////////////////////////////

    char ch = 'a';
    char *pch = &ch;
    printf("%lld %c\n", pch, *pch);
    pch++;
    printf("%lld %c\n", pch, *pch);

    return 0;
}