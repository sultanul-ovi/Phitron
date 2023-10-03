#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[100];
    int class;
    int roll;
    struct Date dob;
};
void printDate(struct Date d)
{
    printf("%d-%d-%d\n", d.day, d.month, d.year);
}
void printStudent(struct Student st)
{
    printf("Name:\t %s\n", st.name);
    printf("Class:\t %d\n", st.class);
    printf("Roll:\t %d\n", st.roll);
    printf("DOB:\t ");
    printDate(st.dob);
}
void inputStudent()
{
    
}
int main()
{
    struct Student st1 = {
        .class = 9,
        .roll = 10,
        .dob = {1, 1, 2000}};

    char name[] = "Sultanul Ovi";
    strcpy(st1.name, name);
    printStudent(st1);

    return 0;
}
