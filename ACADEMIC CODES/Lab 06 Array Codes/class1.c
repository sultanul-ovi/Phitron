
#include <stdio.h>

int main()
{

    int i;
    int a[10];

//onek dhoroner loop a eta infinite loop hoye jai. a[10] k a[0] dhore fele.
    for (i = 1; i <= 10; i++)
    {
        a[i] = 0;
        printf("%d\n", a[i]);
    }

    return 0;
}