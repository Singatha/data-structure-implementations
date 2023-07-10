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

public class Stack
{
    Node root;

    public Stack()
    {
        root = null;
    }

    public void push(int data)
    {
        if (root == null)
        {
            root = new Node(null, data);
        }
        else
        {
            Node temp = new Node(root, data);
            root = temp;
        }
    }

    public int pop()
    {
        if (root == null) {
            Console.WriteLine("Stack Empty");
        }
        return root.data;
    }

    public int peek() {
        if (root == null) { Console.WriteLine("Stack Empty"); }
        return root.data;
    }

    public bool isEmpty() { 
        if(root == null) { return true; }
        return false;
    }
    
    public int size()
    {
        Node temp = root;
        int counter = 0;
        while (temp != null)
        {
            counter++;
            temp = temp.link;
        }
        return counter;
    }

    public void printList()
    {
        Node temp = root;
        while (temp != null)
        {
            Console.WriteLine(temp.data);
            temp = temp.link;
        }
    }

    public static void Main(string [] args) {
        Stack stack = new Stack();

        Console.WriteLine(stack.isEmpty());
        stack.push(1);
        stack.push(3);
        stack.push(5);
        stack.push(7);
        stack.push(9);
        Console.WriteLine(stack.isEmpty());
        stack.printList();
        stack.pop();
        stack.printList();
    }
}

