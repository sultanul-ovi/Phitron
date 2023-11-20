#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s[111];
    gets(s);
    char s1[] = "OCT 31";
    char s2[] = "DEC 25";
    int c = strcmp(s, s1);
    int d = strcmp(s, s2);
    if (!c)
        printf("yup");
    else if (!d)
        printf("yup");
    else
        printf("nope");
    return 0;
}
