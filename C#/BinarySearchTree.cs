using System;

public class Node
{
    Node link;
    int data;
    public Node(node, data)
    {
        link = Node;
        data = data;
    }
}

public class BinarySearchTree
{
    Node root;
    Node left;
    Node right;

    public BinarySearchTree()
    {
        root, left, right = null;
    }

    public void insert(int data){
        if (node != null){
            root = node;

        } else {
            insert(data, root);
        }
    }

    public Node insert(int data, Node node)
    {
        if (node == null){
            node = Node(data);
        else if (data < node.data){
            return insert(data, node.left);
        } else {
            return insert(data, node.right);
        }
    }

    public bool search(int data)
    {
        if (root == null) {
            Console.WriteLine("Stack Empty");
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
            Console.WriteLine(node.data);
            inOrder(node.right);
        }
    }

    public static void Main(string [] args) {
        BinarySearchTree binarysearchtree = new BinarySearchTree();
    }
}
