#include <stdio.h>

int main()
{
    int i,c=0;

    for (i = 0; i < 6; i++)
    {
        double a;
        scanf("%lf",&a);
        if(a>0)
        {
            c++;
        }
    }
    printf("%d valores positivos\n",c);

    return 0;
}
