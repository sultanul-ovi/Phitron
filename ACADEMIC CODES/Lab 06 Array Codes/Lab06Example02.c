/// Take 5 numbers in an array and find how many numbers are even.
#include <stdio.h>
#define max 5
int main()
{
    int number[max], i, even = 0, odd = 0;

    for (i = 0; i < max; i++)
    {
        scanf("%d", &number[i]);
        if (number[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even element: %d\nOdd element: %d", even, odd);
}
