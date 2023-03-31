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

class LinkedList {
    constructor(){
        this.head = null;
    }

    addNode = (data) => {
        let temp = new Node(data, null)
        if (this.head === null){
            this.head = temp;
        } else {
            temp.link = this.head;
            this.head = temp;
        }
    }

    deleteNode = (data) => {
        let temp = this.head;
        let prevNode = null;
        while (temp != null){
            if (temp.data === data){
                prevNode.link = temp.link;
                break;
            }
            prevNode = temp;
            temp = temp.link;
        }
    }

    findNode = (data) => {
        let temp = this.head;
        let flag = false;
        while (temp != null){
            if (temp.data === data){
                flag = true;
            }
            temp = temp.link;
        }
        return flag;
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

const linkedList = new LinkedList();


linkedList.addNode(1)
linkedList.addNode(3)
linkedList.addNode(5)
linkedList.addNode(7)
linkedList.addNode(9)

linkedList.printList()
console.log(linkedList.size())

console.log(linkedList.findNode(5))
linkedList.deleteNode(5)
console.log(linkedList.findNode(5))
linkedList.printList()
