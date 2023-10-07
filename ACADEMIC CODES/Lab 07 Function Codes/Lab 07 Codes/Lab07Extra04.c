/// Take a number from user and find number of digit in that number using UDF.

#include <stdio.h>
int digit_counter(int);
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d", &num);
    printf("%d has total %d digit.\n", num, digit_counter(num));
}

int digit_counter(int number)
{
    int count = 0;
    while (number != 0)
    {
        count++;
        number /= 10;
    }
    return count;
}
