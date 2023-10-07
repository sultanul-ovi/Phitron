#include <stdio.h>
int main()
{
    int i = 0, n = 0, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int m;
        scanf("%d", &m);
        // if (m == 0)
        //     break;
        // if (m < 0)
        //     continue;
        // if (m == 0)
        //     goto summation;
        // if (m == 0)
        //     break;
        sum = sum + m;
    }
    //summation:
    printf("\nSum: %d \n", sum);
    return 0;
}
