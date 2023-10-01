#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <time.h>
#include <limits.h>

struct Fun
{
    int sum;
};

int main()
{
    struct Fun f;
    struct Fun *fp;
    fp = &f;

    f.sum = 20;
    printf("%d\n", f.sum);
    fp->sum = 30;
    printf("%d\n", f.sum);
}