#include <stdio.h>

int main()
{
    int A, B, C;

    scanf("%d %d %d", &A, &B, &C);
    
    int min_val = (A < B) ? (A < C ? A : C) : (B < C ? B : C);
    int max_val = (A > B) ? (A > C ? A : C) : (B > C ? B : C);

    printf("%d %d\n", min_val, max_val);
    return 0;
}
