#include <iostream>
using namespace std;

int queue[10];
int front = -1;
int back = -1;

int adjacency_matrix[4][4];
bool dfs_visited[4];
bool bfs_visited[4];

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
	adjacency_matrix[i][j] = 1;
}

void DFS(int vertex){
	dfs_visited[vertex] = true;
	cout << vertex << endl;
	for (int i = 0; i < 4; i++){
		if (adjacency_matrix[vertex][i] == 1 && !dfs_visited[i]){
			DFS(i);
		}
	}
	for (int j = 0; j < 4; j++){
		if (!dfs_visited[j]){
			DFS(j);
		}
	}
}

void BFS(int vertex){
	// enqueue the starting vertex into a queue
	// mark the vertex as visited
	enqueue(vertex);
	bfs_visited[vertex] = true;

	// loop through the vertex's nodes, while queue is not empty
		// dequeue the vertex
		// enqueue the nodes
		// display the node
		// mark as visited
	while(isEmpty() != -1){
		int n = dequeue();
		cout << n << endl;
		for (int l = 0; l < 4; l++){
			if (adjacency_matrix[n][l] == 1 && !bfs_visited[l]){
				bfs_visited[l] = true;
				enqueue(l);
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
