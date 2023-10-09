class Node {
    constructor(element) {
        this.element = element;
        this.next = null
    }
}

class LinkedList {
    constructor() {
        this.head = null;
        this.size = 0;
    }


    add(element) {

        var node = new Node(element);
        var current;
        if (this.head == null)
            this.head = node;
        else {
            current = this.head;
            while (current.next) {
                current = current.next;
            }
            current.next = node;
        }
        this.size++;
    }

    

    removeFrom(index) {
        if (index < 0 || index >= this.size)
            return console.log("Please Enter a valid index");
        else {
            var curr, prev, it = 0;
            curr = this.head;
            prev = curr;
            if (index === 0) {
                this.head = curr.next;
            } else {
                while (it < index) {
                    it++;
                    prev = curr;
                    curr = curr.next;
                }
                prev.next = curr.next;
            }
            this.size--;
            return curr.element;
        }
    }

    indexOf(element) {
        var count = 0;
        var current = this.head;

        while (current != null) {
            if (current.element === element)
                return count;
            count++;
            current = current.next;
        }
        return -1;
    }

    isEmpty() {
        return this.size == 0;
    }

    size_of_list() {
        console.log(this.size);
    }


    printList() {
        var curr = this.head;
        var str = "";
        while (curr) {
            str += curr.element + " ";
            curr = curr.next;
        }
        console.log(str);
    }

}

var ll = new LinkedList();

console.log(ll.isEmpty());

ll.add(10);

ll.printList();

console.log(ll.size_of_list());

ll.add(2);
ll.add(3);
ll.add(4);
ll.add(5);
ll.add(1);
ll.add(9);
ll.add(8);
ll.add(7);
ll.add(66);
ll.add(55);
ll.add(11);
ll.add(51);

console.log('Linked list after inserting few elements:');
ll.printList();

ll.removeFrom(2);
ll.removeFrom(3);
ll.removeFrom(4);
ll.removeFrom(5);

console.log("\nLinked list After deleting few elements:");
ll.printList();