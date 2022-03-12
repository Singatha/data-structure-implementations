public class StackArray {

	int [] stack;
	int top = -1;

	public void push(int val){
		top++;
		stack[top] = val;
	}

	public int peek(){
		return stack[top];
	}

	public void pop(){
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
		for (int x: stack){
			System.out.println(x);
		}
	}

	public static void main(String [] args){
		StackArray stackArray = new StackArray();
		System.out.println(stackArray.isEmpty());

		stackArray.push(1);
		stackArray.push(3);
		stackArray.push(5);
		stackArray.push(7);
		stackArray.push(9);

		stackArray.printList();
		System.out.println(stackArray.isEmpty());	
		System.out.println(stackArray.peek());
		stackArray.pop();

		System.out.println("Hello World!");
	}
}
