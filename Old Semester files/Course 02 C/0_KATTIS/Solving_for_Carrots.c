#include <stdio.h>
int main()
{
    int n1, n2;
    char s1[1000];
    scanf("%d %d", &n1, &n2);
    int i;
    for (i = 0; i <= n1; i++)
    {
        fgets(s1, sizeof(s1), stdin);
    }
    printf("%d", n2);
    return 0;
}