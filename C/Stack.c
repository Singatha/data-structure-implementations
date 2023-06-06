#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *head = NULL;

void push(int data);
int pop();
int peek();
bool isEmpty();
int size();
void printList();

int main(){
	printf("%d", isEmpty());
	push(1);
	push(3);
	push(5);
	push(7);
	push(9);

	printList();
	printf("%d\n", size());
	printf("%d\n", isEmpty());
	printf("%d\n", pop());
	printf("%d\n", isEmpty());

	printList();

    return 0;
}

void push(int data){
	struct Node *temp = malloc(sizeof(struct Node));
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

int peek (){
    struct Node *temp = head;
    if (temp != NULL){
        return temp->data;
    } else {
		printf("Stack Empty!");
	}
}

int pop(){
    if (head == NULL){
        printf("Stack Empty!");
    }
	int data = head->data;
    head = head->link;
	return data; 
}

bool isEmpty(){
	struct Node *temp = head;
	if (temp == NULL){
        return true;
    }
    return false;
}

int size(){
	struct Node *temp = head;
	int counter = 0;
	while(temp != NULL){
		temp = temp->link;
		counter++;
	}
	return counter;
}

void printList(){
	struct Node *temp = head;
	while(temp != NULL){
		printf("%d\n", temp->data);
		temp = temp->link;
	}
}
