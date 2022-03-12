public class QueueArray {

	int [] queue;
	int top = -1;

	public void enqueue(int val){
		top++;
		queue[top] = val;
	}

	public int peek(){
		return queue[top];
	}

	public void dequeue(){
		top--;
	}

	public boolean isEmpty(){
		if (top != -1){
			return true;
		}
		else {
			return false;
		}
	}

	public void printList(){
		for (int x: queue){
			System.out.println(x);
		}
	}

	public static void main(String [] args){
		System.out.println("Hello World!");
		QueueArray queueArray = new QueueArray();
		System.out.println(queueArray.isEmpty());

		queueArray.push(1);
		queueArray.push(3);
		queueArray.push(5);
		queueArray.push(7);
		queueArray.push(9);

		queueArray.printList();
		System.out.println(queueArray.isEmpty());	
		System.out.println(queueArray.peek());
		queueArray.pop();

		System.out.println("Hello World!");
	}
}
