#include<stdio.h>

int main(){

    int a,h,m,s;
    scanf("%d", &a);
    s = a%60;
    h = (a)/(60*60);
    m = (a-s)/60 - h*60;
    
    printf("%d:%d:%d\n", h,m,s);

    return 0;
}