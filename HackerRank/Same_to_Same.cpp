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

bool are_lists_same(Node *head1, Node *head2) {
    Node *tmp1 = head1, *tmp2 = head2;
    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1->val != tmp2->val) return false;
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    return tmp1 == NULL && tmp2 == NULL;
}

int main() {
    Node *head1 = NULL, *tail1 = NULL;
    Node *head2 = NULL, *tail2 = NULL;
    int v;

    while (cin >> v && v != -1) {
        insert_at_tail(head1, tail1, v);
    }
    cin.clear(); // Clear end of file condition after the first list
    while (cin >> v && v != -1) {
        insert_at_tail(head2, tail2, v);
    }

    cout << (are_lists_same(head1, head2) ? "YES" : "NO") << endl;

    // Free the allocated memory for both lists
    Node *curr;
    while (head1 != NULL) {
        curr = head1;
        head1 = head1->next;
        delete curr;
    }
    while (head2 != NULL) {
        curr = head2;
        head2 = head2->next;
        delete curr;
    }

    return 0;
}
