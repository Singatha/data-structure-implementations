public class Queue {

	Node front = null;
	Node rear = null;

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

	public void enqueue(int data){
		Node temp = new Node(data, null);
		if (front == null){
			front = temp;
			rear = temp;
		}
		else {
			rear.setLink(temp);
			rear = temp;
		}
	}

	public int peek(){
		if (front != null){
			return front.data;
		}
	}

	public void dequeue(){
		return front = front.link;
	}

	public int size(){
		Node temp = front;
		int counter = 0;
		while(temp != null){
			temp = temp.link;
			counter++;
		}
		return counter;
	}

	public void printList(){
		Node temp = front;
		while(temp.link != null){
			system.out.println(temp.data);
			temp = temp.link;
		}
	}

	public static void main(String [] args){
		System.out.println("Hello There!");

		Queue queue = new Queue();
		System.out.println(queue.isEmpty());

		queue.push(1);
		queue.push(3);
		queue.push(5);
		queue.push(7);
		queue.push(9);

		queue.printList();
		System.out.println(queue.isEmpty());	
		System.out.println(queue.peek());
		queue.pop();

		System.out.println("Hello World!");
	}
}
