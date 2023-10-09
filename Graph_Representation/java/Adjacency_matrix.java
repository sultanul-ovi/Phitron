// Java Implementation
// Adjacency Matrix

public class Adjacency_matrix {
  private boolean adjMatrix[][];
  private int numVertices;

  // Initialization
  public Adjacency_matrix(int numVertices) {
    this.numVertices = numVertices;
    adjMatrix = new boolean[numVertices][numVertices];
  }

  // Adding Edges
  public void addEdge(int i, int j) {
    adjMatrix[i][j] = true;
    adjMatrix[j][i] = true;
  }


  // Printing the matrix
  public String toString() {
    StringBuilder s = new StringBuilder();
    for (int i = 0; i < numVertices; i++) {
      for (boolean j : adjMatrix[i]) {
        s.append((j ? 1 : 0) + " ");
      }
      s.append("\n");
    }
    return s.toString();
  }

  public static void main(String args[]) {
    Adjacency_matrix g = new Adjacency_matrix(6);

    System.out.print("\n");
    g.addEdge(0, 2);
    g.addEdge(0, 3);

    g.addEdge(1, 3);
    g.addEdge(2, 1);

    g.addEdge(3, 4);
    g.addEdge(4, 5);

    System.out.print(g.toString());
    System.out.print("\n");
  }
}