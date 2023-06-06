#include <stdio.h>
#include <stdbool.h>

int queue[10];
int front = -1;
int back = -1;

void enqueue(int val);
int dequeue();
int peek();
bool isEmpty();
void printList();

int main(){
	printf("%d\n", isEmpty());
	
	enqueue(1);
	enqueue(3);
	enqueue(5);
	enqueue(7);
	enqueue(9);

	printf("%d\n", dequeue());

	printf("%d\n", isEmpty());
	printf("%d\n", dequeue());
	printf("%d\n", isEmpty());
	printf("%d\n", dequeue());
	printf("%d\n", dequeue());

	printf("%d\n", dequeue());
	printf("%d\n", isEmpty());

	return 0;
}

int dequeue(){
	if (front == -1 || back == -1){
		printf("Queue Empty !");
	}
	int val = queue[front];
	front++;
	return val;
}

int peek(){
	if (front == -1){
		printf("Queue Empty !");
	}
	return queue[front];
}

void enqueue(int val){
	if (back == 10){
		printf("Queue Full !");
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
		printf("%d\n", queue[i]);
	}
}
