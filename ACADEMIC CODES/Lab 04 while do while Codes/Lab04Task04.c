#include <stdio.h>
int main()
{
    int n, reverse = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        rem = n % 10;
        n = n / 10;
        printf("Digits: %d\n", rem);
    }
    
    return 0;
}

/*
Write a C program to enter a number and 
print its digit in reverse order
*/