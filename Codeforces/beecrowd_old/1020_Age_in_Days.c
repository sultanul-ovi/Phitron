#include<stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int y = n/365;
    int m = (n-y*365)/30;
    int d = (n-y*365 - m*30);

    printf("%d ano(s)\n",y);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",d);



    return 0;
}