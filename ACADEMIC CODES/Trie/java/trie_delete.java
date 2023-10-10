public class trie_delete {

    final static int ALPHABET_SIZE = 26;
    final static int NON_VALUE = -1;

    class TrieNode
    {
        boolean isLeafNode;
        int value;
        TrieNode[] children;

        TrieNode(boolean isLeafNode, int value)
        {
            this.value = value;
            this.isLeafNode = isLeafNode;
            children = new TrieNode[ALPHABET_SIZE];
        }

        public void markAsLeaf(int value)
        {
            this.isLeafNode = true;
            this.value = value;
        }

        public void unMarkAsLeaf()
        {
            this.isLeafNode = false;
            this.value = NON_VALUE;
        }
    }

    TrieNode root;
    trie_delete()
    {
        this.root = new TrieNode(false, NON_VALUE);
    }

    private int getIndex(char ch)
    {
        return ch - 'a';
    }

    public int search(String key)
    {
        if (key == null)
        {
            return NON_VALUE;
        }
        TrieNode currentNode = this.root;
        int charIndex = 0;
        while ((currentNode != null) && (charIndex < key.length()))
        {
            int childIndex = getIndex(key.charAt(charIndex));
            if (childIndex < 0 || childIndex >= ALPHABET_SIZE)
            {
                return NON_VALUE;
            }
            currentNode = currentNode.children[childIndex];
            charIndex += 1;
        }
        if (currentNode != null)
        {
            return currentNode.value;
        }
        return NON_VALUE;
    }

    public void insert(String key, int value)
    {
        if (key == null) return;
        key = key.toLowerCase();
        TrieNode currentNode = this.root;
        int charIndex = 0;
        while (charIndex < key.length())
        {
            int childIndex = getIndex(key.charAt(charIndex));

            if (childIndex < 0 || childIndex >= ALPHABET_SIZE)
            {
                System.out.println("Invalid Key");
                return;
            }
            if (currentNode.children[childIndex] == null)
            {
                currentNode.children[childIndex] = new TrieNode(false, NON_VALUE);
            }

            currentNode = currentNode.children[childIndex];
            charIndex  += 1;
        }
        currentNode.markAsLeaf(value);
    }

    private boolean hasNoChildren(TrieNode currentNode)
    {
        for (int i = 0; i < currentNode.children.length; i++)
        {
            if ((currentNode.children[i]) != null)
                return false;
        }
        return true;
    }

    private boolean deleteHelper(String key, TrieNode currentNode, int length, int level)
    {
        boolean deletedSelf = false;
        if (currentNode == null)
        {
            System.out.println("Key does not exist");
            return deletedSelf;
        }
        if (level == length)
        {
            if (hasNoChildren(currentNode))
            {
                currentNode = null;
                deletedSelf = true;
            }
            else
            {
                currentNode.unMarkAsLeaf();
                deletedSelf = false;
            }
        }
        else
        {
            TrieNode childNode = currentNode.children[getIndex(key.charAt(level))];
            boolean childDeleted = deleteHelper(key, childNode, length, level + 1);

            if (childDeleted)
            {
                currentNode.children[getIndex(key.charAt(level))] = null;
                if (currentNode.isLeafNode)
                {
                    deletedSelf = false;
                }
                else if (!hasNoChildren(currentNode))
                {
                    deletedSelf = false;
                }
                else
                {
                    currentNode = null;
                    deletedSelf = true;
                }
            }
            else
            {
                deletedSelf = false;
            }
        }

        return deletedSelf;
    }

    public void delete(String key)
    {
        if ((root == null) || (key == null))
        {
            System.out.println("Null key or Empty trie error");
            return;
        }
        deleteHelper(key, root, key.length(), 0);
        return;
    }

    public static void main(String[] args)
    {
        trie_delete tr = new trie_delete();


        tr.insert("cat", 5);
        tr.insert("car", 8);
        tr.insert("pick", 9);
        tr.insert("pickle", 1);
        tr.insert("do", 3);
        tr.insert("dog", 4);

        tr.delete("car");

        String key1 = "car";
        int value = tr.search(key1);

        if (value != NON_VALUE)
        {
            System.out.println("Key-value pair retrieved");
            System.out.println("for key \"" + key1 + "\" value is " + value);
        }
        else
        {
            System.out.println("car deleted");
        }
    }
}