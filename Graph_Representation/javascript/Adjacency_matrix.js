// JavaScript Implementation
// Adjacency Matrix

class Graph {
    constructor(size = 1) {
        this.size = size;
        this.matrix = [];
        for (let i = 0; i < size; i++) {
            this.matrix.push([]);
            for (let j = 0; j < size; j++) {
                this.matrix[i][j] = 0;
            }
        }
    }

    // Adding Edges
    addEdge(vertex1, vertex2, weight = 1) {
        if (vertex1 > this.size - 1 || vertex2 > this.size - 1) {
            console.log('invalid vertex');
        } else if (vertex1 === vertex2) {
            console.log('same vertex');
        } else {
            this.matrix[vertex1][vertex2] = weight;
            this.matrix[vertex2][vertex1] = weight;
        }
    }

    // Adding Nodes
    addVertex() {
        this.size++;
        this.matrix.push([]);
        for (let i = 0; i < this.size; i++) {
            this.matrix[i][this.size - 1] = 0;
            this.matrix[this.size - 1][i] = 0;
        }
    }

    // Printing adjacency list
    printMatrix(val) {
        for (let i = 1; i <= val; i++) {
            let row = '';
            for (let j = 1; j <= val; j++) {
                row += ` ${this.matrix[i][j]}`;
            }
            console.log(row);
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

g.printMatrix(6);