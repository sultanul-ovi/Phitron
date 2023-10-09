let Node = function () {
    this.endWord = false; 
    this.children = {}; 
    };
    
    let Trie = function () {
        this.root = new Node();
    
        this.insert = function (input) {
        let node = this.root;
        for (let i = 0; i < input.length; i++) {
            if (!node.children.hasOwnProperty(input[i])) {
            let temp = new Node();
            node.children[input[i]] = temp; 
            node = temp;
            } else {
            node = node.children[input[i]];
            }
        }
        node.endWord = true;
        // console.log(this.root);
        };
    
        this.isExists = (word) => {
        let node = this.root;
        for (let i = 0; i < word.length; i++) {
            if (node.children.hasOwnProperty(word[i])) {
            node = node.children[word[i]];
            } else {
            return false;
            }
        }
        return node.endWord;
        };
    
        this.delete = (word) => {
        let node = this.root;
        for (let i = 0; i < word.length; i++) {
            if (node.children.hasOwnProperty(word[i])) {
            node = node.children[word[i]];
            } else {
            return false;
            }
        }
        node.endWord = false;
        return true;
        };
    
        this.printAllWords = () => {
        let words = [];
        let node = this.root;
    
        let search = function (node, str) {
            for (const entry of Object.entries(node.children)) {
            let char = entry[0];
            node = entry[1];
    
            if (node.endWord) {
                words.push(str.concat(char));
            }
            search(node, str.concat(char));
            }
        };
        search(node, "");
        return words;
        };
    };
    
var trie = new Trie();

trie.insert("cat");
trie.insert("car");
trie.insert("pick");
trie.insert("pickle");
trie.insert("dog");
trie.insert("do");

console.log(trie.printAllWords());

trie.delete("pickle");
trie.delete("car");


console.log(trie.printAllWords());