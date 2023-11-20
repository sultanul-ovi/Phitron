/*
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.

Expected Input/Output:
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
Hint: Find the total weight and total number of objects and then use it to find the average.
*/
#include <stdio.h>
int main()
{
    double n1, n2, w1, w2;

    printf("Weight - Item1: ");
    scanf("%lf", &w1);
    printf("No. of item1: ");
    scanf("%lf", &n1);
    printf("Weight - Item2: ");
    scanf("%lf", &w2);
    printf("No. of item2: ");
    scanf("%lf", &n2);

    printf("Average Value = %lf", (w1 * n1 + w2 * n2) / (n1 + n2));
    return 0;
}