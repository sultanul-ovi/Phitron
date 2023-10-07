#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    int n = 16;
    char str[16] = {0};
    int i=0;
    char ch = '\0';
    int sel = 1;
    while (1)
    {
        if (i < n)
        {
            ch = getch();
            if (ch == '\r')
                break;
            else
            {
                str[i] = ch;
                i++;
                if (sel == 1)
                    printf("*");
                else
                    printf("%c", ch);
            }
        }
    }
    str[i] = '\0';
    printf("\nYour pass is %s", str);

    return 0;
}