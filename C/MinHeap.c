#include <stdio.h>

// we need an empty array initially
// need to implement insert, min heapify and extract_min method

int min_heap[10];
int index, first, last = -1;

void insert(int data);
void min_heapify(int index);
int extract_min();
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


	printf("%d\n", extract_min());
	printf("%d\n", extract_min());
	printf("%d\n", extract_min());

	printf("%d\n", extract_min());
	printf("%d\n", extract_min());
	printf("%d\n", extract_min());

	printf("%d\n", extract_min());
	printf("%d\n", extract_min());	

	return 0;
}

void insert(int data){
	if (last == -1){
		first++;
	}
	index++;
	last++;
	min_heap[index] = data;
	int val = index/2;
	while(val != 0){
		if (min_heap[val] > data){
			int temp = min_heap[val];
			min_heap[val] = data;
			min_heap[index] = temp;
		}
		val /= 2;
	}
}

int extract_min(){
	if (last == -1){
		printf("Heap Empty !");
	}
	// get the min value
	// swap with the last element
	// call min_heapify
	int temp = min_heap[first];
	min_heap[first] = min_heap[last];
	min_heap[last] = 0;
	min_heapify(last/2);
	return temp;
}

void min_heapify(int index){
	// get the left child and right child indexes
	int min_index, left, right;
	while(index != 0){
		min_index = index;
		left = 2 * index + 1;
		right = 2 * index + 2;

		if (min_heap[left] < min_heap[index]){
			min_index = left;
		}
		else if (min_heap[right] < min_heap[index]){
			min_index = right;
		}
		swap(index, min_index);
		index /= 2;
	}
}

void swap(int index_1, int index_2){
	int temp = min_heap[index_1];
	min_heap[index_1] = min_heap[index_2];
	min_heap[index_2] = temp;
}
