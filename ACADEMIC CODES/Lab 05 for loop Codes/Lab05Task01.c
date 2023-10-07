/**

Selection statement:
1. if else
2. conditional operator/ternary operator
3. switch case

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



if(!-2)
{
// code
}
else if(condition)
{
//code
}
else
{
//code
}

loop: repeat

while do-while for

int a;// variable declaration
a=10; // value assignment
int a = 10; variable initialization

3 parts.
1. initialization (control variable) i = 10 theke 1
2. condition
3. increment/ decrement

while syntax: most ideal, infinity situation

initialization
while(condition)
{


increment/decrement;
}

initialization

do{


    inc/dec;
}while(condition);

for(initialization;condition;increment/decrement)
{


}

// 1 theke 100 print kora, while do-while for
// 1 theke n print kora, while do-while for
// n theke 1 print kora, while do-while for
// 1 theke 100 even numbers,
// 1 to 100 , odd numbers
// 123 to 321 (reverse)

34534
3 = 2
4 = 2
5 = 1
// a = 3, b = 2
a = 2, b = 3
with or without temporary variable

break;
continue;
nested loop: for loop
array

int a[10]
int a; //value + size + address
int a[10]; // value + size + address + index/position
a[n]
0 to n-1

// a = 2 , b = 3 ---> a = 3, b = 2 , with or without temporary variable
// array reverse: 1 2 3 -> 3 2 1
// array rotate: 1 2 3 4 -> 2 3 4 1 -> 3 4 1 2
// frequency count: 45345: 4-2,5-2,3-1,
7 6 3 2 1 9 8 9 12

*/
#include <stdio.h>

int main()
{

    int i = 0, n = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for(i=0;i<=n;i++)
    {
        printf("%d\t", i);
    }

    printf("\nValue of i after end of loop: %d\n",i);

    return 0;
}

/*
1 to 100
100 to 1

*/