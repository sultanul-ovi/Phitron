class LinkedList_delete {
    Node head;
  
    class Node {
      int item;
      Node next;
  
      Node(int d) {
        item = d;
        next = null;
      }
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
  
    void deleteNode(int position) {
      if (head == null)
        return;
  
      Node node = head;
  
      if (position == 0) {
        head = node.next;
        return;
      }
      for (int i = 0; node != null && i < position - 1; i++)
        node = node.next;
  
      if (node == null || node.next == null)
        return;
  
      Node next = node.next.next;
      node.next = next;
    }
  
    public void printList() {
      Node node = head;
      while (node != null) {
        System.out.print(node.item + " ");
        node = node.next;
      }
    }
  
    public static void main(String[] args) {
      LinkedList_delete llist = new LinkedList_delete();
  
      llist.insertAtEnd(1);
      llist.insertAtEnd(4); 
      llist.insertAtEnd(2);
      llist.insertAtEnd(3);
      llist.insertAtEnd(6);
      llist.insertAtEnd(7);
      llist.insertAtEnd(9);
      llist.insertAtEnd(5);
      llist.insertAtEnd(11);
      llist.insertAtEnd(4);
      System.out.println("Linked list after inserting few elements:");
      llist.printList();
  
      System.out.println("\nLinked list After deleting few elements:");
      llist.deleteNode(1);
      llist.deleteNode(4);
      llist.deleteNode(5);
      llist.deleteNode(6);
      llist.printList();
    }
  }