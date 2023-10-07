#include <bits/stdc++.h>
using namespace std;

vector <int> adj[100];
int nodes;

void add_edge(int u, int v) {
    adj[u].push_back(v);
    adj[v].push_back(u);
}


void bfs(int s)
{
    int visited[nodes];
    int dist[nodes];
    for(int i=1;i<=nodes;i++){
        visited[i]=0;
        dist[i]=0;
    }

    queue <int> Q;
    Q.push(s);
    visited[s]=1;

    while(!Q.empty()){
        int u=Q.front();
        Q.pop();


        for(int i=0;i<adj[u].size();i++){
            if(visited[adj[u][i]]==0){
                int v=adj[u][i];
                visited[v]=1;
                dist[v]=dist[u]+6;
                Q.push(v);
            }
        }
    }
    for(int i=1;i<=nodes;i++){
        if(i!=s){
            if(dist[i]==0){
                cout<<"-1"<<" ";
            }
            else{
                cout<<dist[i]<<" ";
            }
        }
    }
    cout<<endl;
}
int main()
{
    int queries;
    cin >> queries;

    for (int t = 0; t < queries; t++) {

		int  m;
        cin >> nodes;

        cin >> m;
        for (int i = 0; i < m; i++) {
            int u, v;
            cin >> u >> v;
            add_edge(u, v);
        }
        int s;
        cin>>s;
        bfs(s);
    }
}
