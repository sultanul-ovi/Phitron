/*
Write a C program that reads an integer between 1 and 12 and print the month of the year in English.  Use switch case.
Input :Input a number between 1 to 12 to get the month name: 8
Expected Output:August
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define min4(a, b, c, d) min(a, min(b, min(c, d)))
#define max4(a, b, c, d) max(a, max(b, max(c, d)))
#define SQR(a) ((a) * (a))

int max(int a, int b)
{
    return a > b ? a : b;
}
int min(int a, int b)
{
    return a < b ? a : b;
}
int m, n, n1, n2, n3;
int i, j, k;
int sum = 0, prod = 1, count = 0, flag = 0;

int main()
{
    printf("Input a number between 1 to 12 to get the month name:");
    scanf("%d", &n1);

    switch (n1)
    {
    case 1:
        printf("January.\n");
        break;
    case 2:
        printf("February.\n");
        break;
    case 3:
        printf("March.\n");
        break;
    case 4:
        printf("April.\n");
        break;
    case 5:
        printf("May.\n");
        break;
    case 6:
        printf("June.\n");
        break;
    case 7:
        printf("July.\n");
        break;
    case 8:
        printf("August.\n");
        break;
    case 9:
        printf("September.\n");
        break;
    case 10:
        printf("October.\n");
        break;
    case 11:
        printf("November.\n");
        break;
    case 12:
        printf("December.\n");
        break;
    default:
        printf("Invalid\n");
    }
    return 0;
}
