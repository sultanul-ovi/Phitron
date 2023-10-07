#include <stdio.h>
#include <math.h>

int main()
{

    for (int i = 1; i <= 5; i++)
    {
        printf("\n");
        for (int j = 1; j <= i; j++)
        {
            printf("\t%d", j);
        }
    }

    return 0;
}
