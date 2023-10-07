#include <bits/stdc++.h>
using namespace std;

struct Node{
    int at,cost;
    Node(int _at,int _cost){
        at=_at;
        cost=_cost;
    }
};
bool operator<(Node A,Node B){
    return A.cost>B.cost;
}


priority_queue <Node> PQ;
int dist[100];
int n=5;


void addEdge(vector <pair<int, int> > adj[], int u,int v, int wt)
{
    adj[u].push_back(make_pair(v, wt));
    adj[v].push_back(make_pair(u, wt));
}

void dijkstra(vector<pair<int,int> > adj[], int s, int d){
    for(int i=0;i<n;i++){
        dist[i]=10000000;
    }
    dist[s]=0;
    PQ.push(Node(s,0));

    while(!PQ.empty()){
        Node u=PQ.top();
        PQ.pop();
        int no=u.at;

        for(auto it = adj[no].begin(); it!=adj[no].end(); it++){
            int v=it->first;
            int w=it->second;
            if(dist[v]>u.cost+w){
                dist[v]=u.cost+w;
                PQ.push(Node(v,dist[v]));
            }
        }
    }
    cout<<"Distance from source node s="<<s<<" to destination node d="<<d<<" is "<<dist[d]<<endl;



}
int main()
{

    vector<pair<int, int> > adj[5];
    addEdge(adj, 0, 1, 10);
    addEdge(adj, 0, 4, 20);
    addEdge(adj, 1, 2, 30);
    addEdge(adj, 1, 3, 40);
    addEdge(adj, 1, 4, 50);
    addEdge(adj, 2, 3, 60);
    addEdge(adj, 3, 4, 70);

    dijkstra(adj,0,1);


}
