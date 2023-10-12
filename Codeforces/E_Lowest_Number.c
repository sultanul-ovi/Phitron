// Written by Ovi
// Date: 2023-10-11
// Program: Find and print the lowest number in an array and its position (1-indexed)

#include <stdio.h>

int main()
{
    int N, min, min_pos;
    scanf("%d", &N);

    int A[N];

    scanf("%d", &A[0]);
    min = A[0];
    min_pos = 1;

    for (int i = 1; i < N; ++i)
    {
        scanf("%d", &A[i]);
        if (A[i] < min)
        {
            min = A[i];
            min_pos = i + 1;
        }
    }
    printf("%d %d\n", min, min_pos);

    return 0;
}
