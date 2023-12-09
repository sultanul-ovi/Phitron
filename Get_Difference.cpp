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

int find_max_min_diff(Node *head) {
    if (head == NULL) return 0;

    int maxVal = head->val, minVal = head->val;
    Node *tmp = head;
    while (tmp != NULL) {
        maxVal = max(maxVal, tmp->val);
        minVal = min(minVal, tmp->val);
        tmp = tmp->next;
    }
    return maxVal - minVal;
}

int main() {
    Node *head = NULL, *tail = NULL;
    int v;
    while (cin >> v && v != -1) {
        insert_at_tail(head, tail, v);
    }

    cout <<find_max_min_diff(head) << endl;
    return 0;
}
