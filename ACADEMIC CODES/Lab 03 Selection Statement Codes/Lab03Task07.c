#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    switch (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
    case 1:
        printf("%c is a vowel\n", ch);
        break;
    case 0:
        printf("%c is a consonant\n", ch);
        break;
    }

    return 0;
}