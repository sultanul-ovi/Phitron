#include <stdio.h>

int main()
{

    int sum = 0, number, count = 1, n;
    scanf("%d", &n);
    do
    {
        printf("Enter %d number: ", count);
        scanf("%d", &number);
        sum = sum + number;
        // printf("\nSum: %d\n",sum);
        count++;
    } while (count <= n);
    printf("Result = %d\n", sum);

    return 0;
}

/*
sum of 5 integer numbers
5ta number input and tader sum
*/