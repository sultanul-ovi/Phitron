#include <bits/stdc++.h>
using namespace std;

vector <int> adj[6];
int visited[6];
int dist[6];
int p[6];

void bfs(int s, int n)
{
    for(int i=1;i<=n;i++){
        visited[i]=0;
    }
    queue <int> Q;
    Q.push(s);
    visited[s]=1;

    cout<<"Printing Given Graph using BFS traversing:"<<endl;

    while(!Q.empty()){
        int u=Q.front();
        cout<<u<<" ";
        Q.pop();




        for(int i=0;i<adj[u].size();i++){
            if(visited[adj[u][i]]==0){
                int v=adj[u][i];
                visited[v]=1;
                Q.push(v);
            }
        }
    }
}

int main()
{
    adj[1].push_back(2);
    adj[1].push_back(5);
    adj[2].push_back(3);
    adj[2].push_back(5);
    adj[2].push_back(1);
    adj[5].push_back(1);
    adj[5].push_back(2);
    adj[5].push_back(4);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[4].push_back(5);
    adj[4].push_back(6);
    bfs(1,6);
}

