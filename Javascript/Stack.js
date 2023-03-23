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

class Stack {
    constructor(){
        this.head = null;
    }

    push = (data) => {
        let temp = new Node(data, null)
        if (this.head === null){
            this.head = temp;
        } else {
            temp.link = this.head;
            this.head = temp;
        }
    }

    peek = () => {
        let temp = this.head;
        if (temp === null){
            console.log("Stack Empty!");
        }
        return temp.data;
    }

    pop = () => {
        let temp = this.head;
        if (temp === null){
            console.log("Stack Empty!");
        }
        let data = temp.data;
        this.head = temp.link;
        return data;
    }

    isEmpty = () => {
        if (this.head === null){
            return true;
        } else {
            return false;
        }
    }

    size = () => {
        let temp = this.head;
        let counter = 0;
        while (temp != null){
            counter += 1;
            temp = temp.link;
        }
        return counter;
    }

    printList = () => {
        let temp = this.head;
        while (temp != null){
            console.log(temp.data);
            temp = temp.link;
        }
    }
}

let stack = new Stack();

console.log(stack.isEmpty());

stack.push(1);
stack.push(3);
stack.push(5);
stack.push(7);
stack.push(9);

console.log(stack.isEmpty());

stack.printList();
console.log(stack.size());

console.log(stack.peek());
console.log(stack.pop());
console.log(stack.peek());
stack.printList();
