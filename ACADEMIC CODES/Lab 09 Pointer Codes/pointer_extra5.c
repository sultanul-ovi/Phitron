///  manipulating string using pointer - string length
#include <stdio.h>
int str_len(char *);

int main()
{
    char name[100];
    char *p;
    gets(name);
    int length = str_len(name);
    printf("Length of %s is %d", name, length);
}

int str_len(char *x)
{
    int l;

    for (l = 0; *(x + l) != '\0'; l++)
        ;

    /* while(*x!='\0')
    {
        l++;
        x++;
    }*/
    return l;
}
