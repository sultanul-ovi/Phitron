#include <stdio.h>
#include <string.h>

int main()
{
    int *ptr;

    char str[] = "hello";
    char *first = str;
    char *ch = strchr(str, 'a');
    //printf("%d", ch - first);
    printf("%p", ch);
    return 0;
}