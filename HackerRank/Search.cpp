#include <bits/stdc++.h>
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

void insert_at_tail(Node *&head, Node *&tail, int v) {
    Node *newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int find_index(Node *head, int x) {
    Node *tmp = head;
    int index = 0;
    while (tmp != NULL) {
        if (tmp->val == x) {
            return index;
        }
        tmp = tmp->next;
        index++;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Node *head = NULL, *tail = NULL;
        int v;
        while (cin >> v && v != -1) {
            insert_at_tail(head, tail, v);
        }
        int x;
        cin >> x;
        cout << find_index(head, x) << endl;

        // Free the allocated memory
        Node *curr = head;
        while (curr != NULL) {
            Node *next = curr->next;
            delete curr;
            curr = next;
        }
    }
    return 0;
}
