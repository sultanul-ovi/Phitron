// C++ Implementation
// Adjacency Matrix

#include <iostream>
using namespace std;

class Graph {
    private:
    bool** adjMatrix;
    int numVertices;

public:

//  Initialization
Graph(int numVertices) {
    this->numVertices = numVertices;
    adjMatrix = new bool*[numVertices];
    for (int i = 0; i < numVertices; i++) {
      adjMatrix[i] = new bool[numVertices];
      for (int j = 0; j < numVertices; j++)
        adjMatrix[i][j] = false;
    }
  }

  // Adding Edges
void addEdge(int i, int j) {
    adjMatrix[i][j] = true;
    adjMatrix[j][i] = true;
  }



  // Printing the matrix
void toString() {
    for (int i = 0; i < numVertices; i++) {
      for (int j = 0; j < numVertices; j++)
        cout << adjMatrix[i][j] << " ";
      cout << "\n";
    }
  }

};

int main() {
  
  Graph g(6);

  g.addEdge(0, 2);
  g.addEdge(0, 3);
  g.addEdge(1, 3);
  g.addEdge(2, 1);
  g.addEdge(3, 4);
  g.addEdge(4, 5);

  cout << "\n";
  g.toString();
  cout << "\n";
}