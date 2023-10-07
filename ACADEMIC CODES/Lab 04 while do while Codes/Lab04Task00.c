#include <stdio.h>
/**
while do-while for

3 parts
1. initialization. (control variable)
2. condition
3. increment / decrement

int a; // declaration
a = 10; // assignment
int a = 10; // initialization

while syntax: 
initialization
while(condition){

    //code
    increment/ decrement
}

dp-while syntax:
initialization
do{
  //code

    increment/decrement
}while(condition);

for loop syntax:
for(initialization; condition; inc/dec){
    //code
}

*/



int main()
{

    int i = 0, n = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\t", i);
        i++;
    }

    printf("Value of i after end of loop: %d\n",i);

    return 0;
}

/*
1 to 100
100 to 1
condition change korle kivabe kaj korbe
    true
    false
    i>n
    i--
    without i++ or i--

1 to n
n to 1
*/