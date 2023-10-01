#include <stdio.h>
#include <string.h>

int main()
{
    // char str[] = "Hello";
    //  char *pos = strchr(str, 'k');
    //  if (!pos)
    //      printf("NOT FOUND\n");
    //  else
    //  {
    //      printf("%s\n", pos);
    //      int l = pos - str;
    //      printf("%d\n", l);
    //  }

    char text[1001], pattern[1001];
    gets(text);
    gets(pattern);
    char *pos = strstr(text, pattern);
    if (!pos)
        printf("NOT FOUND\n");
    else
        printf("Found at %d\n", pos - text);

    return 0;
}