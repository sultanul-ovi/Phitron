#include<stdio.h>
/***
pointer: stores another variables' address
memory management
function er argument

a = 10;
&a = 655540
int a; // 4bytes

655540 = 1byte

float b;
double c;
char d;

int a;
printf("%d",a);

int a[10];
int *p; (asterisk sign) // pointer variable
p = &a; //

6422300
6422301
6422302
6422303

function:
1. passed by value
2. passed by reference

*/
// pointer as return value
// dynamic memory allocation DMA

/**
malloc()
calloc()
free()
realloc()

%p %d
*/
int main()
{
    int a =10;

    printf("%d\n", &a);
    printf("%d\n\n", a);

    int *p;
    p = &a; // *p <=> equivalent a
    *p = a;
    //&p = pointer address
    printf("%d\n", &p);
    printf("%d\n", p);
    printf("%d\n\n", *p);

    *p=20;
    printf("%d\n", a);
    printf("%d\n", *p);
    printf("%d\n", &(*p));


}
