// JavaScript implementation
// Delete Operation


// Visual Representation of the binary search tree
//                10
//           /          \
//         5              17
//      /    \           /   \
//     2      7        14     22
//    / \    / \      / \     / \
//   1   4  6   9   11   16 22   27

// Node class
class Node
{
    constructor(data)
    {
        this.data = data;
        this.left = null;
        this.right = null;
    }
}



// Binary Search tree class
class BinarySearchTree
{
    constructor()
    {
        this.root = null;
    }

    // Insert Operation
    insert(data)
    {
        var newNode = new Node(data);
        if(this.root === null)
            this.root = newNode;
        else
            this.insertNode(this.root, newNode);
    }

    insertNode(node, newNode)
    {
        if(newNode.data < node.data)
        {
            if(node.left === null)
                node.left = newNode;
            else
                this.insertNode(node.left, newNode); 
        }

        else
        {
            if(node.right === null)
                node.right = newNode;
            else
                this.insertNode(node.right,newNode);
        }
    }

    // Delete Operation
    remove(data)
    {
        this.root = this.removeNode(this.root, data);
    }


    removeNode(node, key)
    {
        if(node === null)
            return null;
        else if(key < node.data)
        {
            node.left = this.removeNode(node.left, key);
            return node;
        }
        else if(key > node.data)
        {
            node.right = this.removeNode(node.right, key);
            return node;
        }
        else
        {
            if(node.left === null && node.right === null)
            {
                node = null;
                return node;
            }

            if(node.left === null)
            {
                node = node.right;
                return node;
            }
            else if(node.right === null)
            {
                node = node.left;
                return node;
            }
            var aux = this.findMinNode(node.right);
            node.data = aux.data;
            node.right = this.removeNode(node.right, aux.data);
            return node;
        }
    }



    // To print in inoder method
    inorder(node)
    {
        if(node !== null)
        {
            this.inorder(node.left);
            console.log(node.data);
            this.inorder(node.right);
        }
    }


    findMinNode(node)
    {
        if(node.left === null)
            return node;
        else
            return this.findMinNode(node.left);
    }


    getRootNode()
    {
        return this.root;
    }

    // Searching Element
    search(node, data)
    {
        if(node === null)
            return null;

        else if(data < node.data)
            return this.search(node.left, data);

        else if(data > node.data)
            return this.search(node.right, data);

        else
            return node;
    }

}







var BST = new BinarySearchTree();

// Inserting Elements
BST.insert(10);

BST.insert(2);
BST.insert(1);

BST.insert(4);
BST.insert(7);

BST.insert(9);
BST.insert(6);

BST.insert(5);
BST.insert(11);

BST.insert(14);
BST.insert(19);

BST.insert(17);
BST.insert(16);

BST.insert(27);
BST.insert(22);



var root = BST.getRootNode();
console.log('\n');
BST.inorder(root);
console.log('\n');

// var a = BST.search(root,5)


// if(a === null)
//     console.log('\nNot Found');
// else if(a.data !== 5)
//     console.log('\nNot Found');
// else 
//     console.log('\nFound');

BST.remove(9);
console.log('\n');
BST.inorder(root);

BST.remove(7);
console.log('\n');
BST.inorder(root);

BST.remove(14);
console.log('\n');
BST.inorder(root);

