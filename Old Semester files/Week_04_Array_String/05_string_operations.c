#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "hello world";
    char str2[10];
    strncpy(str2, str, (sizeof(str2) - 1));
    str2[sizeof(str2) - 1] = '\0';
    puts(str);
    puts(str2);

    char a[10] = "hello ";
    char b[10] = "world";

    strncat(a, b, sizeof(a) - strlen(a) - 1);

    puts(a);
    puts(b);

    gets(a);
    gets(b);

    int x = strcmp(a, b);
    if (x >= 1)
        printf("%s is bigger than %s", a, b);
    else if (x <= -1)
        printf("%s is bigger than %s", b, a);
    else
        printf("%s equals %s", a, b);

    return 0;
}