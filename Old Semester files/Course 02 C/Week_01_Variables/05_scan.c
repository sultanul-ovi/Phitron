#include <stdio.h>

int main()
{
    int marks_english;
    int marks_math;

    marks_english = 50;
    marks_math = 20;

    int total_marks = marks_english + marks_math;
    printf("Total marks: %d\n", total_marks);

    printf("Enter Marks in English: ");
    scanf("%d", &marks_english);
    printf("Enter Marks in Math: ");
    scanf("%d", &marks_math);

    total_marks = marks_english + marks_math;
    printf("Total marks: %d\n", total_marks);

    float temp;
    scanf("%f", &temp);
    printf("\n%f\n", temp);

    printf("Enter Marks in English and Math: ");
    scanf("%d %d", &marks_english, &marks_math);

    total_marks = marks_english + marks_math;
    printf("Total marks: %d\n", total_marks);

    return 0;
}