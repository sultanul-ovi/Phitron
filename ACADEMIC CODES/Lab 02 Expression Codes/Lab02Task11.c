/***
Md. Sultanul Islam Ovi
Lecturer, CSE
*/
// Working of post-increment and pre-increment operator.

#include <stdio.h>

int main()
{

    int a, b, c, d;

    a = 5;
    b = ++a;

    printf("%d\n", a);
    printf("%d\n", b);

    c = 5;
    d = c++;

    printf("%d\n", c);
    printf("%d\n", d);

    /*
        int x=10,y,z;

        y = x++;
        z = ++x;

        printf("%d %d %d", x, y, z);
    */

    /*

        int a =4,b=0,c=0;

        printf("%d %d %d\n", a,b,c);

        b = ++a;  // a = 5 b = 5

        printf("%d %d %d\n", a,b,c);

       c = a++;  // c = 5 a = 6

        printf("%d %d %d\n", a,b,c);



    */
    return 0;
}
