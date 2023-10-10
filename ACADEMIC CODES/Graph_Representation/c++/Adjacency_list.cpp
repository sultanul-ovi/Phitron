// C++ Implementation
// Adjacency List

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Adding Edges
void addEdge(vector<int> adj[], int s, int d) {
    adj[s].push_back(d);
    adj[d].push_back(s);
}

  // Printing the list
void printGraph(vector<int> adj[], int V) {
    for (int d = 0; d < V; ++d) {
        cout << "\n" << d << ":";
        for (auto x : adj[d])
            cout << "-> " << x;
        printf("\n");
    }
}

int main() {

    vector<int> adj[6];

    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 1);
    addEdge(adj, 3, 4);
    addEdge(adj, 4, 5);

    cout << "\n";
    printGraph(adj, 6);
    cout << "\n";
}