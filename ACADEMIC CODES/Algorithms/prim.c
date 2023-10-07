// You can use the following links to understand how prim works.
// https://www.programiz.com/dsa/prim-algorithm 
// https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/ 
// https://www.youtube.com/watch?v=4ZlRH0eK-qQ&t=171s 
// https://www.youtube.com/watch?v=eB61LXLZVqs&t=90s 


#include <stdio.h>
int main()
{
    int cost[10][10], visited[10] = {0}, i, j, n, no_e = 1, min, a, b, min_cost = 0;
    printf("Enter number of nodes ");
    scanf("%d", &n);
    printf("Enter cost in form of adjacency matrix\n");
    //input graph
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            // cost is 0 then initialize it by maximum value
            if (cost[i][j] == 0)
                cost[i][j] = 1000;
        }
    }

    // logic for finding minimum cost spanning tree
    visited[1] = 1; // visited first node
    while (no_e < n)
    {
        min = 1000;
        // in each cycle find minimum cost
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (cost[i][j] < min && visited[i])
                {

                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        //if node is not visited
        if (visited[b] == 0 || visited[a] == 0)
        {
            printf("\n%d to %d  cost=%d", a, b, min);
            min_cost = min_cost + min;
            no_e++;
        }
        visited[b] = 1;
        visited[a] = 1;
        // initialize with maximum value you can also use any other value
        cost[a][b] = cost[b][a] = 1000;
    }
    printf("\nminimum weight is %d", min_cost);
    return 0;
}

/*
Enter number of nodes 6
Enter cost in form of adjacency matrix
0 4 4 0 0 0
4 0 2 0 0 0
4 2 0 3 2 4
0 0 3 0 0 3
0 0 2 0 0 3
0 0 4 3 3 0

1 to 2  cost=4
2 to 3  cost=2
3 to 5  cost=2
3 to 4  cost=3
4 to 6  cost=3
minimum weight is 14



*/