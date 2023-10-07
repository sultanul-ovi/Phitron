/// array as a structure type variable

#include <stdio.h>
struct employee
{
    char name[20];
    char designation[100];
    int salary;
    struct join
    {
        int day;
        char month[20];
        int year;
    } j;
} e[5];

void main()
{
    char choice;
    for (int i = 0; i < 5; i++)
    {
        printf("Do you want to add any employee?(y/n):");
        fflush(stdin);
        scanf("%c", &choice);
        if (choice == 'y')
        {
            fflush(stdin);
            printf("Name of Employee:");
            gets(e[i].name);
            printf("Enter joining year:");
            scanf("%d", &e[i].j.year);
            printf("Enter joining month:");
            fflush(stdin);
            gets(e[i].j.month);
            printf("Enter joining day:");
            scanf("%d", &e[i].j.day);
            printf("Mr. %s joined in the company in %d %s, %d\n", e[i].name, e[i].j.day, e[i].j.month, e[i].j.year);
        }
        else
            break;
    }
}
