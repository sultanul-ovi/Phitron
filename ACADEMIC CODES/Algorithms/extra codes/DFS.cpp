#include <bits/stdc++.h>
using namespace std;

vector <int> adj[6];
int visited[6];


void dfs(int nod)
{
    if(visited[nod])
        return;

    visited[nod]=1;
    cout<<nod<<" ";

    for(int i=0; i<adj[nod].size(); i++)
    {
        dfs(adj[nod][i]);
    }
}

int main()
{

    int a,b;
    for(int i =0; i<12; i++)
    {
        scanf("%d %d",&a,&b);
        adj[a].push_back(b);
    }
    cout<<"Printing graph using DFS:"<<endl;
    dfs(1);
}
/**
 1 2
 1 5
 2 3
 2 5
 2 1
 5 1
 5 2
 5 4
 3 2
 3 4
 4 5
 4 6
 */
