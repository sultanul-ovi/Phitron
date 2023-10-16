

#include <stdlib.h>
#include <iostream>

using namespace std;


struct Node {
    int item;
    struct Node* next;
};

void insertAtBeginning(struct Node** ref, int data) {

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->item = data;
    new_node->next = (*ref);
    (*ref) = new_node;
}


void insertAfter(struct Node* prev_node, int data) {
    if (prev_node == NULL) {
    cout << "the given previous node cannot be NULL";
    return;
    }

    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->item = data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}

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



void printList(struct Node* node) {
    while (node != NULL) {
    cout << node->item << " ";
    node = node->next;
    }
}

// Driver program
int main() {
    struct Node* head = NULL;

    insertAtEnd(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtEnd(&head, 4);
    insertAfter(head->next, 5);
    insertAtEnd(&head, 3);
    insertAtBeginning(&head, 8);
    insertAtBeginning(&head, 7);
    insertAtEnd(&head, 9);
    insertAfter(head->next, 1);

    cout << "Linked list: ";
    printList(head);


}