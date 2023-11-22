#include <stdio.h>
#include <stdbool.h>

int daysInMonth[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

struct Date
{
    int day;
    int month;
    int year;
};

bool isFirstDay(struct Date d)
{
    return d.day == 1 && d.month == 1;
}

struct Date getFirstDay(int year)
{
    struct Date answer = {1, 1, year};
    return answer;
}

void printDate(struct Date d)
{
    printf("%d %d %d\n", d.day, d.month, d.year);
}

struct Date getNextDate(struct Date today)
{
    if (today.day != daysInMonth[today.month - 1])
        today.day++;
    else if (today.month != 12)
    {
        today.day = 1;
        today.month++;
    }
    else
    {
        today.day = 1;
        today.month = 1;
        today.year++;
    }
    if (isFirstDay(today))
        printf("\tHappy New Year.\n");
    printDate(today);
    return today;
}

int main()
{
    struct Date today;
    int n, y;

    printf("Enter today's date: ");
    scanf("%d %d %d", &today.day, &today.month, &today.year);
    printf("How many days do you want to print: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        today = getNextDate(today);

    printf("Enter a year to get the first date of that year: ");
    scanf("%d", &y);
    struct Date date = getFirstDay(y);
    printDate(date);

    return 0;
}
