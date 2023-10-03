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
int sum = 0, count = 0, flag = 0;
double prod = 0;
int main()

{
    bool f;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int marks, grade_point;
    for (i = 1; i <= n; i++)
    {
        printf("-------------\n");
        printf("Term %d\n", i);
        printf("-------------\n");
        printf("Enter number of Subjects: ");
        scanf("%d", &m);
        sum = 0;
        for (j = 1; j <= m; j++)
        {
            printf("-------------\n");
            printf("Enter Marks of subject %d: ", j);
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
        {
            printf("-------------\n");
            printf("Term GPA: %.2f\n", sum / (float)m);
        }
        else
        {
            printf("-------------\n");
            printf("You failed stupid.\n");
        }
        prod = (sum / (float)m) + prod;
    }
    printf("-------------\n");
    printf("Overall CGPA: %.2f\n", prod / n);
    printf("-------------\n");
    return 0;
}