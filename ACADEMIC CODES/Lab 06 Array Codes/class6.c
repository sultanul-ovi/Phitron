#include <stdio.h>

int main()
{

    int i = 0, n,num;
    int a[10]={0};
    //int b[n] = {0};

    scanf("%d",&n);

    while(n){
        num = n%10;
        n = n/10;
        a[num]++;
    }

    for(i=0;i<10;i++)
        printf("%d\t%d\n",i,a[i]);
        
    printf("\n");
    return 0;
}