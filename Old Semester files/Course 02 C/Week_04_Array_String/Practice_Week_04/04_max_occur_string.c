#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char a[100];

    int c = 0;

    gets(a);

    char ch;
    int az[26] ={0};
    scanf(" %c", &ch);
    for (int i = 0; i < strlen(a); i++)
    {
        if (isalpha(a[i]))
        {
            tolower(a[i]);
            az[a[i] - 97]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        //printf("%c occurs %d times\n", az[i], i);
        if (az[i] > c)
            c = az[i];
    }
    printf("%c occurs %d times", ch, c);
    return 0;
}