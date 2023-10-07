class Node {
    constructor(data, leftNode, rightNode){
        this.data = data;
        this.left = leftNode;
        this.right = rightNode;
    }

    setLink = (node) => {
        this.link = node;
    }

    getLink = () => {
        return this.link;
    }
}

class BinarySearchTree {
    constructor(){
        this.root = null;
    }

    insert = (data) => {
        if (this.root === null){
            this.root = new Node(data, null, null);
        } else {
            insertNode(data, node)
        }
    }

    insertNode = (data, node) => {
        if (node === null){
            node = new Node(data, null);
        } else if (data < node.data){
            return this.insertNode(data, node.left);
        } else {
            return this.insertNode(data, node.right);
        }
    }

    // delete = () => {}
    // deleteNode = (data) => {}

    find = (data) => {
        if (this.root == null){
            console.log("Binary Search Tree Empty!");
            return false;
        } else {
            return this.findNode(data, this.root);
        }
    }

    findNode = (data, node) => {
        if (data === node.data){
            return true;
        } else if (data < node.data){
            return this.findNode(data, node.left);
        } else {
            return this.findNode(data, node.right);
        }
    }

    size = () => {
        if (this.root == null){
            return 0;
        } else {
            return this.sizeNode(this.root.left) + this.size(this.root.right) + 1;
        }
    }

    sizeNode = (node) => {
        if (node === null){
            return 0;
        } else {
            return this.sizeNode(this.root.left) + this.size(this.root.right) + 1
        }
    }    
}

const binarysearchtree = new BinarySearchTree();
