#include <stdio.h>
#include <string.h>
int main()
{
    int n, m, c = 0;
    char s1[1001];
    char s2[1001];
    gets(s1);
    gets(s2);
    if (strlen(s1) >= strlen(s2))
        printf("go");
    else
        printf("no");
    return 0;
}