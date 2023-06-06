#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

struct Node {
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *root = NULL;

void insertNode(int data);
struct Node * insertNode(int data, struct Node *node);

bool searchNode(int data);
bool searchNode(int data, struct Node *node);
void deleteNode(int data);
void deleteNode(int data, struct Node *node);

int height();
int height(struct Node *node);

int size();
int size(struct Node *node);

void preOrder(struct Node *node);
void postOrder(struct Node *node);
void inOrder(struct Node *node);

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

    printf("Pre-Order Traversal\n");
	preOrder(root);

    printf("Post-Order Traversal\n");
	postOrder(root);

	printf("In-Order Traversal\n");
    inOrder(root);

    printf("Searching\n");
    printf("%d\n", searchNode(5));

    printf("Height\n");
    printf("%d\n", height());

    printf("Size\n");
    printf("%d\n", size());

    printf("Deleting\n");

	deleteNode(15);

	printf("Height\n");
    printf("%d\n", height());

	printf("Size\n");
	printf("%d\n", size());

	return 0;
}

void insertNode(int data){
	if (root == NULL){
		root = malloc(sizeof(struct Node));
		root->data = data;
		root->left = NULL;
		root->right = NULL;
	}
	else {
		insertNode(data, root);
	}
}

struct Node * insertNode(int data, struct Node *node){
	if (node == NULL){
		node = malloc(sizeof(struct Node));
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
        printf("Tree Empty !\n");
		return false;
	}
	else {
		return searchNode(data, root);
	}	
}

bool searchNode(int data, struct Node *node){
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
        printf("Tree Empty !\n");
	}
	else {
		deleteNode(data, root);
	}
}

void deleteNode(int data, struct Node *node){
	if (node->data == data){
		// what do we do here?
		// deleting leaf node (node with no children) 
			// if node->left and node->right is NULL, assign NULL
		if (node->left == NULL && node->right == NULL){
			node = NULL;
		}

		// deleting node with one child
		else if (node->left != NULL && node->right == NULL){
			struct Node *temp = node->left;
			node->data = temp->data;
			node->left = NULL;
		}

		else if (node->left == NULL && node->right != NULL){
			struct Node *temp = node->right;
			node->data = temp->data;
			node->right = NULL;
		}

		// deleting node with children
			// get the inorder successor
			// swap
			// call deleteNode on swapped node
		else {
			struct Node *temp = node->right;
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

int height(struct Node *node){
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

int size(struct Node *node){
	if (node == NULL){
		return 0;
	}
	else {
		return size(node->left) + size(node->right) + 1;
	}
}

void preOrder(struct Node *node){
	if (node != NULL){
        printf("%d\n", node->data);
		preOrder(node->left);
		preOrder(node->right);
	}
}

void postOrder(struct Node *node){
	if (node != NULL){
		postOrder(node->left);
		postOrder(node->right);
        printf("%d\n", node->data);
	}
}

void inOrder(struct Node *node){
	if (node != NULL){
		inOrder(node->left);
        printf("%d\n", node->data);
		inOrder(node->right);
	}
}
