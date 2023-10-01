// 1. sum of array elements
// 2. maximum element & occurance of maximum element
// 3. second maximum element
// 4. insert an element to a specific position
// 5. occurance of all the elements
// 6. check if an element exists or not

#include <stdio.h>

int main()
{

    int n, sum = 0;

    scanf("%d", &n);
    int a[n + 1];

    for (int i = 0; i <= n; i++)
    {
        a[i] = 0;
    }

    // 1. sum of array elements
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    printf("Sum of all elements: %d\n", sum);

    // 2. maximum element & occurance of maximum element
    int m = a[0];
    int c_m = 0;
    int m_index = 0;
    for (int i = 0; i < n; i++)
    {

        if (a[i] > m)
        {
            m = a[i];
            m_index = i;
        }
    }
    for (int i = 0; i < n; i++)
    {

        if (a[i] == m)
            c_m++;
    }

    printf("Maximum is: %d\n", m);
    printf("Maximum occurs %d times\n", c_m);

    // 3. second maximum element
    int second_max = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[m_index])
        {

            if (second_max == -1)
                second_max = i;
            else if (a[i] > a[second_max])
                second_max = i;
        }
    }

    printf("Second Maximum is: %d\n", a[second_max]);
    printf("\n");

    // 4. insert an element to a specific position
    int k, k_i;
    printf("Inpput element to insert: ");
    scanf("%d", &k);
    printf("Inpput position where to insert: ");
    scanf("%d", &k_i);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = k_i; i <= n; i++)
    {
        int temp = a[i];
        a[i] = k;
        k = temp;
    }

    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    // 5. occurance of all the elements
    int b[101] = {0};
    int c_c = 0;
    for (int i = 0; i <= n; i++)
    {
        b[a[i]]++;
    }
    for (int i = 0; i < 101; i++)
    {
        if (b[i] > 0)
            c_c++;
    }
    printf("There are %d distinct values\n", c_c);
    for (int i = 0; i < 101; i++)
    {
        if (b[i] > 0)
            printf("%d occurs %d times\n", i, b[i]);
    }
    printf("\n");
    // 6. check if an element exists or not

    int x;
    int flag = 0;
    int f_i = 0;
    printf("Enter the element you want to search: ");
    scanf("%d", &x);
    for (int i = 0; i <= n; i++)
    {
        if (x == a[i])
        {
            flag = 1;
            f_i = i;
            break;
        }
    }
    if (flag)
        printf("Element %d found at %d\n", a[f_i], f_i);
    else
        printf("Not found\n");
    printf("\n");
}