#include <stdio.h>
#include <string.h>


int main()
{
    int i = 0, j = 0, k = 0;
    char a[20];
    char b[20] = "Hello,World!";

    scanf("%s", a);

    if (strcmp(a,b))
        printf("WA");
    else
        printf("AC");

    return 0;
}
