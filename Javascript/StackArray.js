class Stack {
    constructor(){
        this.arr = [];
    }

    push = (data) => {
        this.arr.push(data);
    }

    pop = () => {
        if (this.arr.length === 0){
            console.log("Stack Empty");
        }
        return this.arr.pop();
    }

    peek = () => {
        if (this.arr.length === 0){
            console.log("Stack Empty");
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

const stack = new Stack();
console.log(stack.isEmpty());
	
stack.push(1);
stack.push(3);
stack.push(5);
stack.push(7);
stack.push(9);

console.log(stack.peek());
stack.printList();
console.log(stack.pop());
console.log(stack.isEmpty());
