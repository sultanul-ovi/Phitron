#include <stdio.h>

int main()
{
    FILE *inputFile;
    inputFile = fopen("input.txt", "r");

    FILE *outputFile;
    outputFile = fopen("output.txt", "w");

    if (inputFile == NULL)
    {
        printf("No File Found.\n");
        return 0;
    }
    
    while (1)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
            break;
        // printf("%c", ch);
        fputc(ch, outputFile);
    }

    return 0;
}

// test1.exe < input.txt > output.txt