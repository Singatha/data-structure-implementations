#include <iostream>
using namespace std;
int stack[10];
int top = -1;

void pop();
int peek();
void push(int val);
bool isEmpty();
void printList();

int main(){
	cout << "Hello There !";
	cout << isEmpty() << endl;
	
	push(1);
	push(3);
	push(5);
	push(7);
	push(9);

	cout << peek() << endl;
	printList();
	pop();
	cout << isEmpty() << endl;
	return 0;
}

void pop(){
	top--;
}

int peek(){
	return stack[top];
}

void push(int val){
	top++;
	stack[top] = val;
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
		cout << stack[i] << endl;
	}
}
