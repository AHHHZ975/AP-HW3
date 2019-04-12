#include "Maxheap.h"

int main(){	
	Maxheap h1{};
	int arr[12] {23, 1, 7, 52, 169, 885, 75, 24, 24, 665, 23, 2};
	Maxheap h2{arr, 12};	
	h2.buildMaxHeap();
	h2.heapSort();
	h2.printArray();	
	cout << h2 << endl;
	return 0;
}