# Python Implementation
# Adjacency List


class AdjNode:
    def __init__(self, value):
        self.vertex = value
        self.next = None


class Graph:
    
    # Initialization
    def __init__(self, num):
        self.V = num
        self.graph = [None] * self.V

    # Adding Edges
    def add_edge(self, s, d):
        
        node = AdjNode(d)
        node.next = self.graph[s]
        self.graph[s] = node

        node = AdjNode(s)
        node.next = self.graph[d]
        self.graph[d] = node


    # Printing the graph
    def print_agraph(self):
        for i in range(self.V):
            print(str(i) + ":", end="")
            temp = self.graph[i]
            while temp:
                print(" -> {}".format(temp.vertex), end="")
                temp = temp.next
            print(" \n")


if __name__ == "__main__":
    
    graph = Graph(6)
    
    graph.add_edge(0, 2)
    graph.add_edge(0, 3)
    graph.add_edge(1, 3)
    graph.add_edge(2, 1)
    graph.add_edge(3, 4)
    graph.add_edge(4, 5)
    
    print("\n")
    graph.print_agraph()