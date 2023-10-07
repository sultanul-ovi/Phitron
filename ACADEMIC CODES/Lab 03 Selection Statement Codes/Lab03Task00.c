/*
Write a C program to reverse a 2digit number.
*/
#include<stdio.h>

int main()
{
    int num, rev;

    scanf("%d",&num);
    
    int a = num/10;
    int b = num%10;

    rev = b*10+a;

    printf("%d",rev);

}