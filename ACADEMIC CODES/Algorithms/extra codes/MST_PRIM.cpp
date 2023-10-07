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
vector<pair<int, int> > V[100];
priority_queue <Node> PQ;
int cost[100];
int taken[100];
int n=5;


void addEdge(vector <pair<int, int> > V[], int u,int v, int wt)
{
    V[u].push_back(make_pair(v, wt));
    V[v].push_back(make_pair(u, wt));
}

int prim(int s)
{
    for(int i=0;i<n;i++){
        cost[i]=INT_MAX;
        taken[i]=0;
    }
    cost[s]=0;
    PQ.push(Node(s,0));
    int ans=0;

    while(!PQ.empty()){
        Node x=PQ.top();
        PQ.pop();

        if(taken[x.at]){
            continue;
        }
        taken[x.at]=1;
        ans+=x.cost;

        for(auto it=V[x.at].begin();it!=V[x.at].end();it++){
            if(taken[it->first]){
                continue;
            }
            if(it->second<cost[it->first]){
                PQ.push(Node(it->first,it->second));
                cost[it->first]=it->second;
            }
        }
    }
    cout<<"Minimum cost of MST is: "<<ans;
}
int main()
{

    addEdge(V, 0, 1, 4);
    addEdge(V, 0, 2, 4);
    addEdge(V, 1, 2, 2);
    addEdge(V, 2, 3, 3);
    addEdge(V, 2, 4, 4);
    addEdge(V, 2, 5, 2);
    addEdge(V, 3, 4, 70);

    prim(0);
}
