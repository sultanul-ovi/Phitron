// Written by Ovi
// Date: 2023-10-19
// Program: Check If X Appears in the Array

#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N, X;
        scanf("%d", &N);

        int A[N];
        for (int i = 0; i < N; i++)
            scanf("%d", &A[i]);

        scanf("%d", &X);

        int found = 0;

        for (int i = 0; i < N; i++)
        {
            if (A[i] == X)
            {
                found = 1;
                break;
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
