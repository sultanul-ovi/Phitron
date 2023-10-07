#include<stdio.h>


/***

positive edge: dijkstra
negative edge: bell man ford
negative cycle

*/

#define V 5

int minDistance(int dist[V], int visit[V])
{
    int min = 999, min_index = -1,i;
    for(i =0; i<V;i++)
    {
        if(visit[i] == 0 && dist[i]<=min)
        {
            min = dist[i];
            min_index = i;
        }
    }
    return min_index;
}

void printsolution(int dist[V])
{
    printf("Distance from source:\n");
    int i;
    for(i = 0;i<V;i++)
        printf("%d \t\t %d\n",i,dist[i]);

        int max =0;
    for(int j =0;j<V;j++)
    {
        if(dist[j]>=max)
            max = dist[j];
    }
    printf("\n\n%d",max);
}

void dijsktra(int graph[V][V], int src)
{
    int dist[V];
    int visit[V];
    int i,j,u,v;
    for(i = 0;i<V;i++)
    {
        dist[i] = 999;
        visit[i] = 0;
    }
    dist[src] = 0;
    for(j=0;j<V-1;j++)
    {
        u = minDistance(dist,visit);

        visit[u] = 1;
        for(v=0;v<V;v++)
        {
            if(visit[v]==0 && graph[u][v]!=0 && dist[u]+graph[u][v]<dist[v])
                dist[v] = dist[u] + graph[u][v];
            printf("%d ",dist[v]);


        }

        printf("\n");
    }



    printsolution(dist);

}



int main(){

    int graph[V][V] ={
        {0,4,2,0,0},
    {0,0,3,2,3},
    {0,1,0,4,5},
    {0,0,0,0,0},
    {0,0,0,1,0}};

    dijsktra(graph,0);

}
