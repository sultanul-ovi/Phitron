#include <stdio.h>
#include <math.h>

int main()
{

    for (int i = 5; i >=1; i--)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            printf(" *" );
        }
    }

    return 0;
}
