// Adjascency List representation in Java

import java.util.*;

class Adjacency_list {

  // Adding Edges
  static void addEdge(ArrayList<ArrayList<Integer>> am, int s, int d) {
    am.get(s).add(d);
    am.get(d).add(s);
  }

  // Printing the graph
  static void printGraph(ArrayList<ArrayList<Integer>> am) {
    for (int i = 0; i < am.size(); i++) {
      System.out.println(i + ":");
      for (int j = 0; j < am.get(i).size(); j++) {
        System.out.print(" -> " + am.get(i).get(j));
      }
      System.out.println();
    }
  }

  public static void main(String[] args) {

    int V = 6;
    ArrayList<ArrayList<Integer>> am = new ArrayList<ArrayList<Integer>>(V);

    for (int i = 0; i < V; i++)
      am.add(new ArrayList<Integer>());


    addEdge(am, 0, 3);
    addEdge(am, 0, 2);
    addEdge(am, 1, 3);
    addEdge(am, 2, 1);
    addEdge(am, 3, 4);
    addEdge(am, 4, 5);


    System.out.println("\n");
    printGraph(am);
    System.out.println("\n");
  }


}