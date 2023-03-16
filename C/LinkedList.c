#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *link;
};

struct Node *head = NULL;

void addNode(int data);
void deleteNode(int data);
bool searchNode(int data);
int size();
void printList();

int main(){
    printf("Hello There !");
	
	addNode(1);
	addNode(3);
	addNode(5);
	addNode(7);
	addNode(9);

	printList();
	printf("%d", size());
	printf("%d", searchNode(5));
	deleteNode(5);
	printf("%d", searchNode(5));

	printList();

    return 0;
}

void addNode(int data){
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

void deleteNode(int data){
	struct Node *temp = head;
	struct Node *prevNode = NULL;
	while(temp->link != NULL){
		if (temp->data == data){
			prevNode->link = temp->link;
			free(temp);
		}
		prevNode = temp;
		temp = temp->link;
	} 
}

bool searchNode(int data){
	struct Node *temp = head;
	bool val = false;
	while(temp->link != NULL){
		if (temp->data == data){
			val = true;
			break;
		}
		temp = temp->link;
	}
	return val;
}

int size(){
	struct Node *temp = head;
	int counter = 0;
	while(temp->link != NULL){
		temp = temp->link;
		counter++;
	}
	counter++;
	return counter;
}

void printList(){
	struct Node *temp = head;
	while(temp->link != NULL){
		printf("%d", temp->data);
		temp = temp->link;
	}
	printf("%d", temp->data);	
}
