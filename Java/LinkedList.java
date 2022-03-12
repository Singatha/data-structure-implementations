public class LinkedList {

	Node head = null;

	public class Node {
		int data
		Node link;

		Node(val, node){
			data = val;
			link = node;
		}

		public void setLink(nodeLink){
			link = nodeLink;
		}

		public Node getLink(){
			return link;
		}
	}

	public void add(int data){
		if (head == null){
			head = new Node(data, null);
		}
		else {
			Node temp = new Node(data, null);
			temp.setLink(head);
			head = temp;
		}
	}

	public void deleteNode(int data){
		Node temp = head;
		Node prevNode = null;
		while(temp != null){
			if (temp.data == data){
				prevNode.setLink(temp.link);
			}
			prevNode = temp;
			temp = temp.link;
		}
	}

	public boolean search(int data){
		Node temp = head;
		boolean flag = false;
		while(temp != null){
			if (temp.data == data){
				flag = true;
			}
			temp = temp.link;
		}
		return flag;
	}

	public int size(){
		Node temp = head;
		int counter = 0;
		while(temp != null){
			temp = temp.link;
			counter++;
		}
		return counter;
	}

	public void printList(){
		Node temp = head;
		while(temp.link != null){
			system.out.println(temp.data);
			temp = temp.link;
		}
	}

	public static void main(String [] args){
		System.out.println("Hello There!");

		LinkedList linkedlist = new LinkedList();
		System.out.println(linkedlist.isEmpty());

		linkedlist.push(1);
		linkedlist.push(3);
		linkedlist.push(5);
		linkedlist.push(7);
		linkedlist.push(9);

		linkedlist.printList();
		System.out.println(linkedlist.isEmpty());	
		System.out.println(linkedlist.peek());
		linkedlist.pop();

		System.out.println("Hello World!");
	}
}
