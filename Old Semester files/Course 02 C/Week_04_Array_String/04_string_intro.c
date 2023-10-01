#include <stdio.h>
#include <string.h>

int main()
{
    char st[] = "This is a string.";

    printf("Size of the string with null character: %d\n", sizeof(st));
    printf("Size of the string without null character: %d\n", strlen(st));

    for (int i = 0; i < sizeof(st); i++)
    {
        printf("%dth character: ASCII value of\t%c is\t%d\n", i, st[i], st[i]);
    }

    printf("\n%s\n", st);
    puts(st);

    char s[10];
    // scanf("%s", s);
    // gets(s);
    fgets(s, sizeof(s), stdin);
    puts(s);
    return 0;
}