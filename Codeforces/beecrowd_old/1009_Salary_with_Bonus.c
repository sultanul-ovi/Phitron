#include<stdio.h>

int main(){


    char name[20];

    double profit,salary;

    scanf("%s", name);
    scanf("%lf", &salary);
    scanf("%lf", &profit);

    salary = (salary+.15*profit);

    printf("TOTAL = R$ %.2lf\n", salary);

    return 0;
}