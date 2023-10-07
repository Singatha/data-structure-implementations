#include <stdio.h>

// we need an empty array initially
// need to implement insert, max heapify and extract_min method

int max_heap[10];
int index, first, last = -1;

void insert(int data);
void max_heapify(int index);
int extract_max();
void swap(int index_1, int index_2);

int main(){
	printf("Hello There !");

	insert(7);
	insert(2);
	insert(5);

	insert(4);
	insert(3);
	insert(6);

	insert(1);
	insert(8);


	printf("%d\n", extract_max());
	printf("%d\n", extract_max());
	printf("%d\n", extract_max());

	printf("%d\n", extract_max());
	printf("%d\n", extract_max());
	printf("%d\n", extract_max());

	printf("%d\n", extract_max());
	printf("%d\n", extract_max());

	return 0;
}

void insert(int data){
	if (last == -1){
		first++;
	}
	index++;
	last++;
	max_heap[index] = data;
	int val = index/2;
	while(val != 0){
		if (max_heap[val] < data){
			int temp = max_heap[val];
			max_heap[val] = data;
			max_heap[index] = temp;
		}
		val /= 2;
	}
}

int extract_max(){
	if (last == -1){
		printf("Heap Empty !");
	}
	// get the max value
	// swap with the last element
	// call max_heapify
	int temp = max_heap[first];
	max_heap[first] = max_heap[last];
	max_heap[last] = 0;
	max_heapify(last/2);
	return temp;
}

void max_heapify(int index){
	// get the left child and right child indexes
	int max_index, left, right;
	while(index != 0){
		max_index = index;
		left = 2 * index + 1;
		right = 2 * index + 2;

		if (max_heap[left] > max_heap[index]){
			max_index = left;
		}
		else if (max_heap[right] > max_heap[index]){
			max_index = right;
		}
		swap(index, max_index);
		index /= 2;
	}
}

void swap(int index_1, int index_2){
	int temp = max_heap[index_1];
	max_heap[index_1] = max_heap[index_2];
	max_heap[index_2] = temp;
}
