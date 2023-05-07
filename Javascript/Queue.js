class Node {
    constructor(data, node){
        this.data = data;
        this.link = node;
    }

    setLink = (node) => {
        this.link = node;
    }

    getLink = () => {
        return this.link;
    }
}

class Queue {
    constructor(){
        this.front = null;
        this.back = null;
    }

    enqueue = (data) => {
        let temp = new Node(data, null)
        if (this.front === null){
            this.back = temp;
            this.front = this.back;
        } else {
            temp.link = this.back;
            this.back = temp;
        }
    }

    peek = () => {
        let temp = this.front;
        if (temp === null){
            console.log("Queue Empty!");
        }
        return temp.data;
    }

    dequeue = () => {
        if (this.front === null){
            console.log("Queue Empty!");
        }
        let data = this.front.data;
        this.front = this.front.link;
        return data;
    }

    isEmpty = () => {
        if (this.front === null){
            return true;
        } else {
            return false;
        }
    }

    size = () => {
        let temp = this.front;
        let counter = 0;
        while (temp != null){
            counter += 1;
            temp = temp.link;
        }
        return counter;
    }

    printList = () => {
        let temp = this.front;
        while (temp != null){
            console.log(temp.data);
            temp = temp.link;
        }
    }
}

let queue = new Queue();

console.log(queue.isEmpty());

queue.enqueue(1);
queue.enqueue(3);
queue.enqueue(5);
queue.enqueue(7);
queue.enqueue(9);

console.log(queue.isEmpty());

queue.printList();
console.log(queue.size());

console.log(queue.peek());
console.log(queue.dequeue());
console.log(queue.peek());
queue.printList();
