#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    int marks[n];

    int size = sizeof(marks) / sizeof(marks[0]);
    // printf("%d\n", size);
    for (int i = 0; i < n; i++)
        printf("%d\t", marks[i]);
    memset(marks, 0, sizeof(marks));
    printf("\n");
    for (int i = 0; i < n; i++)
        printf("%d\t", marks[i]);
    return 0;
}
