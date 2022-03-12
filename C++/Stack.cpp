#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* link;
};

Node *head = NULL;
int top = -1;

void push(int data);
int peek();
int pop();
bool isEmpty();
int size();
void printList();

int main(){
	cout << "Hello There !" << endl;
	cout << isEmpty() << endl;
	
	push(1);
	push(3);
	push(5);
	push(7);
	push(9);

	cout << peek() << endl;
	printList();
	cout << pop() << endl;
	cout << isEmpty() << endl;
	printList();
	return 0;
}

void push(int data){
	Node *temp = new Node();
	top++;
	if (head == NULL){
		temp->data = data;
		temp->link = NULL;
		head = temp;
	}
	else {
		temp->data = data;
		temp->link = head;
		head = temp;
	}
}

int peek(){
	if (top == -1){
		cout << "Stack Empty !" << endl;
	}
	if (head != NULL){
		return head->data;
	}
}

int pop(){
	if (top == -1){
		cout << "Stack Empty !" << endl;
	}
	int val = head->data;
	head = head->link;
	return val;
}

bool isEmpty(){
	if (head != NULL){
		return true;
	}
	else {
		return false;
	}
}

int size(){
	Node *temp = head;
	int counter = 0;
	while(temp->link != NULL){
		temp = temp->link;
		counter++;
	}
	counter++;
	return counter;
}

void printList(){
	Node *temp = head;
	while(temp->link != NULL){
		cout << temp->data << endl;
		temp = temp->link;
	}
	cout << temp->data << endl;
}
