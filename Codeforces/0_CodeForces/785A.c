#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int m = 0;
    while (n--)
    {
        char s[30];
        scanf(" %s", s);
        switch (s[0])
        {
        case 'T':
            m += 4;
            break;
        case 'C':
            m += 6;
            break;
        case 'O':
            m += 8;
            break;
        case 'D':
            m += 12;
            break;
        case 'I':
            m += 20;
        }
    }
    printf("%d", m);
    return 0;
}