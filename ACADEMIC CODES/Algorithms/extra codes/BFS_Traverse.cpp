#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10];
int visited[6];
int dist[6];
int p[6];


void bfs(int s, int n)
{
    for(int i=1;i<=n;i++){
        visited[i]=0;
        dist[i]=0;
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
                dist[v]=dist[u]+1;
                p[v]=u;
                Q.push(v);
            }
        }
    }
}
void print_path(int s,int t)
{
    if(visited[t]==0){
        return;
    }

    vector <int> path;
    path.push_back(t);
    int now=t;

    while(now!=s){
        now=p[now];
        path.push_back(now);
    }
    cout<<"Printing Source to destination path:"<<endl;
    for(int i=path.size()-1;i>=0;i--){
        cout<<path[i]<<" ";
    }
    cout<<endl;

    cout<<"Printing Distance"<<endl;
    cout<<dist[t]<<endl;
}

int main()
{
    adj[1].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(3);
    adj[2].push_back(4);
    adj[2].push_back(1);
    adj[3].push_back(2);
    adj[3].push_back(4);
    adj[3].push_back(1);
    adj[3].push_back(5);
    adj[4].push_back(2);
    adj[4].push_back(3);
    adj[4].push_back(6);
    adj[5].push_back(3);
    adj[6].push_back(4);

    bfs(1,6);
    cout<<endl;
    print_path(1,6);
}
