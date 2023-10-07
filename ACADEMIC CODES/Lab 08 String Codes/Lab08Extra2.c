#include<stdio.h>
#include<string.h>
void print_name(char []);
void main()
{
    char name[100] = "Sultanul Islam Ovi";
    print_name(name);
}

void print_name(char name[])
{
    printf("Printing my name from print_name function: %s", name);
}