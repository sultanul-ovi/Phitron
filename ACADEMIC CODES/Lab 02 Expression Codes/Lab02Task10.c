/**
Problem Analysis
input: f
output: c
c = (f - 32)*5/9
*/

/**
Solution design
Algorithm
1. START
2. variable declare (f,c)
3. f input
4. f to c conversion
5. c output
6. END

*/


#include<stdio.h>
#include<math.h>

#define freezing_point 32
#define scale_factor 5/9

int main()
{
    float f,c;
    scanf("%f", &f);
    c = (f-freezing_point)*scale_factor;
    printf("%f",c);

    return 0;
}

