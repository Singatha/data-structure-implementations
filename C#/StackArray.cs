using System;

public class StackArray
{
	int [] stack;
	int top = -1;

	public int peek() {
		if (top == -1) {
			Console.WriteLine("Stack Empty");
		}
		return stack[top];
	}

	public int pop() {
		if (top == -1) {
			Console.WriteLine("Stack Empty");
		}
		int index = top;
		top--;
		return stack[index];
	}

	public void push(int data) { 
		top++;
		stack[top] = data;
	}

	public bool isEmpty() {
		if (top == -1) { return true; }
		return false;
	}

	public int size() {
		return stack.Length;
	}

	public void printList() { 
		for (int i = 0; i < stack.Length;  i++) {
			Console.WriteLine(stack[i]);
		}
	}

	public static void Main(string[] args) {
		StackArray stack = new StackArray();

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
