///Write a C Program to swap two numbers without third variable
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter value of n1:");
    scanf("%d", &n1); ///n1 =5
    printf("Enter value of n2:");
    scanf("%d", &n2); ///n2 =3
    printf("Before Swapping: n1: %d and n2: %d\n",n1,n2);

    n1 = n1+n2; ///n1 = 8
    n2 = n1-n2; ///8-3 = 5, n2 =5
    n1 = n1-n2; /// 8-5 = 3 => n1=3

    printf("After Swapping: n1: %d and n2: %d\n",n1,n2);

}