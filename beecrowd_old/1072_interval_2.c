#include <stdio.h>

int main()
{
    int i,c=0,a,b;

    scanf("%d",&a);

    for (i = 0; i < a; i++)
    {
        scanf("%d",&b);
        if(b>=10 && b <= 20)
        {
            c++;
        }
    }
    printf("%d in\n",c);
    printf("%d out\n",(a-c));


    return 0;
}
