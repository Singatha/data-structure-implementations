class Queue {
    constructor(){
        this.arr = [];
    }

    enqueue = (data) => {
        this.arr.unshift(data);
    }

    dequeue = () => {
        if (this.arr.length === 0){
            console.log("Queue Empty");
        }
        return this.arr.pop();
    }

    peek = () => {
        if (this.arr.length === 0){
            console.log("Queue Empty");
        }
        return this.arr[this.arr.length-1];
    }

    isEmpty = () => {
        if (this.arr.length === 0){
            return true;
        }
        return false;
    }

    size = () => {
        return this.arr.length;
    }

    printList = () => {
        this.arr.forEach((item) => {
            console.log(item);
        });
    }
}

const queue = new Queue();
console.log(queue.isEmpty());
	
queue.enqueue(1);
queue.enqueue(3);
queue.enqueue(5);
queue.enqueue(7);
queue.enqueue(9);

console.log(queue.dequeue());
console.log(queue.peek());
console.log(queue.isEmpty());
