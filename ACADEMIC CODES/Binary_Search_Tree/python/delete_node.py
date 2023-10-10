# Python implementation
# Delete Operation


# Visual Representation of the binary search tree
#                10
#           /          \
#         5              17
#      /    \           /   \
#     2      7        14     22
#    / \    / \      / \     / \
#   1   4  6   9   11   16 22   27


# Node class
class Node:
    def __init__(self, key):
        self.val = key
        self.left = None
        self.right = None


# To print in inoder method
def inorder_traverse(root):
    if root:
        inorder_traverse(root.left)
        print(root.val)
        inorder_traverse(root.right)


# Insert Operation
def insert_item(root, key):
    if root is None:
        return Node(key)
    else:
        if root.val == key:
            return root
        elif root.val < key:
            root.right = insert_item(root.right, key)
        else:
            root.left = insert_item(root.left, key)
    return root


# Finding inorder successor
def minValueNode(node):
    current = node
    while(current.left is not None):
        current = current.left
    return current


# Deleting a node
def deleteNode(root, key):

    if root is None:
        return root

    if key < root.val:
        root.left = deleteNode(root.left, key)
    elif(key > root.val):
        root.right = deleteNode(root.right, key)
    else:
        if root.left is None:
            temp = root.right
            root = None
            return temp

        elif root.right is None:
            temp = root.left
            root = None
            return temp

        temp = minValueNode(root.right)
        root.key = temp.key
        root.right = deleteNode(root.right, temp.key)

    return root


# Inserting Elements
item = Node(10)

item = insert_item(item, 2)
item = insert_item(item, 1)

item = insert_item(item, 4)
item = insert_item(item, 9)

item = insert_item(item, 7)
item = insert_item(item, 6)

item = insert_item(item, 5)
item = insert_item(item, 11)

item = insert_item(item, 14)
item = insert_item(item, 19)

item = insert_item(item, 17)
item = insert_item(item, 16)

item = insert_item(item, 27)
item = insert_item(item, 22)



inorder_traverse(item)

print("\nDelete 6")
root = deleteNode(item, 6)

print("\nDelete 6")
root = deleteNode(item, 6)
inorder_traverse(item)


print("\nDelete 7")
root = deleteNode(item, 7)
inorder_traverse(item)

print("\nDelete 14")
root = deleteNode(item, 14)
inorder_traverse(item)