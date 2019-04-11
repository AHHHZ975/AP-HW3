#include <iostream>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::vector;

class Maxheap{
public:
	Maxheap();
	Maxheap(int array[], size_t sizeOfArray);
	void add(int key);
	int getParent(size_t index);
	int getLeftChild(size_t index);
	int getRightChild(size_t index);
	void buildMaxHeap();
	void maxHeapify(vector<int>& aVector, size_t index);
	void heapSort();
	void printArray();
	~Maxheap();
private:
	int sizeOfHeapTree;
	vector<int> heapTree;
	vector<int> maxHeapTree;
};