
def index(inputCh):
    return ord(inputCh) - ord('a')


class Node(object):
    children = None
    def __init__(self):
        self.children = [None] * 26
        self.ch = ' '
        self.word = ""
        self.isLeaf = False
        self.parent = None


class Trie(object):
    root = None

    def __init__(self):
        self.root = Node()



    def insertString(self, in_string):
        current = self.root
        for c in in_string[:-1]:
            idx = index(c)
            try:
                if current.children[idx] is None:
                    current.children[idx] = Node()
                    current.children[idx].ch = c
                    current.children[idx].word = current.word + c
                    current.children[idx].parent = current
            except IndexError as ie:
                print("idx = {}\nchar = {}\nstring = {}".format(idx, c, in_string))
            current = current.children[idx]
        current.isLeaf = True



    def searchString(self, in_string):
        current = self.root
        for c in in_string:
            idx = index(c)
            if current.children[idx] is not None:
                current = current.children[idx]
            else:
                return False
        return current.isLeaf


    def deleteString(self, in_string):
        current = self.root
        if self.searchString(in_string):
            for c in in_string:
                idx = index(c)
                current = current.children[idx]
            current.isLeaf = False


keys = ["cat\n","car\n","pick\n","pickle\n","dog\n","do\n"]
new_trie = Trie()
for key in keys:
    new_trie.insertString(key)


print(new_trie.searchString("pickle"))
print(new_trie.searchString("picke"))


new_trie.deleteString('pickle')


print("\nAfter Deletion: \n")
print(new_trie.searchString('pick'))   
print(new_trie.searchString('pickle'))  

