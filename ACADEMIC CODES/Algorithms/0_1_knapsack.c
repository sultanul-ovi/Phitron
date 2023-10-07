#include <stdio.h>
int max(int a, int b) 
{ 
    //return (a > b) ? a : b; 
    if(a>b)
        return a;
    else 
        return b;
    }
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
    int K[n + 1][W + 1];
    for (i = 0; i <= n; i++)
    {
        for (w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}


int main()
{
    int i, n, val[20], wt[20], W;

    printf("Enter number of items:");
    scanf("%d", &n);

    printf("Enter value and weight of items:\n");
    for (i = 0; i < n; ++i)
        scanf("%d%d", &val[i], &wt[i]);

    printf("Enter size of knapsack:");
    scanf("%d", &W);

    int max_profit = knapSack(W, wt, val, n);
    printf("%d", max_profit);
    return 0;
}

/*

Enter number of items:3
Enter value and weight of items:
100 20
50 10
150 30
Enter size of knapsack:50
250

Enter number of items:4
Enter value and weight of items:
1 1
4 3
5 4
7 5
Enter size of knapsack:7
9
*/