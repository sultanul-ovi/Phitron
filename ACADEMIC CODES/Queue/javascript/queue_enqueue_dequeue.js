//  JavaScript IMPLEMENTATION
//  QUEUE ENQUEUE AND DEQUEUE OPERATIONS

// Queue class
class Queue {
    constructor() {
        this.items = [];
    }
    
    enqueue(element) {
        return this.items.push(element);
    }
    
    dequeue() {
        if(this.items.length > 0) {
            return this.items.shift();
        }
    }
}

// queue initialization
let queue = new Queue();

console.log('\nInitial queue: ');
console.log(queue.items);

// To push an element into the queue, we can use enqueue() function

queue.enqueue('ovi');
queue.enqueue('oishee');
queue.enqueue('lami');

console.log('\nQueue After Pushing few elements:  ');
console.log(queue.items);

// To pop an element from the queue, we can use dequeue() fucntion
console.log('\nPopped Elements are:');
console.log(queue.dequeue());
console.log(queue.dequeue());
console.log(queue.dequeue());

console.log('\nQueue After Popping few elements: ');
console.log(queue.items);

