#include <stdio.h>

struct Node {
    int val,
    Node *link
};

Node *head = NULL;

void addNode(int val);
void deleteNode(int val);
bool searchNode(int val);
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
	printf(size());
	printf(searchNode(5));
	printf(deleteNode(5));
	printf(searchNode(5));

	printList();

    return 0;
}

void addNode(int data){
	Node *temp = malloc(sizeof(struct Node));
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
	Node *temp = head;
	Node *prevNode = NULL;
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
	Node *temp = head;
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
		printf(temp->data);
		temp = temp->link;
	}
	printf(temp->data);	
}
