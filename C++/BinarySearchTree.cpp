#include <iostream>
#include <cmath>
using namespace std;

struct Node {
	int data;
	Node *left;
	Node *right;
};

Node *root = NULL;

void insertNode(int data);
Node * insertNode(int data, Node *node);

bool searchNode(int data);
bool searchNode(int data, Node *node);
void deleteNode(int data);
void deleteNode(int data, Node *node);

int height();
int height(Node *node);

int size();
int size(Node *node);

void preOrder(Node *node);
void postOrder(Node *node);
void inOrder(Node *node);

int main(){

	insertNode(11);
	insertNode(9);
	insertNode(7);
	insertNode(5);
	insertNode(3);
	insertNode(1);
	insertNode(13);
	insertNode(15);
	insertNode(17);

	cout << "Pre-Order Traversal" << endl;
	preOrder(root);

	cout << "Post-Order Traversal" << endl;
	postOrder(root);

	cout << "In-Order Traversal" << endl;
	inOrder(root);

	cout << "Searching" << endl;
	cout << searchNode(5) << endl;
	cout << "Height" << endl;
	cout << height() << endl;
	cout << "Size" << endl;
	cout << size() << endl;

	cout << "Deleting" << endl;
	deleteNode(15);
	cout << "Height" << endl;
	cout << height() << endl;
	cout << "Size" << endl;
	cout << size() << endl;

	return 0;
}

void insertNode(int data){
	if (root == NULL){
		root = new Node();
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}
	else {
		insertNode(data, root);
	}
}

Node * insertNode(int data, Node *node){
	if (node == NULL){
		node = new Node();
		node->data = data;
		return node;
	}
	else if (node->data > data){
		node->left = insertNode(data, node->left);
	}
	else if (node->data < data){
		node->right = insertNode(data, node->right);
	}
}

bool searchNode(int data){
	if (root == NULL){
		cout << "Tree Empty !" << endl;
		return false;
	}
	else {
		return searchNode(data, root);
	}	
}

bool searchNode(int data, Node *node){
	if (node->data == data){
		return true;
	}
	else if (node->data > data){
		return searchNode(data, node->left);
	}
	else if (node->data < data){
		return searchNode(data, node->right);
	}
}

void deleteNode(int data){
	if (root == NULL){
		cout << "Tree Empty !" << endl;
	}
	else {
		deleteNode(data, root);
	}
}

void deleteNode(int data, Node *node){
	if (node->data == data){
		// what do we do here?
		// deleting leaf node (node with no children) 
			// if node->left and node->right is NULL, assign NULL
		if (node->left == NULL && node->right == NULL){
			node = NULL;
		}

		// deleting node with one child
		else if (node->left != NULL && node->right == NULL){
			Node *temp = node->left;
			node->data = temp->data;
			node->left = NULL;
		}

		else if (node->left == NULL && node->right != NULL){
			Node *temp = node->right;
			node->data = temp->data;
			node->right = NULL;
		}

		// deleting node with children
			// get the inorder successor
			// swap
			// call deleteNode on swapped node
		else {
			Node *temp = node->right;
			while (temp != NULL){
				temp = temp->left;
			}
			int val = temp->data;
			temp->data = node->data;
			node->data = val;
			deleteNode(node->data, temp); 
		}
	}
	else if (node->data > data){
		deleteNode(data, node->left);
	}
	else if (node->data < data){
		deleteNode(data, node->right);
	}
}

int height(){
	if (root == NULL){
		return 0;
	}
	else {
		return max(height(root->left) + 1, height(root->right) + 1);
	}
}

int height(Node *node){
	if (node == NULL){
		return 0;
	}
	else if (node->left != NULL){
		return height(node->left) + 1;
	}
	else if (node->right != NULL){
		return height(node->right) + 1;
	}
}

int size(){
	if (root == NULL){
		return 0;
	}
	else {
		return size(root->left) + size(root->right) + 1;		
	}
}

int size(Node *node){
	if (node == NULL){
		return 0;
	}
	else {
		return size(node->left) + size(node->right) + 1;
	}
}

void preOrder(Node *node){
	if (node != NULL){
		cout << node->data << endl;
		preOrder(node->left);
		preOrder(node->right);
	}
}

void postOrder(Node *node){
	if (node != NULL){
		postOrder(node->left);
		postOrder(node->right);
		cout << node->data << endl;
	}
}

void inOrder(Node *node){
	if (node != NULL){
		inOrder(node->left);
		cout << node->data << endl;
		inOrder(node->right);
	}
}
