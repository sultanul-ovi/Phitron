/// structure and nested structure
#include <stdio.h>
#include <string.h>
struct flat
{
    int flat_no;
    char flat_name[100];
};

struct address
{
    
    int house_no;
    int road_no;
    int sector_no;
    int post_code;
    char *post_office; // char array
    //char post_office[100];
    struct flat f;
};

struct person
{
    char name[20];
    int age;
    float salary;
    struct address a;
};
///struct person p1,p2; ///global person structure variable.

void main()
{
    struct person p1;
    ///char n[100] = "Md. Sultanul Islam Ovi";
    strcpy(p1.name, "Md. Sultanul Islam Ovi");
    p1.age = 28;
    p1.salary = 3000.50;
    p1.a.house_no = 35;
    p1.a.road_no = 10;
    p1.a.sector_no = 5;
    p1.a.post_office = "Uttara Model TOWN";
    p1.a.post_code = 1230;
    printf("All information of %s:\n", p1.name);
    printf("Age: %d, Salaray: %.2f\n", p1.age, p1.salary);
    printf("Post office address: %s", p1.a.post_office);
}
