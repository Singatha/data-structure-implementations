#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* link;
};

Node *head = NULL;

void add(int val);
void deleteNode(int val);
bool search(int val);
int size();
void printList();


int main(){
	cout << "Hello There !" << endl;
	
	add(1);
	add(3);
	add(5);
	add(7);
	add(9);

	printList();
	cout << size() << endl;
	cout << search(5) << endl;
	deleteNode(5);
	cout << search(5) << endl;

	printList();
	return 0;
}

void add(int data){
	Node *temp = new Node();
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
			delete temp;
		}
		prevNode = temp;
		temp = temp->link;
	} 
}

bool search(int data){
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
		cout << temp->data << endl;
		temp = temp->link;
	}
	cout << temp->data << endl;	
}
