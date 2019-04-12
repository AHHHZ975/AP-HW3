#include "Maxheap.h"

int main(){	
	Maxheap h1{};
	h1.add(25);
	h1.add(32);
	h1.add(17);
	h1.add(23);
	h1.add(101);  
 	h1.printArray();
	std::cout << h1 << std::endl;  
	/* 
	101,
	32, 25,
	23, 17
	*/
	cout << h1.parent(2) << endl; // 101
	cout << h1.LeftChild(0) << endl;  // 32
	cout << h1.RightChild(0) << endl;  // 25


	int arr[7] {23, 1, 7, 52, 11, 10, 75};
	Maxheap h2{arr, 7};
			
	cout << h2 << endl;  
	cout << h2.getHeight() << endl; // 2


	Maxheap h3{h2};

	h2.heapSort();
	h2.printArray(); // 75, 52, 23, 11, 10, 7, 1

	
	cout << h3.max() << endl; //75

	h3[0] = h3[0] - 25; 

	cout << h3.max() << endl; //52
	h3.Delete();
	cout << h3.max() << endl; //50

	return 0;
}