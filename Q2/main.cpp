#include "Maxheap.h"

int main(){	
	Maxheap h1{};
	int arr[7] {23, 1, 7, 52, 11, 10, 75};
	Maxheap h2{arr, 7};
	cout << h2[1] << endl;
	h2.buildMaxHeap();
	h2.heapSort();
	h2.printArray();
	return 0;
}