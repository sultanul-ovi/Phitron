/// Write a C program to store and print marks of 5 students.
// array declare
// global local
// garbage value 0 initialization



/*
a b
 a > b
 a >= b
 a < b
 a <= b
 a == b
 a != b
 !a
 a > b || c == d
 a > b && c == d

 int a = 5
 int b = 2

 a + b = 13
 a - b = 7
 a * b = 30
 a / b = 2
 a % b = 1

 float a = 5
 float b = 2
 a / b = 2.5
 a % b = compilation error




int a; //value + size + address
int a[10]; // value + size + address + index/position


a = 2 , b = 3 ---> a = 3, b = 2 , with or without temporary variable
array reverse: 1 2 3 -> 3 2 1
array rotate: 1 2 3 4 -> 2 3 4 1 -> 3 4 1 2
frequency count: 45345: 4-2,5-2,3-1,
*/












#include <stdio.h>

int main()
{
    
    int i;
    //int marks[5];
    float marks[5];
    //float marks[5]={1,5,4,23,2};

    // for (i = 0; i < 5; i++)
    //     printf("%d\n", marks[i]);

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of Student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%.3f\n", marks[i]);
    }

    return 0;
}