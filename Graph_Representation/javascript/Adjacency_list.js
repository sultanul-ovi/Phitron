// JavaScript Implementation
// Adjacency List

class Graph {
    constructor(noOfVertices)
    {
        this.noOfVertices = noOfVertices;
        this.AdjList = new Map();
    }

    // Adding Nodes
    addVertex(v)
    {
        this.AdjList.set(v, []);
    }

    // Adding Edges
    addEdge(v, w)
    {

        this.AdjList.get(v).push(w);
        this.AdjList.get(w).push(v);
    }

    // Printing adjacency list
    printGraph()
    {
        var get_keys = this.AdjList.keys();
        for (var i of get_keys) 
        {
            var get_values = this.AdjList.get(i);
            var conc = "";
            for (var j of get_values)
                conc += j + " ";
            console.log(i + " -> " + conc);
        }
    }
}




var g = new Graph(6);
var vertices = [ '1', '2', '3', '4', '5', '6' ];

for (var i = 0; i < vertices.length; i++) {
    g.addVertex(vertices[i]);
}

g.addEdge('1', '3');
g.addEdge('1', '4');
g.addEdge('2', '4');
g.addEdge('3', '2');
g.addEdge('4', '5');
g.addEdge('5', '6');

g.printGraph();