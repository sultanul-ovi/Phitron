//  Java IMPLEMENTATION
//  QUEUE ENQUEUE AND DEQUEUE OPERATIONS

public class queue_enqueue_dequeue {
    int SIZE = 5;
    int items[] = new int[SIZE];
    int front, rear;

    queue_enqueue_dequeue() {
        front = -1;
        rear = -1;
    }

    boolean isFull() {
        if (front == 0 && rear == SIZE - 1) {
        return true;
        }
    return false;
    }

    boolean isEmpty() {
        if (front == -1)
            return true;
        else
            return false;
    }

    void enQueue(int element) {
        if (isFull()) {
            System.out.println("Queue is full");
        } 
        else {
            if (front == -1)
                front = 0;
            rear++;
            items[rear] = element;
            System.out.println(element);
        }
    }

    int deQueue() {
        int element;
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return (-1);
        } 
        else {
            element = items[front];
            if (front >= rear) {
            front = -1;
            rear = -1;
        }
        else {
            front++;
        }
        System.out.println(element);
        return (element);
        }
    }

    void display() {
        int i;
        if (isEmpty()) {
            System.out.println("Empty Queue");
        } 
        else {
            System.out.println("Items -> ");
            for (i = front; i <= rear; i++)
                System.out.print(items[i] + "  ");

        }
    }

    public static void main(String[] args) {
        queue_enqueue_dequeue q = new queue_enqueue_dequeue();

        System.out.println("\nInitial queue:");
        q.display();

        System.out.println("\nQueue After enqueuing few elements: ");
        q.enQueue(1);
        q.enQueue(2);
        q.enQueue(3);

        System.out.println("\nDequeued Elements are:");
        q.deQueue();
        q.deQueue();
        q.deQueue();

        System.out.println("\nQueue After Dequeuing few elements: ");
        q.display();
    }
}