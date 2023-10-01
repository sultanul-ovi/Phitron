#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int reverseind = 0;
    int rev[n];
    for (int i = n - 1; i >= 0; i--)
    {
        rev[reverseind] = arr[i];
        reverseind++;
    }

    for (int i = 0; i < n; i++)
    {
        int differ = rev[i] - arr[i];
        if (differ < 0)
        {
            differ = differ * (-1);
        }
        printf("%d ", differ);
    }
    printf("\n");
}
