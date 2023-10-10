// Binary Search Tree 
// JAVA

//  Visual Representation of the binary search tree
//                 10
//            /         \ 
//          5              17
//       /    \           /   \ 
//      2      7        14     22
//     / \    / \      / \     / \       
//    1   4  6   9   11   16 22   27  

class BinarySearchTree_search {
    class Node
    {
        int key;
        Node left, right;
        public Node(int item)
        {
            key = item;
            left = right = null;
        }
    }
    Node root;
    BinarySearchTree_search()
    {
        root = null;
    }

    void insert(int key)
    {
        root = insertRec(root, key);
    }

    Node insertRec(Node root, int key)
    {

        if (root == null)
        {
            root = new Node(key);
            return root;
        }

        if (key < root.key)
            root.left = insertRec(root.left, key);
        else if (key > root.key)
            root.right = insertRec(root.right, key);

        return root;
    }
    void searchKey(int key) {
        root = search(root, key);
    }

    Node search(Node root, int key)
    {
        if (root==null || root.key==key)
        {
            if(root == null)
                {System.out.println("\nNot Found"); 
                System.exit(0);}
            else if(root.key != key)
                {System.out.println("\nNot Found");
                System.exit(0);}
            else 
                {System.out.println("\nFound");
                System.exit(0);}
        }
        if (root.key < key)
            return search(root.right, key);

        return search(root.left, key);
    }

    void inorder()
    {
        inorderRec(root);
    }

    void inorderRec(Node root)
    {
        if (root != null) {
            inorderRec(root.left);
            System.out.println(root.key);
            inorderRec(root.right);
        }
    }


    public static void main(String[] args)
    {
        BinarySearchTree_search tree = new BinarySearchTree_search();
        

        tree.insert(10);

        tree.insert(2);
        tree.insert(1);
        tree.insert(4);
        tree.insert(9);

        tree.insert(7);
        tree.insert(6);
        tree.insert(5);
        tree.insert(9);
        tree.insert(11);
        tree.insert(14);
        tree.insert(19);
        tree.insert(17);

        tree.insert(16);
        tree.insert(27);
        tree.insert(22);


        // tree.inorder();

        

        tree.searchKey(5);


        
        }
}