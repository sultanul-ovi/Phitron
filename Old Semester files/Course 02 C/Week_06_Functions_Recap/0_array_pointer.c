#include <stdio.h>

/*
void arr(int a[],int n) == void arr(int *a,int n)
{

}
*/

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        int *pai = &a[i];
        printf("%p\t%p\t%d\n", &pai, pai, *pai);
    }

    int *pi = a;
    for (int i = 0; i < 10; i++,pi++)
        printf("%p\t%p\t%d\n", &pi, pi, *pi);
    // *(a+5) == a[5]
    return 0;
}