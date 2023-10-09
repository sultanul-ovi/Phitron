#include <stdio.h>

int main()
{
    int i,c=0;

    for (i = 0; i < 5; i++)
    {
        int a;
        scanf("%d",&a);
        if(a%2==0)
        {
            c++;
        }
    }
    printf("%d valores pares\n",c);

    return 0;
}
