// c program to implement strlen,ctrcpy, strcat without library function.

#include<stdio.h>
#include<string.h>

void assign_name(char d[],char s[])
{
    int l;
    for(l=0; s[l]!='\0'; l++)
        d[l]=s[l];

    d[l] = '\0';
}

int find_length(char s[])
{
    int l;
    for(l=0; s[l]!='\0'; l++);
    return l;
}

void update_name(char d[],char s[])
{
    int l,a;

    for(l=0; d[l]!='\0'; l++);

    for(a=0; s[a]!='\0'; a++)
    {

        d[l]=s[a];
        l++;
    }
    d[l] = '\0';
}

int main()
{
    char str[100] = "Sultanul Islam Ovi";
    int length = find_length(str);
    printf("Length of %s: %d\n\n", str,length);

    char name[100];
    assign_name(name,"Sakib");
    printf("My name is %s\n\n",name);
    char last_name[100] =" Al Hasan";
    update_name(name, last_name);

    printf("My updated name is %s\n\n",name);

    return 0;
}







