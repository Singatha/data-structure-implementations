#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node *link;
};

struct Node *front = NULL;
struct Node *back = NULL;

void enqueue(int data);
int peek();
int dequeue();
bool isEmpty();
int size();
void printList();


int main(){
	printf("%d", isEmpty());
	
	enqueue(1);
	enqueue(3);
	enqueue(5);
	enqueue(7);
	enqueue(9);

	printf("%d", peek());
    printf("%d", dequeue());
	printf("%d", isEmpty());
	printList();

	return 0;
}

void enqueue(int data){
    struct Node *temp = malloc(sizeof(struct Node));
	if (front == NULL){
		temp->data = data;
		temp->link = NULL;
        back = temp;
		front = back;
	}
	else {
		temp->data = data;
		temp->link = back;
		back = temp;
	}
}

int peek(){
	if (front != NULL){
		return front->data;
	}
}

int dequeue(){
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
	struct Node *temp = front;
	int counter = 0;
	while(temp != NULL){
		temp = temp->link;
		counter++;
	}
	return counter;
}

void printList(){
	struct Node *temp = front;
	while(temp != NULL){
		printf("%d", temp->data);
		temp = temp->link;
	}
}
