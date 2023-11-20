#include <stdio.h>
#include <stdlib.h>

int *makeSq(int n)
{
    int *s = (int *)malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++)
        s[i] = (i + 1) * (i + 1);

    return s;
}

int main()
{
    int n;
    scanf("%d", &n);

    int *sq;
    sq = makeSq(n);

    for (int i = 0; i < n; i++)
        printf("%d ", sq[i]);
    
    return 0;
}