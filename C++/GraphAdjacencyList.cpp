#include <iostream>
using namespace std;

struct Node {
	int data;
	Node *link;
};
Node *adjancency_list[4];
bool dfs_visited[4];
bool bfs_visited[4];

int queue[10];
int front = -1;
int back = -1;

void enqueue(int val);
int dequeue();
int peek();
bool isEmpty();
void printList();


void insert(int i, int j);
void DFS(int vertex);
void BFS(int vertex);

int main(){
	insert(0, 1);
	insert(1, 2);
	insert(2, 0);
	insert(3, 2);
	cout << "DFS" << endl;
	DFS(1);
	cout << "BFS" << endl;
	BFS(1);
	return 0;
}

void insert(int i, int j){
	// index the array with i
	// check if the linked list is empty
		// if so create the list
		// if not insert new node
	Node *temp = new Node();
	if (adjancency_list[i] == NULL){
		temp->data = j;
		temp->link = NULL; 
		adjancency_list[i] = temp;
	}
	else {
		temp->data = j;
		temp->link = adjancency_list[i];
		adjancency_list[i] = temp;
	}
}

void DFS(int vertex){
	dfs_visited[vertex] = true;
	cout << vertex << endl;
	while(adjancency_list[vertex] != NULL){
		int val = adjancency_list[vertex]->data;
		if (!dfs_visited[val]){
			DFS(val);
		}
	}
}

void BFS(int vertex){
	enqueue(vertex);
	bfs_visited[vertex] = true;
	while (isEmpty() != 1){
		int n = dequeue();
		cout << n << endl;
		while(adjancency_list[n] != NULL){
			int val = adjancency_list[vertex]->data;
			if(!bfs_visited[val]){
				enqueue(val);
				bfs_visited[val] = true;
			}
		}
	}
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
