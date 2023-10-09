#include <bits/stdc++.h>
using namespace std;
const int ALPHABET_SIZE = 26;


struct TrieNode {
    struct TrieNode* children[ALPHABET_SIZE];
    bool isEndOfWord;
};
struct TrieNode* getNode(void)
{
    struct TrieNode* pNode = new TrieNode;
    pNode->isEndOfWord = false;
    for (int i = 0; i < ALPHABET_SIZE; i++)
        pNode->children[i] = NULL;
    return pNode;
}

void insert(struct TrieNode* root, string key)
{
    struct TrieNode* pCrawl = root;
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            pCrawl->children[index] = getNode();
        pCrawl = pCrawl->children[index];
    }
    pCrawl->isEndOfWord = true;
}


bool search(struct TrieNode* root, string key)
{
    struct TrieNode* pCrawl = root;
    for (int i = 0; i < key.length(); i++) {
        int index = key[i] - 'a';
        if (!pCrawl->children[index])
            return false;
        pCrawl = pCrawl->children[index];
    }
    return (pCrawl != NULL && pCrawl->isEndOfWord);
}

bool isEmpty(TrieNode* root)
{
    for (int i = 0; i < ALPHABET_SIZE; i++)
        if (root->children[i])
            return false;
    return true;
}

TrieNode* remove(TrieNode* root, string key, int depth = 0)
{
    if (!root)
        return NULL;
    if (depth == key.size()) {
        if (root->isEndOfWord)
            root->isEndOfWord = false;
        if (isEmpty(root)) {
            delete (root);
            root = NULL;
        }

        return root;
    }
    int index = key[depth] - 'a';
    root->children[index] = remove(root->children[index], key, depth + 1);
    if (isEmpty(root) && root->isEndOfWord == false) {
        delete (root);
        root = NULL;
    }
    return root;
}


int main()
{

    string keys[] = {"cat","car","pick","pickle","dog","do"};
    int n = sizeof(keys) / sizeof(keys[0]);

    struct TrieNode* root = getNode();

    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
    cout << "\n";
    search(root, "pickle")? cout << "pickle Present\n" :cout << "pickle Not present\n";
    search(root, "picke")? cout << "picke Present\n" :cout << "picke Not present\n";
    cout << "\n";
    remove(root, "pickle");

    search(root, "pickle")? cout << "pickle Present\n" :cout << "pickle Not present\n";
    search(root, "pick")? cout << "pick Present\n" :cout << "pick Not present\n";
    cout << "\n";
    return 0;
}