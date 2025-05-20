#include<stdio.h>
#include<stdlib.h>
#include<string>




template <typename Type>
struct treenode {
	int freq;
	
	Type data;
	treenode<Type>* parent;
	treenode<Type>* left;
	treenode<Type>* right;
	
	treenode(Type data) {
		this->data = data;
		left = right = NULL;
		parent = NULL;
	}
};

template<typename type>
class heaps {
	type* arr;
	int size;
	int capacity;

	int getParentIndex(int index) {
		return (index - 1) / 2;

	}
	bool hasLeftChildIndex(int index) {
		if (2*index + 1 < size - 1)
			return true;
		return false;

	}
	bool hasRightChildIndex(int index) {
		if (2 * index + 2 < size - 1)
			return true;
		return false;
	}
	int getLeftChildIndex(int index) {
		if (hasLeftChildIndex(index))
			return index;
		return -1;
	}
	int getRightChildIndex(int index) {
		if (hasRightChildIndex(index))
			return index;
		return -1;
	}
	void swap(int index1, int index2) {
		if (arr[index1] < arr[index2]) {
			type temp = index1;
			index1 = index2;
			index2 = temp;
			}
	}
	void bubbleup(int index) {
		while (index > 0 && arr[getParentIndex(index)] > arr[index]) {
			swap(index, getParentIndex(index));
			index = getParentIndex(index);
		}
	}
	void bubbledown(int index = arr[0]) {
		int smallest = getLeftChildIndex(index);
		while (arr[index] > arr[smallest])
		{

			if (arr[getLeftChildIndex(index)] > arr[getRightChildIndex(index)]) {
				smallest = getRightChildIndex(index);
				swap(index, smallest);
			}
		}

	}
	void insert(type item) {
		arr[size] = item;
		size++;

	}
	void poll(int* item = nullptr)
	{
		if (item != NULL)
			item = arr[0];
		arr[0] = arr[size - 1];
		size--;
		bubbledown();
		
	}
	

};

template<typename Type>
class huffman{
	heaps h;

	void build_tree{
		// create a min heap
		// insert all the characters and their frequencies into the heap
		// while there are more than one node in the heap
		// remove the two nodes with the lowest frequency
		// create a new node with these two nodes as children and their frequencies as the sum of their frequencies
		// insert this new node into the heap
	}
	int fileopen() {

		FILE* input = fopen("input.txt", "r");
		
		if (input == NULL) {
			printf("Error opening file\n");
			return 1;
		}
	
		int count = 0;
		fseek(input, 0, SEEK_END);
		int file_len = ftell(input);

		for (int i = 0; i < file_len; i++) {

			count++;
		}
		
		printf("count of bytes is: %d ", count);

		fclose(input);
		return count;
	}
	


};




int main() {


	





	return 0;
}