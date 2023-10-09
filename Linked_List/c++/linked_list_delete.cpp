

#include <stdlib.h>
#include <iostream>

using namespace std;


struct Node {
  int item;
  struct Node* next;
};


void insertAtEnd(struct Node** ref, int data) {
  struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
  struct Node* last = *ref;

  new_node->item = data;
  new_node->next = NULL;

  if (*ref == NULL) {
    *ref = new_node;
    return;
  }

  while (last->next != NULL)
    last = last->next;

  last->next = new_node;
  return;
}

void deleteNode(struct Node** ref, int key) {
  struct Node *temp = *ref, *prev;

  if (temp != NULL && temp->item == key) {
    *ref = temp->next;
    free(temp);
    return;
  }

  while (temp != NULL && temp->item != key) {
    prev = temp;
    temp = temp->next;
  }

  if (temp == NULL) return;
  prev->next = temp->next;
  free(temp);
}


void printList(struct Node* node) {
  while (node != NULL) {
    cout << node->item << " ";
    node = node->next;
  }
}


int main() {
  struct Node* head = NULL;

  insertAtEnd(&head, 1);
  insertAtEnd(&head, 4);
  insertAtEnd(&head, 3);
  insertAtEnd(&head, 4);
  insertAtEnd(&head, 7);
  insertAtEnd(&head, 5);
  insertAtEnd(&head, 90);
  insertAtEnd(&head, 9);
  insertAtEnd(&head, 10);
  insertAtEnd(&head, 4);

  cout << "Linked list after inserting few elements:\n  ";
  printList(head);

  cout << "\nLinked list After deleting few elements:\n  ";
  deleteNode(&head, 1);
  deleteNode(&head, 4);
  deleteNode(&head, 5);
  deleteNode(&head, 6);

  printList(head);
}