#include <stdio.h>

int main()
{
    FILE *logFile = fopen("log.txt", "a");
    fprintf(logFile, "Hello at 12:00 AM\n");
    fprintf(logFile, "Hello at 12:05 AM\n");
    fprintf(logFile, "Hello at 12:07 AM\n");

    fclose(logFile);
    return 0;
}

// test1.exe < input.txt > output.txt