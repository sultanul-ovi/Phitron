#include <bits/stdc++.h>
using namespace std;

vector<int> adj[10];
int visited[10];

// Add edge
void addEdge(vector<int> adj[], int s, int d)
{
    adj[s].push_back(d);
    adj[d].push_back(s);
}

void bfs(int s, int n)
{
    queue<int> Q;
    Q.push(s);
    visited[s] = 1;

    while (!Q.empty())
    {
        int u = Q.front(); //printing first value
        cout << u << "\t";
        Q.pop();

        for (int i = 0; i < adj[u].size(); i++)
        {
            if (i == adj[u].size()-1)
                Q.push(999);
            if (visited[adj[u][i]] == 0)
            {
                int v = adj[u][i];
                visited[v] = 1;
                Q.push(v);
            }
            
        }
    }
}

int main()
{
    int V, E, a, b;
    scanf("%d %d", &V, &E);

    for (int i = 0; i <= E; i++)
        visited[i] = 0;

    for (int i = 0; i < E; i++)
    {
        scanf("%d %d", &a, &b);
        addEdge(adj, a, b);
    }

    cout << "Printing graph using BFS:" << endl;
    bfs(1, 7);
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