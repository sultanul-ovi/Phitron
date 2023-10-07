/***array reverse
1. n-1 to 0 print
2. saving in 2nd array.
3. formal process without an extra array


*/

// (rand() % (upper - lower + 1)) + lower
//So, for 1-100:
//rand() % (100 + 1 - 1) + 1

/*
// swapping
  // a = (initial_a - initial_b)
    a = a - b;   

  // b = (initial_a - initial_b) + initial_b = initial_a
    b = a + b;

  // a = initial_a - (initial_a - initial_b) = initial_b
    a = b - a;
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{

    int i = 0, j, n = 10, temp;
    int a[n];
    //int b[n] = {0};
    srand(time(NULL));

    for (i = 0; i < n; i++)
        a[i] = rand();

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");

    //for (i = 9; i >= 0; i--)
    //printf("%d ", a[i]);
    /*
    for (i = 0; i < 10; i++)
        b[9-i] = a[i];
    for (i = 0; i < 10; i++)
        printf("%d ", b[i]);
*/

    for (i = 0; i < (n / 2); i++)
    {
        temp = a[i];
        a[i] = a[n - 1 - i];
        a[n - 1 - i] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}