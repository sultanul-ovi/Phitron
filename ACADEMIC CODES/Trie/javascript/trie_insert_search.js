
function TrieNode(key) {

    this.key = key;
    this.parent = null;
    this.children = {};
    this.end = false;
}

function Trie() {
    this.root = new TrieNode(null);
}

Trie.prototype.insert = function(word) {
    var node = this.root;
    for(var i = 0; i < word.length; i++) {
        if (!node.children[word[i]]) {
            node.children[word[i]] = new TrieNode(word[i]);
            node.children[word[i]].parent = node;
        }

        node = node.children[word[i]];
        if (i == word.length-1) {
            node.end = true;
        }
    }
};

Trie.prototype.contains = function(word) {
    var node = this.root;

    for(var i = 0; i < word.length; i++) {
        if (node.children[word[i]]) {
            node = node.children[word[i]];
        } else {
            return false;
        }
    }
    return node.end;
};





var trie = new Trie();

trie.insert("cat");
trie.insert("car");
trie.insert("pick");
trie.insert("pickle");
trie.insert("dog");
trie.insert("do");

console.log(trie.contains("car"));  // true
console.log(trie.contains("picke")); // false

