

class LinkedList_insert {
    Node head;

    // Create a node
    class Node {
        int item;
        Node next;

        Node(int d) {
        item = d;
        next = null;
        }
    }

    public void insertAtBeginning(int data) {
        Node new_node = new Node(data);
        new_node.next = head;
        head = new_node;
    }

    public void insertAfter(Node prev_node, int data) {
        if (prev_node == null) {
            System.out.println("The given previous node cannot be null");
            return;
        }
        Node new_node = new Node(data);
        new_node.next = prev_node.next;
        prev_node.next = new_node;
    }

    public void insertAtEnd(int data) {
        Node new_node = new Node(data);
        if (head == null) {
            head = new Node(data);
            return;
        }

        new_node.next = null;

        Node last = head;
        while (last.next != null)
            last = last.next;

        last.next = new_node;
        return;
    }

    public void printList() {
        Node node = head;
        while (node != null) {
            System.out.print(node.item + " ");
            node = node.next;
        }
    }

    public static void main(String[] args) {
        LinkedList_insert llist = new LinkedList_insert();
        
        llist.insertAtEnd(9);
        llist.insertAtBeginning(8);
        llist.insertAtBeginning(7);
        llist.insertAtEnd(4);
        llist.insertAfter(llist.head.next, 10);
        llist.insertAtEnd(1);
        llist.insertAtBeginning(2);
        llist.insertAtBeginning(3);
        llist.insertAtEnd(4);
        llist.insertAfter(llist.head.next, 5);

        System.out.println("Linked list: ");
        llist.printList();


    }
}