public class Stack {

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

	public void push(int data){
		if (head == null){
			head = new Node(data, null);
		}
		else {
			Node temp = new Node(data, null);
			temp.setLink(head);
			head = temp;
		}
	}

	public int peek(){
		if (head != null){
			return head.data;
		}
	}

	public void pop(){
		head = head.link;
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

		Stack stack = new Stack();
		System.out.println(stack.isEmpty());

		stack.push(1);
		stack.push(3);
		stack.push(5);
		stack.push(7);
		stack.push(9);

		stack.printList();
		System.out.println(stack.isEmpty());	
		System.out.println(stack.peek());
		stack.pop();

		System.out.println("Hello World!");
	}
}
