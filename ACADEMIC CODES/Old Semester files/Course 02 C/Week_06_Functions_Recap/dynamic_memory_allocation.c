#include <stdio.h>
#include <stdlib.h>
/*
void arr(int a[],int n) == void arr(int *a,int n)
{

}
*/

int main()
{
    int n;

    scanf("%d", &n);

    int *ptr = (int *)malloc(n * sizeof(int));
//float *ptr = (float *)malloc(100 * sizeof(float));
    for (int i = 0; i < n; i++)
    {
        ptr[i] = i + 1;
    }
    for (int i = 0; i < n; i++, ptr++)
    {
        printf("%d\n", *ptr);
    }

    return 0;
}