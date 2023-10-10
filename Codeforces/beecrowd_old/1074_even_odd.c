#include <stdio.h>
int main() {
    int i,n,num;
    scanf("%d",&n);
    for(i = 0; i<n;i++)
    {
        scanf("%d",&num);
        if(num<0)
        {
            if(num%2 == 0)
                printf("EVEN NEGATIVE\n");
            else
                printf("ODD NEGATIVE\n");
        }
        else if(num>0)
        {
            if(num%2 == 0)
                printf("EVEN POSITIVE\n");
            else
                printf("ODD POSITIVE\n");
        }
        else
            printf("NULL\n");
    }
    return 0;
}