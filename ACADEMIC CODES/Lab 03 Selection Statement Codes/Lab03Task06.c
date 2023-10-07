/// write a c program to find if a given alphabet is vowel or constant

#include<stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet (a-z):");
    scanf("%c", &ch);

    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("%c is a vowel.\n",ch);
        break;
    default:
        printf("%c is a consonant.\n",ch);
    }

    return 0;
}
