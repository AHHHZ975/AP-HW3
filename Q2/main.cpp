#include "Maxheap.h"

int main(){	
	Maxheap h1{};
	int arr[7] {23, 1, 7, 52, 11, 10, 75};
	Maxheap h2{arr, 7};	
	h2.buildMaxHeap();
	h2.heapSort();
	h2.printArray();
	cout << h2.max() << endl;
	cout << h2.getHeight() << endl;
	cout << h2[0] << endl;
	return 0;
}