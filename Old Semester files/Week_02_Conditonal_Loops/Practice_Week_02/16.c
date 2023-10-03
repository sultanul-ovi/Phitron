/*
Write a C program to read temperature in centigrade and display a suitable message according to temperature state below :
Temp < 0 then Freezing weather

Temp 0-10 then Very Cold weather

Temp 10-20 then Cold weather

Temp 20-30 then Normal in Temp

Temp 30-40 then Its Hot

Temp >=40 then Its Very Hot


Test Data :

42

Expected Output :

Its very hot.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
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

    int marks;

    scanf("%d", &marks);

    if (marks >= 40)
        printf("It is very hot.\n");
    else if (marks >= 30)
        printf("It is hot.\n");
    else if (marks >= 20)
        printf("Normal.\n");
    else if (marks >= 10)
        printf("It is cold.\n");
    else if (marks >= 0)
        printf("It is very cold.\n");
    else
        printf("Freezing.\n");
    return 0;
}