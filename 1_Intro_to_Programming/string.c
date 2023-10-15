#include <stdio.h>
#include <string.h>

int main()
{
    char s[100] = {"OVI"};

   // gets(s);
    fgets(s, sizeof(s), stdin);
    puts(s);
    printf("%d\n", sizeof(s));
    printf("%d\n", strlen(s));

    return 0;
}
