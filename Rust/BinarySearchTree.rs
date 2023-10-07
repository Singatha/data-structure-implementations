struct Node {
    data: i32,
    left: Node,
    right: Node
}

let mut root: Node;

fn insert(data: i32){
    if root == Node{} {
        root = Node{data, Node{}, Node{}};
    } else {
        return insertNode(data, root);
    }
}

fn insertNode(data: i32, node: Node){
    if node == Node{} {
        root = Node{data, Node{}, Node{}};
    } else if data < node.data {
        return insertNode(data, node.left);
    } else {
        return insertNode(data, node.right);
    }  
}

// fn delete_node(data: i32){}
// fn deleteNode(data: i32, node: Node){}

fn search(data: i32) -> bool {
    if root == Node{}{
        println!("Binary Search Tree Empty !");
        return false;
    } else {
        return searchNode(data, node);
    }
}

fn searchNode(data: i32, node: Node) -> bool {
    if data ==  node.data {
        return true;
    } else if data < node.data {
        return searchNode(data, node.left);
    } else {
        return searchNode(data, node.right)
    }
}

fn size() -> i32 {
    if root == nil {
        return 0;
    } else {
        return sizeNode(root.left) + sizeNode(root.right) + 1;
    }
}

fn sizeNode(node: Node) -> i32 {
    if node == nil {
        return 0;
    } else {
        return sizeNode(node.left) + sizeNode(node.right) + 1;
    }
}

fn preOrder(node: Node){
    if node != Node{} {
        println!(node.data);
        preOrder(node.left);
        preOrder(node.right);
    }
}

fn postOrder(node: Node){
    if node != Node{} {
        println!(node.data);
        postOrder(node.left);
        postOrder(node.right);
    }
}

fn inOrder(node: Node){
    if node != Node{} {
        println!(node.data);
        inOrder(node.left);
        inOrder(node.right);
    }
}

fn main(){
}
