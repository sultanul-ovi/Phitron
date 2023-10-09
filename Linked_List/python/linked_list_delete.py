# Python Implementation
# Linked list Delete


# Create a node
class Node:
    def __init__(self, item):
        self.item = item
        self.next = None


class LinkedList:

    def __init__(self):
        self.head = None

    # Insert
    def insert(self, data):
        new_node = Node(data)
        if self.head is None:
            self.head = new_node
            return
        last = self.head
        while (last.next):
            last = last.next
        last.next = new_node



    # Delete
    def deleteNode(self, position):
        if self.head == None:
            return
        temp_node = self.head
        if position == 0:
            self.head = temp_node.next
            temp_node = None
            return
        for i in range(position - 1):
            temp_node = temp_node.next
            if temp_node is None:
                break
        if temp_node is None:
            return
        if temp_node.next is None:
            return
        next = temp_node.next.next
        temp_node.next = None
        temp_node.next = next

    def printList(self):
        temp_node = self.head
        while (temp_node):
            print(str(temp_node.item) + " ", end="")
            temp_node = temp_node.next


if __name__ == '__main__':
    
    llist = LinkedList()
    
    print('Linked list:')
    llist.printList()
    
    
    llist.insert(5)
    llist.insert(2)
    llist.insert(3)
    llist.insert(6)
    llist.insert(7)
    llist.insert(1)
    llist.insert(9)
    llist.insert(10)

    print('Linked list after inserting few elements:')
    llist.printList()

    print("\nLinked list After deleting few elements:")
    llist.deleteNode(1)
    llist.deleteNode(4)
    llist.deleteNode(5)
    llist.deleteNode(6)
    
    
    llist.printList()