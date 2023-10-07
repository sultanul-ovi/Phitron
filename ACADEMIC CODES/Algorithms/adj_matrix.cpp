// Adjacency Matrix representation in C++
/**
bfs = breadth first search (level) queue
dfs = depth first search (height) stack

vector: dynamic array
vector <int> array[10];

graph representation:
 adjacency matrix:
    0 1 1 0 0 0 0
    1 0 0 1 1 1 1
    1 0 0 0 0 0 1
    0 1 0 0 0 0 0
    0 1 0 0 0 0 0
    0 1 0 0 0 0 0
    0 1 1 0 0 0 0

 adjacency list:
 1: 2 3
 2: 1 4 5 6 7
 3: 1 7
 4: 2
 5: 2
 6: 2
 7: 2 3

*/
#include <bits/stdc++.h>
using namespace std;
int vertArr[20][20]; //the adjacency matrix initially 0
int count = 0;
void displayMatrix(int v)
{
    int i, j;
    for (i = 0; i < v; i++)
    {
        for (j = 0; j < v; j++)
        {
            cout << vertArr[i][j] << " ";
        }
        cout << endl;
    }
}
void add_edge(int u, int v) //function to add edge into the matrix
{
    vertArr[u][v] = 1;
    vertArr[v][u] = 1;
}
main()
{
    int m, n, a, b;
    scanf("%d %d", &m, &n);
    int V = m;

    // Create a graph

    vector<int> adj[V];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        add_edge(a, b);
    }
    printf("Adjacency Matrix: \n");
    displayMatrix(V);
    
}

/**
7 7
1 2
1 5
2 3
2 5
3 4
4 5
4 6

*/
