// A C program for Dijkstra's single source shortest path algorithm.
// The program is for adjacency matrix representation of the graph
#include <stdio.h>
#include <stdlib.h>


// Number of vertices in the graph
#define V 6

// A utility function to find the vertex with minimum distance value, from
// the set of vertices not yet included in shortest path tree
int minDistance(int dist[V], int sptSet[V])
{
	// Initialize min value
	int min = 99, min_index = -1, i;

	for (i = 0; i < V; i++)
	{
		if (sptSet[i] == 0 && dist[i] <= min)
		{
			min = dist[i];
			min_index = i;
		}
	}

	return min_index;
}

// A utility function to print the constructed distance array
void printSolution(int dist[V])
{
	printf("Vertex \t\t Distance from Source\n");
	int i;
	for (i = 0; i < V; i++)
		printf("%d \t\t %d\n", i, dist[i]);
}


// Function that implements Dijkstra's single source shortest path algorithm
// for a graph represented using adjacency matrix representation
void dijkstra(int graph[V][V], int src)
{

	int dist[V]; // The output array.  dist[i] will hold the shortest
    // distance from src to i
	int sptSet[V]; // sptSet[i] will be 1 if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized
	int i, u, v, count;

// Initialize all distances as INFINITE and stpSet[] as 0
	for (i = 0; i < V; i++)
	{
		dist[i] = 99;
		sptSet[i] = 0;
	}
// Distance of source vertex from itself is always 0
	dist[src] = 0;
// Find shortest path for all vertices
	for (count = 0; count < V - 1; count++)
	{
		// Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in the first iteration.
		u = minDistance(dist, sptSet);
		// Mark the picked vertex as processed
		sptSet[u] = 1;
		// Update dist value of the adjacent vertices of the picked vertex.
		for (v = 0; v < V; v++)
		{
			// Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
			if (sptSet[v]==0 && graph[u][v] != 0  && dist[u] + graph[u][v] < dist[v])
				dist[v] = dist[u] + graph[u][v];
				printf("%d  ",dist[v]);
		}
		printf("\n");
	}
	
	printSolution(dist);
}


void main()
{

	int graph[V][V] = {{0, 2, 4, 0, 0, 0},
					    {2, 0, 1, 4, 2, 0},
					    {4, 1, 0, 0, 3, 0},
					    {0, 4, 0, 0, 3, 2},
					    {0, 2, 3, 3, 0, 2},
					    {0, 0, 0, 2, 2, 0}};

	dijkstra(graph, 0);
}


/*
int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };


						int graph[V][V] = {{0, 4, 2, 0, 0},
					    {0, 0, 3, 2, 3},
					    {0, 1, 0, 4, 5},
					    {0, 0, 0, 0, 0},
					    {0, 0, 0, 1, 0}};

 */
