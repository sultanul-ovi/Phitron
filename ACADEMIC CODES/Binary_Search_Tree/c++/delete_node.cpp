// C++ Implementation
// binary Search Tree Delete Operation

//  Visual Representation of the binary search tree
//                 10
//            /         \ 
//          5              17
//       /    \           /   \ 
//      2      7        14     22
//     / \    / \      / \     / \       
//    1   4  6   9   11   16 22   27  



#include <iostream>
using namespace std;

struct node {
  int key;
  struct node *left, *right;
};


struct node *newNode(int item) {
  struct node *temp = (struct node *)malloc(sizeof(struct node));
  temp->key = item;
  temp->left = temp->right = NULL;
  return temp;
}

// Inorder 
void inorder(struct node *root) {
  if (root != NULL) {
    inorder(root->left);
    cout <<  " -> " << root->key;
    inorder(root->right);
  }
}

// Insert Operation
struct node *insert(struct node *node, int key) {
  if (node == NULL) return newNode(key);
  if (key < node->key)
    node->left = insert(node->left, key);
  else
    node->right = insert(node->right, key);
  return node;
}

// inorder successor
struct node *minValueNode(struct node *node) {
  struct node *current = node;
  while (current && current->left != NULL)
    current = current->left;
  return current;
}

// Delete Operation
struct node *deleteNode(struct node *root, int key) {
  if (root == NULL) return root;
  if (key < root->key)
    root->left = deleteNode(root->left, key);
  else if (key > root->key)
    root->right = deleteNode(root->right, key);
  else {
    if (root->left == NULL) {
      struct node *temp = root->right;
      free(root);
      return temp;
    } else if (root->right == NULL) {
      struct node *temp = root->left;
      free(root);
      return temp;
    }
    struct node *temp = minValueNode(root->right);
    root->key = temp->key;
    root->right = deleteNode(root->right, temp->key);
  }
  return root;
}


int main() {
  struct node *root = NULL;
  root = insert(root, 10);

  root = insert(root, 2);
  root = insert(root, 1);
  root = insert(root, 4);
  root = insert(root, 9);

  root = insert(root, 7);
  root = insert(root, 6);
  root = insert(root, 5);

  root = insert(root, 11);
  root = insert(root, 14);
  root = insert(root, 19);

  root = insert(root, 17);
  root = insert(root, 16);
  root = insert(root, 27);
  root = insert(root, 22);







  cout << "Inorder traversal: ";
  inorder(root);

  cout << "\nAfter deleting 11\n";
  root = deleteNode(root, 11);
  cout << "Inorder traversal: ";
  inorder(root);
}