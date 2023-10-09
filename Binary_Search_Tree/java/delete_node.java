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

class BinarySearchTree {
    class Node {
      int key;
      Node left, right;
  
      public Node(int item) {
        key = item;
        left = right = null;
      }
    }
  
    Node root;
  
    BinarySearchTree() {
      root = null;
    }
  
    void insert(int key) {
      root = insertKey(root, key);
    }
  
    Node insertKey(Node root, int key) {
      if (root == null) {
        root = new Node(key);
        return root;
      }
      if (key < root.key)
        root.left = insertKey(root.left, key);
      else if (key > root.key)
        root.right = insertKey(root.right, key);
  
      return root;
    }
  
    void inorder() {
      inorderRec(root);
    }
  
    void inorderRec(Node root) {
      if (root != null) {
        inorderRec(root.left);
        System.out.print(" -> " + root.key);
        inorderRec(root.right);
      }
    }
  
    void deleteKey(int key) {
      root = deleteRec(root, key);
    }
  
    Node deleteRec(Node root, int key) {
      if (root == null)
        return root;
      if (key < root.key)
        root.left = deleteRec(root.left, key);
      else if (key > root.key)
        root.right = deleteRec(root.right, key);
      else {
        if (root.left == null)
          return root.right;
        else if (root.right == null)
          return root.left;
        root.key = minValue(root.right);
        root.right = deleteRec(root.right, root.key);
      }
  
      return root;
    }
  

    int minValue(Node root) {
      int minv = root.key;
      while (root.left != null) {
        minv = root.left.key;
        root = root.left;
      }
      return minv;
    }
  
    public static void main(String[] args) {
      BinarySearchTree tree = new BinarySearchTree();
  
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

  
      System.out.print("Inorder traversal: ");
      tree.inorder();
  
      System.out.println("\n\nAfter deleting 10");
      tree.deleteKey(10);
      System.out.print("Inorder traversal: ");
      tree.inorder();
    }
  }
