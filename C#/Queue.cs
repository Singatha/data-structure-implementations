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

public class Queue
{
    Node front;
    Node back;

    public Queue()
    {
        front = null;
        back = null;
    }

    public void enqueue(int data)
    {
        if (back == null && front == null)
        {
            back = new Node(null, data);
            front = back;
        }
        else
        {
            Node temp = new Node(back, data);
            back = temp;
        }
    }

    public int dequeue()
    {
        if (front == null)
        {
            Console.WriteLine("Queue Empty");
        }
        return front.data;
    }

    public int peek()
    {
        if (front == null) { Console.WriteLine("Queue Empty"); }
        return front.data;
    }

    public bool isEmpty()
    {
        if (back == null && front == null) { return true; }
        return false;
    }

    public int size()
    {
        Node temp = back;
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
        Node temp = back;
        while (temp != null)
        {
            Console.WriteLine(temp.data);
            temp = temp.link;
        }
    }

    public static void Main(string[] args)
    {
        Queue queue = new Queue();

        Console.WriteLine(queue.isEmpty());
        queue.enqueue(1);
        queue.enqueue(3);
        queue.enqueue(5);
        queue.enqueue(7);
        queue.enqueue(9);
        Console.WriteLine(queue.isEmpty());
        queue.printList();
        queue.pop();
        queue.printList();
    }
}