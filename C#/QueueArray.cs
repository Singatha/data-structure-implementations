using System;

public class QueueArray
{
    int[] queue;
    int front = -1;
    int back = -1;

    public int peek()
    {
        if (front == -1 && back == -1)
        {
            Console.WriteLine("Queue Empty");
        }
        return queue[front];
    }

    public void enqueue(int data)
    {
        if (front == -1 && back == -1)
        {
            front++;
            back++;
            queue[back] = data;
        }
        else {
            back++;
            queue[back] = data;
        }
    }

    public int dequeue()
    {
        if (front == -1 && back == -1)
        {
            Console.WriteLine("Queue Empty");
        }
        int ptr = front;
        front++;
        return queue[ptr];
    }

    public bool isEmpty()
    {
        if (front == -1 && back == -1) { return true; }
        return false;
    }

    public int size()
    {
        return queue.Length;
    }

    public void printList()
    {
        for (int i = 0; i < queue.Length; i++)
        {
            Console.WriteLine(queue[i]);
        }
    }

    public static void Main(string[] args)
    {
        QueueArray queue = new QueueArray();

        Console.WriteLine(queue.isEmpty());
        queue.push(1);
        queue.push(3);
        queue.push(5);
        queue.push(7);
        queue.push(9);
        Console.WriteLine(queue.isEmpty());
        queue.printList();
        queue.pop();
        queue.printList();
    }
}