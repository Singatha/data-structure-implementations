#include <stdio.h>
#include <stdbool.h>

int stack[10];
int top = -1;

void pop();
int peek();
void push(int data);
bool isEmpty();
void printList();

int main(){
	printf("%d\n", isEmpty());
	
	push(1);
	push(3);
	push(5);
	push(7);
	push(9);

	printf("%d\n", peek());
	printList();
	pop();
	printf("%d\n", isEmpty());

	return 0;
}

void pop(){
	top--;
}

int peek(){
	return stack[top];
}

void push(int data){
	top++;
	stack[top] = data;
}

bool isEmpty(){
	if (top != -1){
		return true;
	}
	else {
		return false;
	}
}

void printList(){
	for(int i = 0; i < 10; i++){
		printf("%d\n", stack[i]);
	}
}
