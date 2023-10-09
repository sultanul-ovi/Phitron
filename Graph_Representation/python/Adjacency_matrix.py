# Python Implementation
# Adjacency Matrix


class Graph(object):

    # Initialization
    def __init__(self, size):
        self.adjMatrix = []
        for i in range(size):
            self.adjMatrix.append([0 for i in range(size)])
        self.size = size

    # Adding Edges
    def add_edge(self, v1, v2):
        if v1 == v2:
            print("Same vertex %d and %d" % (v1, v2))
        self.adjMatrix[v1][v2] = 1
        self.adjMatrix[v2][v1] = 1


    # Printing the matrix
    def print_matrix(self):
        print("\n")
        for row in self.adjMatrix:
            for val in row:
                print('{}'.format(val), end =" "),
            print("\n")


if __name__ == '__main__':
    
    graph = Graph(6)
    
    graph.add_edge(0, 2)
    graph.add_edge(0, 3)
    
    graph.add_edge(1, 3)
    graph.add_edge(2, 1)
    
    graph.add_edge(3, 4)
    graph.add_edge(4, 5)
    
    graph.print_matrix()