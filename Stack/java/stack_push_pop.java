//  Java IMPLEMENTATION
//  STACK PUSH AND POP OPERATIONS

class Stack {
    private int arr[];
    private int top;
    private int capacity;

    // Stack Creation
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    // Push operation
    public void push(int x) {
        if (isFull()) {
            System.out.println("\nOverFlow\n");
            System.exit(1);
        }

    System.out.println(x);
    arr[++top] = x;
    }

    // Pop operation
    public int pop() {
        if (isEmpty()) {
            System.out.println("\nStack is Empty");
            System.exit(1);
        }
    System.out.println( arr[top]);
    return arr[top--];
    }

    public int size() {
        return top + 1;
    }

    public Boolean isEmpty() {
        return top == -1;
    }

    public Boolean isFull() {
        return top == capacity - 1;
    }

    public void printStack() {
        if(top == -1){
            System.out.println("[]");
        }

        for (int i = top ; i >= 0; i--) {
        System.out.println(arr[i]);
        }
    }

    public static void main(String[] args) {
        Stack stack = new Stack(5);

        System.out.println("\nInitial stack:");
        stack.printStack();

        System.out.println("\nStack After Pushing few elements: ");
        stack.push(1);
        stack.push(2);
        stack.push(3);

        System.out.println("\nPopped Elements are:");
        stack.pop();
        stack.pop();
        stack.pop();
        

        System.out.println("\nStack After Popping few elements: ");

        stack.printStack();
    }
}