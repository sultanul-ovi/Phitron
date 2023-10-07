// Adjacency List representation in C++
/***
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

// Add edge
void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

// Print the graph
void printGraph(vector<int> adj[], int V)
{
    for (int d = 0; d < V; ++d)
    {
        cout << "Vertex " << d << ":";
        for (int i = 0; i < adj[d].size(); i++)
        {
            cout << " -> " << adj[d][i];
        }
        printf("\n");
    }
}

int main()
{
    int m, n, a, b;
    scanf("%d %d", &m, &n);
    int V = m;

    // Create a graph

    vector<int> adj[V];

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        addEdge(adj, a, b);
    }

    printf("Adjacency List: \n");
    printGraph(adj, V);
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
