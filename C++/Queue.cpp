#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* link;
};

Node *front = NULL;
Node *rear = NULL;

void enqueue(int data);
int peek();
int dequeue();
bool isEmpty();
int size();
void printList();


int main(){
	cout << "Hello There !" << endl;
	cout << isEmpty() << endl;
	
	enqueue(1);
	enqueue(3);
	enqueue(5);
	enqueue(7);
	enqueue(9);

	cout << peek() << endl;
	printList();
	cout << dequeue() << endl;
	out << isEmpty() << endl;
	return 0;
}

void enqueue(int data){
	Node *temp = new Node();
	if (front == NULL){
		temp->data = data;
		temp->link = NULL;
		rear = temp;
		front = temp;
	}
	else {
		temp->data = data;
		rear->link = temp;
		rear = temp;
	}
}

int peek(){
	if (front != NULL){
		return front->data;
	} else {
		cout << "Queue Empty" << endl;
	}
}

int dequeue(){
	if (front == NULL){
		cout << "Queue Empty" << endl;
	}
	int val = front->data;
	front = front->link;
	return val;
}

bool isEmpty(){
	if (front == NULL){
		return true;
	}
	else {
		return false;
	}
}

int size(){
	Node *temp = front;
	int counter = 0;
	while(temp != NULL){
		temp = temp->link;
		counter++;
	}
	return counter;
}

void printList(){
	Node *temp = front;
	while(temp != NULL){
		cout << temp->data << endl;
		temp = temp->link;
	}
}
