#include <stdio.h>

int main()
{
    char sentence[1000];

    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i]; i++)
    {
        if (sentence[i] == ' ' || sentence[i] == '\n')
        {
            printf("\n");
        }
        else
        {
            printf("%c", sentence[i]);
        }
    }

    return 0;
}
