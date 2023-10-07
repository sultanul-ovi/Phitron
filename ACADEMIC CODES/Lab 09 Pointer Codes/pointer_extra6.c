///  manipulating string using pointer - string reverse
#include <stdio.h>
#include <string.h>
void str_rev(char *);

int main()
{
    char name[100], duplicate_name[100];
    gets(name);
    strcpy(duplicate_name, name);
    str_rev(duplicate_name);
    printf("Original: %s\nReversed: %s", name, duplicate_name);
    return 0;
}

void str_rev(char *x)
{
    int l = 0;
    char *a, *b;
    a = x;

    while (*x != '\0')
    {
        l++;
        x++;
    }
    b = x - 1;
    char temp;
    for (int t = 0; t < l / 2; t++)
    {
        temp = *a;
        *a = *b;
        *b = temp;
        a++;
        b--;
    }
}
