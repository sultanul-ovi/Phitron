#include <stdio.h>
#include <math.h>

int main()
{

    for (int i = 5; i >=1; i--)
    {
        printf("\n");
        for (int j = 5; j >= i; j--)
        {
            printf("\t%d", j);
        }
    }

    return 0;
}
