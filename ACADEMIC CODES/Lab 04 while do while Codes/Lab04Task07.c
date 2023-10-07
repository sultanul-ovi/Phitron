// C program to find the occurence of the number
#include <stdio.h>


int main()
{
    int a[10];
    int number, num, i, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &number);
    for (i = 0; i < 10; i++)
    {
        a[i] = 0;
    }
    num = number;
    while (num > 0)
    {
        temp = num % 10;
        num = num / 10;
        a[temp]++;
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > 0)
            printf("%d present %d times\n", i, a[i]);
    }

    return 0;
}