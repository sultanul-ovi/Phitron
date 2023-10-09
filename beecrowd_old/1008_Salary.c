#include<stdio.h>

int main(){

    int num,hour;
    float rate,salary;

    scanf("%d", &num);
    scanf("%d", &hour);
    scanf("%f", &rate);

    salary = (hour*rate);

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}