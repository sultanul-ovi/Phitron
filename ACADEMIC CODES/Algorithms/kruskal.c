// You can use the following links to understand how kruskal works.
// https://www.programiz.com/dsa/kruskal-algorithm
// https://www.geeksforgeeks.org/kruskals-minimum-spanning-tree-algorithm-greedy-algo-2/?ref=lbp
// https://www.youtube.com/watch?v=4ZlRH0eK-qQ&t=171s 

#include <stdio.h>
int parent[10] = {0};
int find_parent(int); // function declaration
int is_cyclic(int, int);
int main()
{
    int cost[10][10], min_cost = 0, min, i, j, n, no_e = 1, a, b, u, v, x;
    printf("Enter number of vertex\n");
    scanf("%d", &n);
    printf("Enter weight in form of adjacency matrix\n");
    // Input graph
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            scanf("%d", &cost[i][j]);
            if (cost[i][j] == 0)
                cost[i][j] = 999;
        }
    }

    //logic for kruskal's Algorithm
    while (no_e < n)
    {
        min = 999;
        // finding Minimum weight in adjacency matrix
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
            }
        }
        // finding parent of the vertex from where edge is start
        u = find_parent(u);
        v = find_parent(v);
        // Checking that after connecting the vertex is it create cycle
        x = is_cyclic(u, v);
        if (x == 1)
        {
            printf("\n%d to %d", a, b);
            no_e++;
            min_cost += min;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\nMinimum cost of the spanning tree is %d", min_cost);
    return 0;
}

// function for finding parent of any vertex
int find_parent(int a)
{
    while (parent[a] != 0)
        a = parent[a];
    return a;
}

// function for check Is edge create cycle after connecting the edges
// because cycle is not allow in spanning tree
int is_cyclic(int a, int b)
{
    if (a != b)
    {
        parent[b] = a;
        // a!=b then cycle is not created then return 1
        return 1;
    }
    return 0;
}

/*

Enter number of vertex
6
Enter weight in form of adjacency matrix
0 4 4 0 0 0
4 0 2 0 0 0
4 2 0 3 2 4
0 0 3 0 0 3
0 0 2 0 0 3 
0 0 4 3 3 0 

2 to 3
3 to 5
3 to 4
4 to 6
1 to 2
Minimum cost of the spanning tree is 14


*/