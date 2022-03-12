#include <iostream>
using namespace std;

int queue[10];
int front = -1;
int back = -1;

void enqueue(int val);
int dequeue();
int peek();
bool isEmpty();
void printList();

int main(){
	cout << "Hello There !" << endl;
	cout << isEmpty() << endl;
	
	enqueue(1);
	enqueue(3);
	enqueue(5);
	enqueue(7);
	enqueue(9);

	// cout << peek() << endl;
	// printList();
	cout << dequeue() << endl;
	//cout << peek() << endl;
	cout << isEmpty() << endl;
	cout << dequeue() << endl;
	cout << isEmpty() << endl;
	cout << dequeue() << endl;
	cout << dequeue() << endl;
	// cout << isEmpty() << endl;
	cout << dequeue() << endl;
	cout << isEmpty() << endl;
	return 0;
}

int dequeue(){
	if (front == -1 || back == -1){
		cout << "Queue Empty !" << endl;
	}
	int val = queue[front];
	front++;
	return val;
}

int peek(){
	if (front == -1){
		cout << "Queue Empty !" << endl;
	}
	return queue[front];
}

void enqueue(int val){
	if (back == 10){
		cout << "Queue Full !" << endl;
	}

	if (front == -1){
		front++;
		back++;
		queue[front] = val;	
	}
	else {
		back++;
		queue[back] = val;
	}
}

bool isEmpty(){
	if (front == -1){
		return true;
	}
	else if (front == back){
		false;
	}
	else {
		return false;
	}
}

void printList(){
	for(int i = 0; i < 10; i++){
		cout << queue[i] << endl;
	}
}
