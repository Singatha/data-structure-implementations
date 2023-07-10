using System;

public class Node {
	Node link;
    int data;
	public Node(node, data) {
		link = Node;
		data = data;
	}
}

public class LinkedList
{
	Node root;

	public LinkedList() {
		root = null;	
	}

	public void insertNode(int data) {
		if (root == null)
		{
			root = new Node(null, data);
		}
		else {
			Node temp = new Node(root, data);
			root = temp;
		}
	}

	public void removeNode(int data) {
		Node temp = root;
		Node prevNode = null;
		while (temp != null)
		{
			if (temp.data == data) {
				prevNode.link = temp.link;
			}
			prevNode = temp;
			temp = temp.link;
		}
	}

	public bool findNode() {
        Node temp = root;
		bool found = false;
        while (temp != null)
        {
            if (temp.data == data)
            {
				found = true;
            }
            temp = temp.link;
        }
		return found;
    }
	
	public int size() {
		Node temp = root;
		int counter = 0;
		while (temp != null)
		{
			counter++;
			temp = temp.link;
		}
		return counter;
	}

	public void printList() {
        Node temp = root;
        while (temp != null)
        {
			Console.WriteLine(temp.data);
            temp = temp.link;
        }
    }

	public static void Main(string[] args) {
        LinkedList linkedlist = new LinkedList();

        Console.WriteLine(linkedlist.isEmpty());
        linkedlist.insertNode(1);
        linkedlist.insertNode(3);
        linkedlist.insertNode(5);
        linkedlist.insertNode(7);
        linkedlist.insertNode(9);

        Console.WriteLine(linkedlist.isEmpty());
        linkedlist.printList();
		linkedlist.findNode(5);
        linkedlist.removeNode(5);

        linkedlist.printList();
    }
}
