#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{

    char a[100];
    int c_vowel = 0;
    int c_con = 0;

    gets(a);
    for (int i = 0; i < strlen(a); i++)
    {
        if (isalpha(a[i]))
        {
            a[i] = tolower(a[i]);

            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
                c_vowel++;
            else
                c_con++;
        }
    }
    printf("Total Vowels: %d\nTotal Consonants: %d\n",c_vowel,c_con);

    return 0;
}