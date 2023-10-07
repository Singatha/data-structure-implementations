public class BinarySearchTree {
    public class Node {
        int data;
        Node left;
        Node right;

        public Node(data, leftNode, rightNode){
            data = data;
            left = leftNode;
            right = rightNode;
        }
    }

    Node root;

    public BinarySearchTree(){
        root = null;
    }

    public void insert(int data){
        if (node != null){
            root = new Node(data, null, null);

        } else {
            insert(data, root);
        }
    }

    public Node insert(int data, Node node){
        if (node == null){
            node = Node(data, null, null);
        else if (data < node.data){
            return insert(data, node.left);
        } else {
            return insert(data, node.right);
        }
    }

    public bool search(int data){
        if (root == null) {
            System.out.println("Stack Empty");
            return false;
        } else {
            return search(data, root);
        }
    }

    public bool search(int data, Node node){
        if (node.data == data){
            return true;
        } else if (data < node.data){
            return search(data, node.left);
        } else {
            return search(data, node.right);
        }
    }
    
    // public void delete(){}
    // public void deleteNode(){}

    public int size()
    {
        if (root == null){
            return 0;
        } else {
            return size(root.left) + size(root.right) + 1;
        }
    }

    public int size(Node Node){
        if (node == null){
            return 0;
        } else {
            return size(root.left) + size(root.right) + 1;
        }
    }


    public void preOrder(Node node){
        if (node != null){
            Console.WriteLine(node.data);
            preOrder(node.left);
            preOrder(node.right);
        }
    }

    public void postOrder(Node Node){
        if (node != null){
            postOrder(node.left);
            postOrder(node.right);
            Console.WriteLine(node.data);
        }
    }

    public void inOrder(Node node){
        if (node != null){
            inOrder(node.left);
            System.out.println(node.data);
            inOrder(node.right);
        }
    }

    public static void main(string [] args) {
        BinarySearchTree binarysearchtree = new BinarySearchTree();
    }
}
