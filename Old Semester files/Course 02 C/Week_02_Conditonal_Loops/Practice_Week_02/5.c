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
    bool f;
    scanf("%d", &n);
    int marks, grade_point;
    for (i = 1; i <= n; i++)
    {
        printf("Enter Marks: ");

        scanf("%d", &marks);

        if (marks >= 80)
        {
            printf("Grade = A+\n");
            grade_point = 5;
        }
        else if (marks >= 70)
        {
            printf("Grade = A\n");
            grade_point = 4;
        }
        else if (marks >= 60)
        {
            printf("Grade = B\n");
            grade_point = 3;
        }
        else if (marks >= 50)
        {
            printf("Grade = C\n");
            grade_point = 2;
        }
        else if (marks >= 40)
        {
            printf("Grade = D\n");
            grade_point = 1;
        }
        else
        {
            printf("Grade = F\n");
            grade_point = 0;
            f = true;
        }
        sum = sum + grade_point;
        printf("Grade: %d\n", grade_point);
    }
    if (!f)
        printf("GPA: %.2f\n", grade_point / (float)n);
    else
        printf("You failed stupid.\n");
    return 0;
}