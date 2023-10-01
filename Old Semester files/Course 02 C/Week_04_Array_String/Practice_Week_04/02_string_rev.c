#include <stdio.h>
#include <string.h>

int main()
{

    char a[100];

    gets(a);
    printf("original: %s\n",a);
    strrev(a);
    printf("reversed: %s\n",a);

    return 0;
}