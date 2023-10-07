/// Arguments passed but no return value
/// Find if a given character is
///vowel/consonant/digit/special symbol using UDF.
#include <stdio.h>
void character_checker(char);
int main()
{
    char ch;
    scanf("%c", &ch);
    character_checker(ch);
    return 0;
}

void character_checker(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        printf("%c is a vowel.\n", c);
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("%c is a consonant.\n", c);
    }
    else if (c >= '0' && c <= '9')
    {
        printf("%c is a digit.\n", c);
    }
    else
    {
        printf("%c is a special symbol.\n", c);
    }
}
