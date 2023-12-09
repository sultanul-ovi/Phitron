#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_head(Node *&head, int val) {
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node *&head, int val) {
    Node *newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        return;
    }

    Node *tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

void delete_from_position(Node *&head, int pos) {
    if (head == NULL || pos < 0) {
        return;
    }

    if (pos == 0) {
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node *tmp = head;
    for (int i = 1; i < pos && tmp->next != NULL; i++) {
        tmp = tmp->next;
    }

    if (tmp == NULL || tmp->next == NULL) {
        return;
    }

    Node *deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}

void print_linked_list(Node *head) {
    Node *tmp = head;
    while (tmp != NULL) {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

void delete_linked_list(Node *&head) {
    while (head != NULL) {
        Node *tmp = head;
        head = head->next;
        delete tmp;
    }
}

int main() {
    int Q;
    cin >> Q;
    Node *head = NULL;

    for (int i = 0; i < Q; i++) {
        int X, V;
        cin >> X >> V;
        if (X == 0) {
            insert_at_head(head, V);
        } else if (X == 1) {
            insert_at_tail(head, V);
        } else if (X == 2) {
            delete_from_position(head, V);
        }
        print_linked_list(head);
    }

    delete_linked_list(head);
    return 0;
}
