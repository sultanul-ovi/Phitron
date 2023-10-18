#include<stdio.h>
#include<string.h>

int main(){

    char a[100],b[100];
    gets(a);
    gets(b);
    puts(a);
    puts(b);

    strcpy(a,b);

    puts(a);
    puts(b);

    return 0;


}